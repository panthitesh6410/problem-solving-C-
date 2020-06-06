// SAP Interview Question :

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
        int arr[n-1];
        for(int i=0;i<n-1;i++)
            cin>>arr[i];
        // I/P - 4
        // 1, 2, 4
        // O/P - 3
        for(int i=1;i<=n;i++)
        { 
            int flag = 0;
            for(int j=0;j<n-1;j++)
            {
                if(i == arr[j])
                    flag = 1;
            }
            if(flag == 0)
            {
                cout<<i;
                break;
            }
        }
    }
    return 0;
}