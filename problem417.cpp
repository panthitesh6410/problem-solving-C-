// April Challenge 2021 Div.3 
// Binary String MEX

#include<string>
#include<iostream>
using namespace std;
string find_binary(int n){
    if(n == 0)
        return "0";
    else{
        int a[10],i;
        for(i=0;n>0;i++){
            a[i] = n%2;
            n/=2;
        }
        string res;
        for(i=i-1;i>=0;i--){
            if(a[i] == 1)
                res += "1";
            else
                res += "0";
        }
            // cout<<"\n<----------"<<res<<"---------->"<<endl;    
        return res;
    }
}
bool in_sequence(int num, string s){
    string binary = find_binary(num);
    // cout<<"\n<----------"<<s.find(binary)<<"---------->"<<endl;
    if(s.find(binary)>=0 && s.find(binary)<s.length())
        return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = 0;
        while(in_sequence(i, s))
            i++;
        cout<<find_binary(2*i)<<"\n";
    }
    return 0;
}