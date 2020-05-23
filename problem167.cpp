// Codesites : (ASked by Facebook) -
// Max Sum Continuous Subaray -

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int final_sum = arr[0];
    for(int i=0;i<n-1;i++)
    {
        int ori_sum = arr[i];
        if(ori_sum > final_sum)
                final_sum = ori_sum;
        for(int j=i+1;j<n;j++)
        {
            ori_sum += arr[j];
            if(ori_sum > final_sum)
                final_sum = ori_sum;
        }
    }
    cout<<final_sum;
    return 0;
}