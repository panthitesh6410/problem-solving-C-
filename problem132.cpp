// SOPJ - ALCATRAZ2 (GO GOA GONE) :

#include<vector>
#include<iostream>
using namespace std;

int main()
{

    int money[8];
    for(int i=0;i<8;i++)
        cin>>money[i];
    int p;
    cin>>p;
    vector<int> v;
    for(int i=1;i<=p;i++)
    {
        int num1, num2;
        cin>>num1;
        v.push_back(num1);
        cin>>num2;
        v.push_back(num2);
    }
    int flag[8]={0};
    for(int i=0;i<v.size();i++)
        v[i] = v[i] - 1;
    int total=0;
    for(int i=0;i<v.size();i=i+2)
    {
        if((flag[v[i]] == 0) && (money[v[i]] >= money[v[i+1]]))
        {
            flag[v[i]] = flag[v[i+1]] = 1;
            total = total + money[v[i]];
        }
        else if((flag[v[i+1]] == 0) && (money[v[i+1]] >= money[v[i]]))
        {
            flag[v[i]] = flag[v[i+1]] = 1;
            total = total + money[v[i+1]];
        }
        else
            flag[v[i]] = flag[v[i+1]] = 1;
    }
// remaining :
    for(int i=0;i<8;i++)
    {
        if(flag[i] == 0)
            total = total + money[i];
    }
    cout<<total;
    return 0;
}