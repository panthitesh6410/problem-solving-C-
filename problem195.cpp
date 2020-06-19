// TCS Mockvita Problem-A (2020) :

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
        int sum = 0, count = 0;
        for(int i=1;i<=n;i++)
        {
            if(sum < n)
            {
                sum = sum + i;
                count++;
            }
            else
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}