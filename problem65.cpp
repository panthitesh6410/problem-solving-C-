// array left rotation : 

#include<iostream>
using namespace std;

void rotate(int arr[], int d, int n)
{   
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i] = arr[i];
    for(int i=d+1, j=0;i<n, j<n-d;i++, j++)
    {
        arr[j] = arr[i];
    }
    for(int i=n-d, j=0;i<=n, j<d;i++, j++)
        arr[i] = temp[j];
}

int main()
{
    int n, d;
    cin>>n>>d;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"array before rotation :"<<endl;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    rotate(arr, d, n);

    cout<<"\narray ater rotation :"<<endl;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}