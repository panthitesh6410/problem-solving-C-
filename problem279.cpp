// Tech Mahindra question :
 
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int count = 1;      // for single all (like:12-AB, 123-ABC)
    vector<int> v;
    while(num)
    {
        v.push_back(num%10);
        num /= 10;
    }
    for(int i=v.size()-1;i>0;i--)
    {    
        // 112 -> 2 1 1 -> 11, 12
        if((v[i]*10 + v[i-1])<=26)
            count++;
    }   
    cout<<count;
    return 0;
}