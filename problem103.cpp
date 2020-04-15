// Codeforces - Football :

#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str.size()<=7)
        cout<<"NO";
    else
    {
        int count = 0;
        string result = "NO";
        for(int i=0;i<str.size();i++)
        {
            int j=i+1;
            // for(int j=i+1;j<str.size();j++)
            // {
            //     if((str[i] == str[j] && str[i] == '1') || (str[i] == str[j] && str[i] == '0'))
            //         count++;
            // }
            // if(count >= 7)
            // {
            //     result = "YES";
            //     break;
            // }
            while(str[i] == str[j])
            {
                count++;
                j++;
                if(count >= 6)
                {
                    result = "YES";
                    break;
                }
            }
        }
        cout<<result;
    }
    
    return 0;
}