// Techgig (Code-Gladiator 2020) Problem-1 :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int unit[n];
    for(int i=0;i<n;i++)
        cin>>unit[i];
    int avail[n];
    for(int i=0;i<n;i++)
        cin>>avail[i];
    int total = avail[0] / unit[0];
    for(int i=0;i<n;i++)
    {
        int result = avail[i] / unit[i];
        if(result <= total)
            total = result;
    }
    cout<<total;
    return 0;
}