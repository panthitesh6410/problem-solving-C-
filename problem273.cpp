// i/p - 12, 102
// x=[1,2,12]    y=[1,2,10,12,102]
// o/p - (1,1)(2,2)(12,12) = 3

#include<vector>
#include<iostream>
using namespace std;
vector<int> find_per(int num)
{
    
}
int main()
{
    int a, b;
    cin>>a>>b;
    vector<int> v1,v2;
    v1 = find_per(a);
    v2 = find_per(b);
    int count = 0;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(v1[i] == v2[j])
                count++;
        }
    }
    cout<<count;
    return 0;
}