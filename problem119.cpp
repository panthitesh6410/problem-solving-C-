// check if a sentence is a pangram or not : contains each alphabet alteast once;

#include<iostream>
using namespace std;
int main()
{
    char str[300];
    gets(str);
    int i=0, chars=0;
    while(i != '\0')
    {
        int count = 1;
        int j=0;
        while(j != '\0')
        {
            if(str[i] == str[j] && i != j)
                count++;
            j++;
        }
        if(count == 1)
            chars++;
        i++;
    }
    cout<<chars<<endl;
    if(chars == 26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}