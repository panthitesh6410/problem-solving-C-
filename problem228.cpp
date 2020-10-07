// HackerRank - Jim and the Orders :

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    struct node{
        int index, value;
    };
    int n;
    cin>>n;
    struct node arr[n];
    int prep_time[n];
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        prep_time[i] = x + y;
        arr[i].value = x + y;
        arr[i].index = i;
    }
    sort(prep_time, prep_time+n);
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(prep_time[i] == arr[j].value)
            {
                v.push_back(arr[j].index);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]+1<<" ";
    return 0;
}