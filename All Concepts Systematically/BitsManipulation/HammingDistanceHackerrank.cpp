#include <algorithm>
#include <cstdio>
#include <cstdint>
#include <set>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int ri()
{
  int x;
  scanf("%d", &x);
  return x;
}

const int N = 50000, NN = (N+63)/64;
char a[N+1];
typedef uint64_t u64;

u64 rev(u64 x)
{
  x = (x & 0xaaaaaaaaaaaaaaaaull) >> 1 | (x & 0x5555555555555555ull) << 1;
  x = (x & 0xccccccccccccccccull) >> 2 | (x & 0x3333333333333333ull) << 2;
  x = (x & 0xf0f0f0f0f0f0f0f0ull) >> 4 | (x & 0x0f0f0f0f0f0f0f0full) << 4;
  x = (x & 0xff00ff00ff00ff00ull) >> 8 | (x & 0x00ff00ff00ff00ffull) << 8;
  x = (x & 0xffff0000ffff0000ull) >>16 | (x & 0x0000ffff0000ffffull) <<16;
  return x >> 32 | x << 32;
}

struct BitSet
{
  u64 a[NN];
  BitSet() { clear(); }
  void clear() { fill_n(a, NN, 0); }
  void flip(int i) { a[i>>6] ^= 1ull << (i&63); }
  int get(int i) const { return a[i>>6] >> (i&63) & 1; }
  void set(int i, int v) { if (get(i) != v) flip(i); }
  void word(int i, u64 w) {
    int j = i>>6;
    a[j] |= w << (i&63);
    i += 63;
    j = i>>6;
    if (j < NN)
      a[j] |= w >> 63-(i&63);
  }
  BitSet shr(int i) {
    BitSet ret;
    int o = i & 63, shift = i/64;
    if (! o)
      REP(i, NN-shift)
        ret.a[i] = a[i+shift];
    else {
      REP(i, NN-shift-1)
        ret.a[i] = a[i+shift]>>o | a[i+shift+1]<<64-o;
      ret.a[NN-shift-1] = a[NN-1]>>o;
    }
    return ret;
  }
  void fill(int l, int r, int v) {
    for (int i = l; i < r; )
      if (i&63 || i+63 >= r) {
        set(i, v);
        i++;
      } else {
        a[i>>6] = v ? -1ull : 0;
        i += 64;
      }
  }
  void copy(const BitSet &o, int l, int r, int to) {
    int shift = to-l;
    for (int i = l; i < r; )
      if (i&63 || i+63 >= r) {
        set(i+shift, o.get(i));
        i++;
      } else {
        word(i+shift, o.a[i>>6]);
        i += 64;
      }
  }
  void reverse(int l, int r) {
    BitSet t = *this;
    fill(l, r, 0);
    for (int i = l; i < r; )
      if (i&63 || i+63 >= r) {
        set(r-1-(i-l), t.get(i));
        i++;
      } else {
        word(r-64-(i-l), rev(t.a[i>>6]));
        i += 64;
      }
  }
  BitSet operator^(const BitSet &o) const {
    BitSet ret;
    REP(i, NN)
      ret.a[i] = a[i] ^ o.a[i];
    return ret;
  }
};

int main()
{
  int n = ri();
  BitSet b;
  scanf("%s", a);
  REP(i, n)
    if (a[i] == 'b')
      b.flip(i);
  for (int m = ri(); m--; ) {
    char op;
    scanf(" %c", &op);
    int x = ri()-1, y = ri();
    switch (op) {
    case 'C': {
      scanf(" %c", &op);
      b.fill(x, y, op-'a');
      break;
    }
    case 'R':
      b.reverse(x, y);
      break;
    case 'W':
      FOR(i, x, y)
        a[i-x] = 'a'+b.get(i);
      a[y-x] = '\0';
      puts(a);
      break;
    case 'S': {
      int xx = ri()-1, yy = ri();
      BitSet t = b;
      b.fill(x, yy, 0);
      b.copy(t, x, y, yy-(y-x));
      b.copy(t, y, xx, x+(yy-xx));
      b.copy(t, xx, yy, x);
      break;
    }
    case 'H': {
      y--;
      if (x > y)
        swap(x, y);
      int z = ri(), pop = 0;
      BitSet t = b ^ b.shr(y-x);
      for (int i = x; i < x+z; )
        if (i&63 || i+63 >= x+z)
          pop += t.get(i++);
        else {
          pop += __builtin_popcountll(t.a[i>>6]);
          i += 64;
        }
      printf("%d\n", pop);
      break;
    }
    }
  }
}

