// CODECHEF June Challenge 2020 
// Chef and Icecream :

// WRONG ANSWER

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int money[n];
        for(int i=0;i<n;i++)
            cin>>money[i];
        int pocket = 0, flag = 0;
        for(int i=0;i<n;i++)
        {
            if(money[i] == 5)
                pocket += 5;
            else
            {
                if(money[i] - 5 > pocket)
                {
                    flag = 1;
                    break;
                }
            }    
        }
        if(flag == 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}