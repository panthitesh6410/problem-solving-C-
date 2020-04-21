// Perfect Subarray :
// find count of subarray whose elements sum is any perfect square no.

#include<iostream>
using namespace std;

bool is_perfect(int sum)
{
    bool result = false;
    for(int i=1;i<=(sum/2);i++)
    {
        if(sum == (i*i))
            result = true;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int start=i, end=j, sum=0;
            if(start>end)
            {
                while(start<=end)
                {   
                    sum = sum +  (arr[i]+arr[j]);
                    start++;
                }
                if(is_perfect(sum))
                    count++;
            }
            else
            {
                while(start>=end)
                {
                    sum = sum +  (arr[i]+arr[j]);
                    start--;
                }
                if(is_perfect(sum))
                    count++;
            }
        }
    }
    cout<<count;
    return 0;
}