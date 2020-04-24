// Binary Search :

#include<iostream>
using namespace std;

// Non-Recursive Method :
// int binary_search(int arr[], int l, int h, int num)
// {
//     int mid;
//     while(l <= h)
//     {
//         mid = (l+h)/2;
//         if(arr[mid] == num)
//             return 1;
//         if(arr[mid] > num)
//             h = mid-1;
//         else
//             l = mid+1;
//     }
//     return 0;
// }

// Recursive Method :
int binary_search(int arr[], int l, int h, int num)
{
    if(l<=h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == num)
            return 1;
        else if(arr[mid] > num)
            binary_search(arr, l, mid-1, num);
        else
            binary_search(arr, mid+1, h, num);
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int num;
    cin>>num;
    if(binary_search(arr, 0, n-1, num) == 1)
        cout<<num<<" is  present";
    else
        cout<<num<<" is  absent";
    return 0;
}