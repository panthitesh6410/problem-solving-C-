// balanced array (geeksforgeeks) :
// balanced array : sum(left subarray) == sum(right subarray)

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        if(n%2==0)
        {
            int index1 = (n/2)-1, index2 = n/2;
            int sum1=0, sum2=0;
            for(int j=0;j<=index1;j++)
                sum1 += arr[j];
            for(int j=index2;j<n;j++)
                sum2 += arr[j];
            cout<<abs(sum1-sum2)<<endl; 
        }
        else{
            // n = 5, (0 1 | 2 | 3 4)
            int index1 = (n/2)-1, index2 = (n/2)+1;
            int sum1=0, sum2=0;
            for(int j=0;j<=index1;j++)
                sum1 += arr[j];
            for(int j=index2;j<n;j++)
                sum2 += arr[j];
            cout<<abs(sum1-sum2)<<endl;
        }
    }
    return 0;
}