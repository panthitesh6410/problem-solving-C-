//  Special Stack 
//(Amazon/Adobe/Paytm/GoldmanSach/VMWare/LinkedIn/Walmart)
// Design a data-structure SpecialStack (using the STL of stack) 
// that supports all the stack operations like push(), pop(), isEmpty(),
// isFull() and an additional operation getMin() which should 
// return minimum element from the SpecialStack. 
// Your task is to complete all the functions, using stack data-Structure.

#include<stack>
#include<iostream>
using namespace std;
int getMin(stack<int> s, int n)
{
    int min = 99999;
    while(s.empty() != 1)
    {
        if(s.top() <= min)
            min = s.top();
        s.pop();
    }
    return min;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        stack<int> s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            s.push(num);
        }
        cout<<getMin(s, n);
        cout<<endl;
        cout<<s.size();
    }
    return 0;
}