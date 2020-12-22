#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count = 0;
        // 001101 - 0
        // 1101 - 1
        // 110 - -1
        // 11111 - -1 
        // if all same and even then count++
        
        cout<<s<<endl;
        cout<<count<<endl;
    } 
    return 0;
}