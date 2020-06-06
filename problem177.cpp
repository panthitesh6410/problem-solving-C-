// Google Interview Question (Codesites) -
// Maximum Conecutive Ones :

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
        int max_count = 0;
        for(int i=0;i<n-1;i++)
        {
            int count = 0;
            if(arr[i] == 1)
            {       
                int j=i;
                while(arr[j] == 1)
                {
                    count++;
                    j++;
                }
            }
            if(count > max_count)
                max_count = count;
        }
        cout<<max_count<<endl;
    }
    return 0;
}