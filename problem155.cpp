// Amazon, Google, Microsoft 
// Finding the Numbers :

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
        int arr[2*n+2];
        for(int i=0;i<2*n+2;i++)
            cin>>arr[i];
        int count[2*n+2]={0};
        for(int i=0;i<2*n+2;i++)
        {
            for(int j=0;j<2*n+2;j++)
            {
                if(arr[i] == arr[j] && i != j)
                    count[i]++;
            }
        }
        for(int i=0;i<2*n+2;i++)
        {
            if(count[i] == 0)
                cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}