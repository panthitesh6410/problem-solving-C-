// Nagarro Question -

#include<iostream>
using namespace std;

int main(){
    string s, ori;
    getline(cin, s);
    ori = s;
    int m, n, count = 0;
    cin>>m>>n;
    
    do{
        string temp1;
        // cut m chars from end
        for(int i=s.length()-m;i<s.length();i++)
            temp1 += s[i];
        s.erase(s.length()-m);

        // add these chars to front of s
        temp1 += s;
        s = temp1;
        temp1.erase();
        count++;

        // same process 1 more time :

        // cut n chars from end
        for(int i=s.length()-n;i<s.length();i++)
            temp1 += s[i];
        s.erase(s.length()-n);

        // add these chars to front of s
        temp1 += s;
        s = temp1;
        temp1.erase();
        count++;

    }while(ori!=s);

    cout<<count;
    return 0;
}