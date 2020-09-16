// naggaro - print repeating values :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        int flag = 0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
                flag++;
        }
        if( flag == 1)
            cout<<arr[i]<<" ";
    }
    return 0;
}
