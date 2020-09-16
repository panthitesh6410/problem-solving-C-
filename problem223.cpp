// nagarro - prints 2nd lowest value :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=min)
            min = arr[i];
    } 
    int mini = arr[0];
    for(int i=0;i<n;i++)
    {
        if((arr[i] <= mini) && (arr[i] != min))
            mini = arr[i];
    }
    cout<<mini;
    return 0;
}

//  3 1 6 4 2