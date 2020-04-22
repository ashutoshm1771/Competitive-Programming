// Author : Ashutosh Mishra

#include<iostream>
#include<string>
using namespace std;
#define ll long long
//A FUNCTION TO CHECK LEADING ZERO
// LOGIC IS SIMPLE NUMBER OF DIGIT IN THE NUMBER FORMED MUST BE EQUAL TO THE NUMBER OF THE DIGIT WE ARE RUNNING LOOP FOR
bool checkLeadingZero(ll next_num,ll temp_dig)
{
 ll count=0;
 while(next_num) {
 count++;
 next_num/=10;
 }
 return count==temp_dig;
}
int main()
{
 ll q; cin>>q;
 while(q--)
 {
 string s; cin>>s;
 ll len = s.length();
 bool flag = false;
 ll firstNum=0;
 for(ll dig=1;dig<=len/2;dig++) // loop for each length
 {
 ll max =0; //setting max for each digit number
 for(ll i=1;i<=dig;i++) // CALCULATING MAX
 max = max*10+9;
 ll temp_dig = dig; //setting temp digit as we have to increase the digit if we found that number reaches to max
firstNum = 0;
 for(ll i=0;i<dig;i++)
 firstNum = firstNum*10 + (s[i]-'0'); // forming the number as input is the string
if(checkLeadingZero(firstNum,dig)==false)
 {
 flag=false;
 break;
 }
 ll j=dig;
 ll currentNum = firstNum; //setting current
while(1)
 {
 if(j == len){
 flag = true;
 break;
 }
 if(currentNum == max) temp_dig++;
 ll next_num =0;
 if(j+temp_dig > len)
 break;
 for(int i=j;i<j+temp_dig;i++) // forming next number 
 next_num = next_num*10 + (s[i]-'0');
if(next_num - currentNum!=1)
 break;
 else
 {
 currentNum=next_num;
 j = j+temp_dig;
 }
 }
 if(flag==true) break;
 }
 if(flag==true) cout<<"YES "<<firstNum<<endl;
 else cout<<"NO"<<endl;
 }
}
