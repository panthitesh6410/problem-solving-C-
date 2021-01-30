// codechef January Lunchtime 2021

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i] == '0'){
                int j=i;
                while(s[j] == '0')
                {
                    s.erase(j, j);
                    count++;
                    j--;
                }         
            }
            else{
                int j=0;
                while(s[j] == '1'){
                    s.erase(j, j);
                    count++;
                    j++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}