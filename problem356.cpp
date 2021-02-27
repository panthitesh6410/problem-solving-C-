// TCS digital capability exam -

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    vector<char> v;
    // find common chars 
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s2.length();j++){
            if(s1[i] == s2[j])
                v.push_back(s1[i]);
        }
    }
    // print in alphabetic order
    sort(v.begin(), v.end());
    cout<<"\n normal order :";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    // print in reverse order
    cout<<"\n reverse order :";
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";

    return 0;
}