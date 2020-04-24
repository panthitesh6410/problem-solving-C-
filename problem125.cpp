// HackerRank - Simple Text Editor :

#include<vector>
#include<iostream>
using namespace std;

vector<int> v;
string s = "";

void append(string w)
{
    s = s + w;
}

void delete_last(int k)
{
    s.erase(s.size()-k, s.size()-1);
}

void print(int k)
{
    k = k-1;
    cout<<s[k];
}

void undo()
{
    int prev = v[s.size()-1];
    if(prev == 1)
    {
        // delete last char/string.
    }
    else if(prev == 2)
    {
        // insert prev char/string.
    }
}

int main() 
{
    int q;
    cin>>q;
    for(int j=1;j<=q;j++)
    {
        int t, k, prev;
        cin>>t;
        v.push_back(t);
        string w;
        switch(t)
        {
            case 1:
                cin>>w;
                append(w);
                break;
            case 2:
                cin>>k;
                delete_last(k);   //delete last k chars
                break;
            case 3:
                cin>>k;
                print(k);       // print kth char
                break;
            case 4:
                undo();         // undo previous op. of type 1,2
                break;
            default:
                cout<<"Invalid";
                break;
        }
    }
    return 0;
}