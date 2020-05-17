// Google KickStart 2020 - Round C (problem4) :
// Candies -

#include<iostream>
using namespace std;

int calculate_sum(int arr[], int n, int l, int r)
{
    int sum=0, j=1;
    for(int i=l;i<=r;i++)
    {
       if(j%2 != 0)
       {
            sum += arr[i]*j;
            j++;
       }
       else
       {
            sum -= arr[i]*j;
            j++;
       }
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        int n, q;
        cin>>n>>q;
        int arr[n];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        int final_sum = 0;
        for(int i=1;i<=q;i++)
        {
            char c;
            cin>>c;  // Q or U
            if(c == 'U')
            {
                int x, v;
                cin>>x>>v;  // change x to v
                arr[x] = v;
            }
            else
            {
                int l, r;
                cin>>l>>r;    // left, right indices
                final_sum += calculate_sum(arr, n, l, r);
            }
        }
        cout<<"Case #"<<z<<": "<<final_sum<<endl;
    }
    return 0;
}