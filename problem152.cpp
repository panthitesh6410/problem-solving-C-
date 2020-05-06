// Leetcode May Challenge Day 5 :
// First Unique Character in a String -

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // find 1st non-repeating character, return it's index
    // If does'nt exists, return -1
    //leetcode --> 0
    // loveleetcode --> 2
    int count[s.size()];
    for(int i=0;i<s.size();i++)
        count[i] = 1;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if((s[i] == s[j]) && (i != j))
                count[i]++;
        }
    }
    int index = -1;
    for(int i=0;i<s.size();i++)
    {
        if(count[i] == 1)
        {
            index = i;
            break;
        }
    }
    cout<<index;
    return 0;
}