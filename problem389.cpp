// Leetcode - Add Binary

#include<vector>
#include<math.h>
#include<iostream>
using namespace std;

int binary_to_decimal(string s){
    int res = 0, power = 0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == '1'){
            res += pow(2, power)*1;
            power++;
        }
        else{
            res += pow(2, power)*0;
            power++;
        }
    }
    return res;
}
vector<int> decimal_to_binary(int num){
    vector<int> res;
    while(num){
        int d = num%2;
        res.push_back(d);
        num /= 2;
    }
    if(res.empty())
        res.push_back(0);
    return res;
}
string addBinary(string a, string b) {
    unsigned int num1 = binary_to_decimal(a);
    unsigned int num2 = binary_to_decimal(b);
    int res = num1+num2;
    vector<int> v = decimal_to_binary(res);
    string output;
    for(int i=v.size()-1;i>=0;i--)
        output = output + to_string(v[i]);
    return output;
}

int main(){
    string a = "1011";
    string b = "101"; 
    cout<<binary_to_decimal(a)<<"\n";
    cout<<binary_to_decimal(b)<<"\n";
    cout<<addBinary(a, b);

    return 0;
}