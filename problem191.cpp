// HP :

#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count[n]={1};
    sort(arr, n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
                count[i]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(count[i] == 2)
        {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}