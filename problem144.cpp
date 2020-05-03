// HackerRank - Jesse and Cookies :

#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min = j;
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selection_sort(arr, n);
    // 1 2 3 9 10 12 --> 2
    int count=0, sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<k)
        {
            arr[i+1] = arr[i] + arr[i+1]*2;
            sum ++;
            // i++;
            count++;
            selection_sort(arr, n);
        }
        else
            break;
    }
    if(sum >= n)
        cout<<"-1";
    else
        cout<<count;
    return 0;
}