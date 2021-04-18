// TCS coding Practise

#include<iostream>
using namespace std;
bool is_palindrome(int num){
    int ori = num, rev=0;
    while(num){
        int d = num%10;
        rev = rev*10 + d;
        num /= 10;
    }
    if(ori == rev)
        return true;
    return false;
}
int main(){
    int l, r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        if(is_palindrome(i))
            cout<<i<<" ";
    }
    return 0;
}