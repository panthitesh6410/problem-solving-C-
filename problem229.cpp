// HackerRank - Largest Permutations :

#include<iostream>
using namespace std;
int find_largest(int arr[], int n, int index)
{
    int max=arr[index];
    int ret = index;
    for(int i=index;i<n;i++)
    {
       if(max < arr[i])
        {
            max = arr[i];
            ret = i;
        }
    }
    return ret;
}
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int large_index = find_largest(arr, n, i);
        // cout<<large_index;
        if(arr[large_index] != arr[i])
        {
            int temp = arr[large_index];
            arr[large_index] = arr[i];
            arr[i] = temp;
            k--;
        }
        if(k <= 0)
            break;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}