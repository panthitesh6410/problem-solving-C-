// Asked by Stripe -
// find 1st +ve missing integer in  array :

#include<iostream>
using namespace std;

bool not_in_array(int arr[], int n, int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == num)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max = -2;
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= max)
            max = arr[i];
    }
    for(int i=1;i<max;i++)
    {
        if(!not_in_array(arr, n, i))
        {
            cout<<i;
            break;
        }
        else
        {
            cout<<max+1;
            break;
        }
    }
    return 0;
}