// HackerRank - Game of Two Stacks :

#include<stack>
#include<iostream>
using namespace std;

int main()
{
    int g;
    cin>>g;               // no. of games
    for(int i=1;i<=g;i++)
    {
        int n, m, x;     // stackA, stackB, sum
        cin>>n>>m>>x;
        stack<int> A, B, C;
        for(int j=0;j<n;j++)
        {
            int num;
            cin>>num;
            C.push(num);
        }
        for(int j=0;j<n;j++)
        {
            A.push(C.top());
            C.pop();
        }
        for(int j=0;j<m;j++)
        {
            int num;
            cin>>num;
            C.push(num);
        }
        for(int j=0;j<m;j++)
        {
            B.push(C.top());
            C.pop();
        }
        int sum=0, flagA=1, flagB=0, count=0;
        while(sum <= x)
        {
            if(flagA == 1)
            {
                sum = sum + A.top();
                A.pop();
                flagA = 0;
                flagB = 1;
                count++;
            }
            else
            {
                sum = sum + B.top();
                B.pop();
                flagA = 1;
                flagB = 0;
                count++;
            }
        }
        cout<<count-1<<endl;
    }
    return 0;
}