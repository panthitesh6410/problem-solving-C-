// HackerRank : sam and substrings  -
// 123 - 123+12+23+1+2+3
// 1234 - 1234+123+234+12+23+34+1+2+3+4
    
#include<vector>
#include<sstream>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> v;
    // getting single digit integers -
    stringstream sobj(s);
    long int x = 0;
    sobj>>x;
    while(x)
    {
        v.push_back(x%10);
        x /= 10;
    }
    // getting more than single digit integers -
    for(long long int i=0;i<s.length()-1;i++)
    {
        string temp = "";
        temp += s[i];
        for(long long int j=i+1;j<s.length();j++)
        {
            temp += s[j];
            v.push_back(stoi(temp));
            // cout<<temp<<" ";
        }
    }
    long long int sum = 0;
    for(long long int i=0;i<v.size();i++)
        sum += v[i];
    cout<<sum;
    return 0;
}