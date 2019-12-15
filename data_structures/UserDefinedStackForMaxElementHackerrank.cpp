#include <bits/stdc++.h> 
using namespace std; 
  
// A user defined stack that supports getMax() in 
// addition to push() and pop() 
struct MyStack { 
    stack<int> s; 
    int maxEle; 
  
    // Prints maximum element of MyStack 
    int getMax() 
    { 
        if (s.empty()) 
            //cout << "Stack is empty\n"; 
            return 0;
  
        // variable maxEle stores the maximum element 
        // in the stack. 
        else
            return maxEle; 
    } 
  
    // Remove the top element from MyStack 
    void pop() 
    { 
        if (s.empty()) { 
            return ; 
        } 
  
        
        int t = s.top(); 
        s.pop(); 
  
        // Maximum will change as the maximum element 
        // of the stack is being removed. 
        if (t > maxEle) { 
            //cout << maxEle << "\n"; 
            maxEle = 2 * maxEle - t; 
        } 
    } 
  
    // Removes top element from MyStack 
    void push(int x) 
    { 
        // Insert new number into the stack 
        if (s.empty()) { 
            maxEle = x; 
            s.push(x);  
            return; 
        } 
  
        // If new number is less than maxEle 
        if (x > maxEle) { 
            s.push(2 * x - maxEle); 
            maxEle = x; 
        } 
  
        else
            s.push(x); 
    } 
}; 
  
// Driver Code 
int main() 
{
    int t,x,n;
    cin>>n;
    MyStack s; 
    while(n--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            cin>>x;
            s.push(x);
        }
        else if(t==2)
        {
            s.pop();
        }
        else
        {
            cout<<s.getMax()<<endl;
        }
    }
    return 0;
}
