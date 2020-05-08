// Leetcode May Challenge Day-6 :
// Majority Element :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // O/P : count[i] > n/2
    int count[n] = {0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
                count[i]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int c;
        if(count[i] > n/2)
        {
            if(c != arr[i])
            {
                cout<<arr[i]<<" ";
                c = arr[i];
            }
        }
    }
}