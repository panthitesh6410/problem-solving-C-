// TCS digital capability exam - 

#include<vector>
#include<iostream>
using namespace std;
bool present_in_v(vector<char> v, char c){
    for(int i=0;i<v.size();i++){
        if(v[i] == c)
            return true;
    }
    return false;
}
int factorial(int num){
    if(num == 1 || num == 0)
        return 1;
    else
        return num*factorial(num-1);
}
int main(){
    string s;
    cin>>s;
    // covert into lowercase -
    for(int i=0;i<s.length();i++)
        s[i] = tolower(s[i]);
    int consonants = 0, vowels = 0;
    // count freq. of vowels and consonants -  
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u')
            vowels++;
        else
            consonants++;
    }
    int result = factorial(consonants+1)*factorial(vowels);
    // count freq. of all chars in string and divide from result -
    vector<char> v;
    for(int i=0;i<s.length();i++){
        int count = 1;
        if(!present_in_v(v, s[i])){
            for(int j=i+1;j<s.length();j++){
                if(s[i] == s[j])
                    count++;
            }
            v.push_back(s[i]);
            result /= factorial(count);
        }
    }
    cout<<result;
    return 0;
}