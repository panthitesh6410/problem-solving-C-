// TCS NQT Question :

#include<iostream>
using namespace std;
int main()
{
    char q='r';
    int blank=0, total=0,locks=0;
    while(q!='q')
    {
        string s;
        cin>>s;
        if(s.length()==0)
        {
            blank++;
            total++;
        }
        else
        {
            total++;
            locks++;
        }
        
        cin>>q;
    }
    cout<<"BLANK KEYS:"<<blank<<endl;
    cout<<"TOTAL KEYS:"<<total<<endl;
    cout<<"NUMBER OF LOCKS:"<<locks<<endl;
    return 0;
}