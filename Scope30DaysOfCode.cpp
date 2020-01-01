#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
      int diff=0;
        Difference(vector<int> a)
        {
            elements=a;
        }
        int computeDifference()
        {
            maximumDifference=abs(elements[0]-elements[1]);
            for(int i=0;i<elements.size()-1;i++)
            {
                for(int j=i+1;j<elements.size();j++)
                {
                    diff=abs(elements[i]-elements[j]);
                    maximumDifference=max(maximumDifference,diff);
                }
            }
            return maximumDifference;
        }
	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
