// TCS codevita season 9 - problem D :

#include<iostream>
using namespace std;

bool is_vowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

int main()
{
    long unsigned int n;
    cin>>n;
    long unsigned int arr[n], count=0;
    for(long unsigned int i=0;i<n;i++)
        cin>>arr[i];
    for(long unsigned int i=0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            string s = "one";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 2)
        {
            string s = "two";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 3)
        {
            string s = "three";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 4)
        {
            string s = "four";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 5)
        {
            string s = "five";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 6)
        {
            string s = "six";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 7)
        {
            string s = "seven";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 8)
        {
            string s = "eight";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 9)
        {
            string s = "nine";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
        else if(arr[i] == 0)
        {
            string s = "zero";
            for(long unsigned int i=0;i<s.length();i++)
            {
                if(is_vowel(s[i]))
                    count++;
            }
        }
    }
    int pairs=0;
    for(long unsigned int i=0;i<n;i++)
    {
        for(long unsigned int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == count)
                pairs++;
        }
    }
    switch(pairs){
        case 0:
            cout<<"zero";
            break;
        case 1:
            cout<<"one";
            break;
        case 2:
            cout<<"two";
            break;
        case 3:
            cout<<"three";
            break;
        case 4:
            cout<<"four";
            break;
        case 5:
            cout<<"five";
            break;
        case 6:
            cout<<"six";
            break;
        case 7:
            cout<<"seven";
            break;
        case 8:
            cout<<"eight";
            break;
        case 9:
            cout<<"nine";
            break;
        default:
            cout<<"invalid";
            break;
    }
    return 0;
}