#include<iostream>
using namespace std;
bool check(string s, int start, int end)
{
    int result = start - (end-1) + 1;
    if(result >= 4 && result%2 == 0)
        return true;
    return false;
}
int main()
{
    string s;
    getline(cin, s);
    int start=0, end=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != 32)
            end++;
        else
        {
            bool result = check(s, start, end);
            if(result)
            {
                int mid = (start - (end-1) + 1) / 2;    
                for(int j=start; j<mid;j++)
                    cout<<s[j];
                cout<<" ";
                for(int j=mid+1;j<end;j++)
                    cout<<s[i];
            }
            end++;
            start = end;    
        }
    }
    return 0;
}