// HackerRank Warmup CHallenge - 

#include<iostream>
using namespace std;
int main()
{
    string s ;
    cin>>s;
    string final_string;
    unsigned long long int n;
    cin>>n;
    if(s.length() == 1)
        cout<<n<<endl;
    else
    {
        unsigned long long int i, count=0, final_count;
        // while(final_string.length()<n)
        // {
        //     final_string = final_string + s;
        // }
        // for(i=0;i<n;i++)
        // {
        //     if(final_string[i] == 'a')
        //         count++;
        // }
        // cout<<count<<endl;
        for(i=0;i<n;i++)
        {
            final_string = final_string + s;
            if(final_string.length()>=n)
                break;
        }
        for(i=0;i<n;i++)
        {
            if(final_string[i] == 'a')
                count++;
        }
        cout<<count<<endl;
        cout<<"excuted";
    }
    
// aba - 10
// final_string = abaabaabaaba
    return 0;
}