// Valid Mountain Array :
        // 1,2,3,4,5,2,1 - True
        // 0,2,3,4,5 - False
        //0,2,3,5,5,6,2,1 - False

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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int flag = 0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] > arr[i+1])
                flag = 1;
            else
                flag = 0;
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] == arr[i+1])
                flag = 0;
        }
        if(flag == 0)
            cout<<"False"<<endl;
        else
            cout<<"True"<<endl;
    }
    return 0;
}

