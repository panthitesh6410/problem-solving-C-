// Given two arrays, compute their intersection elements.

#include<vector>
#include<iostream>
using namespace std;

bool check(vector<int> v, int num)
{
    bool result = false;
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == num)
        {
            result = true;
            break;
        }
    }
    return result;
}

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i] == b[j])
            {
                // check if a[i] already in v , if not, then push into it
                if(check(v, a[i]) == false)
                    v.push_back(a[i]);
            }
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}