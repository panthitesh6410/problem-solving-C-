// codechef code chronicles 1.0 :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        cout<<abs(r-l)*2<<endl;
    }
    return 0;
}