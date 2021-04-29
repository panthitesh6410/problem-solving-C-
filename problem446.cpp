// Accenture Coding Question -

#include<iostream>
using namespace std;

char and_op(char a, char b){
    if(a == '1' && b == '1')
        return '1';
    return '0';
}
char or_op(char a, char b){
    if(a == '0' && b == '0')
        return '0';
    return '1';
}
char xor_op(char a, char b){
    if(a == b)
        return '1';
    return '0';
}
int OperationsBinaryString(string str){
    for(int i=1;i<str.length()-1;i++){
        if(str[i] == 'A')
            str[i+1] = and_op(str[i-1], str[i+1]);
        else if(str[i] == 'B')
            str[i+1] = or_op(str[i-1], str[i+1]);
        else if(str[i] == 'C')
            str[i+1] = xor_op(str[i-1], str[i+1]);
    }
    char res = str[str.length()-1];
    if(res == '1')
        return 1;
    else
        return 0;
}
int main(){
    string str = "1C0C1C1A0B1";
    // string str = "0C1A1B1C1C1B0A0";
    cout<<OperationsBinaryString(str);
    return 0;
}