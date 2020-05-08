// Codesites :
// Length of Longest Substring :

#include<vector>
#include<iostream>
using namespace std;
bool is_present(vector<char> v, char c)
{
    for(int i=0;i<v.size();i++)
    {
        if(c == v[i])
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int max_len = 0, count = 0;
        vector<char> v;
        for(int i=0;i<s.size();i++)
        {
            if(!is_present(v, s[i])){    
                v.push_back(s[i]);
                count++;
            }
            else
            {
                if(count> max_len)
                    max_len = count;
                count = 0;
                //erase all vector elements;
                v.clear();
            }
        }
        cout<<max_len<<endl;
    }
    return 0;
}
//   aaaaaaabcdefgaabba