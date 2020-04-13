// HackerRank - (Equal Stacks) :

#include<stack>
#include<iostream>
using namespace std;

int count(stack<int> s)
{
    int U = 0;
    while(!s.empty())
    {
        U = U + s.top();
        s.pop();
    }
    return U;
}

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    stack<int> s1, s2, s3;

    for(int i=0;i<n1;i++)
    {
        int num;
        cin>>num;
        s1.push(num);
    }
    for(int i=0;i<n2;i++)
    {
        int num;
        cin>>num;
        s2.push(num);
    }
    for(int i=0;i<n3;i++)
    {
        int num;
        cin>>num;
        s3.push(num);
    }

    int U1 = count(s1);
    int U2 = count(s2);
    int U3 = count(s3);
    // cout<<U1<<" "<<U2<<" "<<U3<<endl;
    while(U1 != U2 && U2 != U3)
    {
        if(U1>U2 && U1>U3)
        {
            U1 = U1 - s1.top();
            s1.pop();
            // cout<<U1<<endl;
        }
        else if(U2>U1 && U2>U3)
        {
            U2 = U2 - s2.top();
            s2.pop();
            // cout<<U2<<endl;
        }
        else if(U3>U1 && U3>U2)
        {
            U3 = U3 - s3.top();
            s3.pop();
            // cout<<U3<<endl;
        }
    }
    if(count(s1) == count(s2) && count(s2) == count(s3))
        cout<<count(s1);
    // else
    //     cout<<"NO";

    return 0;
}