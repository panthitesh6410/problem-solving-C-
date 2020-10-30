// TCS NQT 2020 :

#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int length = s.length();
    int words = 1;
    for(int i=0;i<length;i++)
    {
        if(s[i] == 32)
            words++;
    }
    cout<<length<<endl<<words;
    return 0;
}