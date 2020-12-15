// Capgemini Round 2 : (By Jyotirmaya) (Kadane's Algo): 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    int start_i=0,start_j=0;
    long long max_sum = 0;
    while(true)
    {
        if(start_j <= n-2)
            start_j += 1;
        // cout << " ----------------------- " << start_i << " : " << start_j << "--------------------------" << endl;
        int i = start_i,j = start_j;
        long long max_ending = 0;
        while(i < j)
        {
            // cout << i << " : " << j << endl;
            max_ending = max_ending + ((long long)arr[i] * arr[j]);
            if(max_sum < max_ending)
                max_sum = max_ending;
            if(max_ending < 0)
                max_ending = 0;
            i += 1;
            j -= 1;
        }
        if(start_j == n-1)
            start_i += 1;
        if(start_i == n-1)
            break;        
    }
    printf("%lld\n",max_sum);
    return 0;
}