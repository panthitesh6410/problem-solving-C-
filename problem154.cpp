// Google, Amazon, Snapdeal, VMware

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
        int count=0;
        int start=0, end=n-1, max=0;
        while(start != end)
        {
            if((arr[start] < arr[end]))
            {
                if(end-start >= max)
                    max = end-start;
            }
            if(count % 2 == 0)
                start++;
            else
                end--;
            count++;
        }
        cout<<max<<endl;
    }
    return 0;
}