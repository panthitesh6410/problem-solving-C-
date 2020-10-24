// HackerRank - Maximum Subarray :

#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int max_subarray_sum=0;
        // max_sub_array
        for(int i=0;i<n;i++)
        {
            int max_sum = arr[i];
            for(int j=0;j<n;j++)
            {
                if(i != j)
                {
                    max_sum += arr[j];
                    if(max_sum >= max_subarray_sum)
                        max_subarray_sum = max_sum;
                }
            }
        }
        // max_subseq_sum
        sort(arr, arr+n);
        int max_subseq_sum=0, max_sum=0;
        for(int i=n-1;i>=0;i--)
        {
            max_sum += arr[i];
            if(max_sum >= max_subseq_sum)
                max_subseq_sum = max_sum;
        }

        cout<<max_subarray_sum<<" "<<max_subseq_sum<<endl;
    }
    return 0;
}