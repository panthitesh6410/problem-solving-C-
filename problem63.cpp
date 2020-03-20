// codeforces : boy or girl

#include<iostream> 
using namespace std;
int main()
{
    string name;
    cin>>name;
    int count[name.size()];
    for(int i=0;i<name.size();i++)
        count[i] = 1;
    for(int i=0;i<name.size();i++)
    {
        for(int j=i+1;j<name.size();j++)
        {
            if(name[i] == name[j])
                count[i]++;
        }
    }
    
    int num=0;
    for(int i=0;i<name.size();i++)
    {
        if(count[i] == 1)
            num++;
    }

    if(num % 2 != 0)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}