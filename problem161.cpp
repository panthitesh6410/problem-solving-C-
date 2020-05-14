
#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] < arr[i+1])
            count++;
    }
    if(count == n-1)
        return true;
    return false;
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
    // if we can sort arr by swapping any element by num
    // print--> Swapped 1, 2, 3, 4
    // else Not Swapped
    // NOTE - swapping can be performed only once
    if(sorted(arr, n))
    {
        cout<<"Swapped ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
    else
    {
        int index;
        // swap num with any element to make it sorted
        for(int i=0;i<n;i++)
        {
            if(arr[i] == num)
                index = i;
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] > arr[i+1] && arr[i] != num)
            {
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index] = arr[i];
            }
        }
        cout<<"Swapped ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }

    return 0;
}
