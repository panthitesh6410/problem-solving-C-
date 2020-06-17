// CODECHEF June Challenge 2020 
// Tome and Jerry Game

// WRONG ANSWER


#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ts;
        cin>>ts;
        int count = 0;
        if(ts%2 != 0)
        {
            for(int i=1;i<ts;i++)
            {
                if(i%2 == 0)
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}