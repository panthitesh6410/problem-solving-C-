#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int k;
        cin>>k;
        int arr[k];
        for(int j=0;j<k;j++)
            cin>>arr[j];
        int count = 0, in = 1;
        // char keys[4] = {'A', 'B', 'C', 'D'};
        for(int j=1;j<k;j++)
        {
            // char curr_key = key[in];
            int in_count = 0;
            for(int l=0;l<j;l++)
            {
                // int key_index = j%4;
                if(arr[j]>arr[l])
                {
                    in_count++;
                }
                    
            }
            if(in_count == j)
            {
                if(j%4 == 0)
                    count++;
            }
        }
        cout<<"Case #"<<i<<": "<<count<<endl;
    }
    return 0;
}