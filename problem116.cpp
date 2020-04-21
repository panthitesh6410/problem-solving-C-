#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int x, n;
    cin>>x>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count = 0;
    bubble_sort(arr, n);
    int i=0;
    while(arr[i] < x)
    {
        x = x - arr[i];
        count++;
        i++;
    }
    cout<<count;
    return 0;
}