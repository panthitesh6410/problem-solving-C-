// Leetcode - Add Binary 

#include<iostream>
using  namespace std;

char carry = '0';

char add(char c1, char c2){
    if(c1 == '0' && c2 == '0')
        return '0';
    else if(c1 == '0' && c2 == '1')
        return '1';
    else if(c1 == '1' && c2 == '0')
        return '1';
    else{
        carry = '1';
        return '0';
    }
}

string reverse(string s){
    string temp;
    for(int i=s.size()-1;i>=0;i--)
        temp = temp + s[i];
    return temp;
}

string addBinary(string a, string b){
    int i = a.size()-1, j = b.size()-1;
    string res;
    while(i>=0 && j>=0){
        char ch = add(a[i], b[j]);
        if(carry == '1'){
            ch = add(ch, '1');
            carry = '0';
        }
        res = res + ch;
        i--;
        j--;
    }
    while(i >= 0){
        char c;
        if(carry == '1'){
            c = add(a[i], '1');
            carry = '0';
        }
        res = res + a[i];
        if(carry == '1'){
            res = res + '1';
            carry = '0';
        }
        i--;
    }
    while(j >= 0){
        char c;
        if(carry == '1'){
            c = add(a[j], '1');
            carry = '0';
        }
        res = res + a[j];
        if(carry == '1'){
            res = res + '1';
            carry = '0';
        }
        j--;
    }
    return reverse(res);
}

int main(){
    string a = "11", b = "1";
    // string a = "1010", b = "1011";
    cout<<addBinary(a, b);
    return 0;
}