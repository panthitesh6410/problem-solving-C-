// TCS Codevita -
// Collecting Candies :

#include<vector>
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
        int time = 0;
        int sum = arr[0];
        vector<int> v;
        for(int i=1;i<n;i++)
        {
            sum += arr[i];
            v.push_back(sum);
        }
        for(int i=0;i<v.size();i++)
            time += v[i];
        cout<<time<<endl;
    }   
    return 0;
}