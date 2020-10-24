
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    string strings[4]={"abcd", "dd", "ca"};
    string s;
    for(int i=0;i<4;i++)
    {
        int size = strings[0].size();
        for(int j=i+1;j<4;j++)
        {
            int size1 = strings[j].size();
            if(strings[i][size-1] == strings[j][0])
                s = s + (strings[i] + strings[j]);
        }
    }
    // cout<<s<<endl;
    cout<<s.size();
    return 0;
}