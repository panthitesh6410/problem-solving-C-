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
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]<v[j])
                    v.erase(v.begin()+i);
            }
        }
        if(v.size()>1)
            cout<<"NO";
        else
            cout<<"YES";
    }
    return 0;
}