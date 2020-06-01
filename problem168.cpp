// CODESITES : Equilibrium Point (Asked by Adobe) -

#include<iostream>
using namespace std;
int sum(int arr[], int l, int h)
{
    int sum = 0;
    for(int i=l;i<=h;i++)
        sum += arr[i];
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        int mid = n/2 + 1;
        int result = mid;
        int lsum = sum(arr, 1, mid-1);
        int rsum = sum(arr, mid+1, n);
        while(lsum < rsum)
        {
            mid++;
            lsum = sum(arr, 1, mid-1);
            rsum = sum(arr, mid+1, n);
            if(lsum == rsum)
            {
                result = mid;
                break;
            }
        }
        while(lsum > rsum)
        {
            mid--;
            lsum = sum(arr, 1, mid-1);
            rsum = sum(arr, mid+1, n);
            if(lsum == rsum)
            {
                result = mid;
                break;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}