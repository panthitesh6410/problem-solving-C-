// April Challenge 2021 Div.3 
// Strong Language

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s ;
        cin>>s;
        // int enter_count = 0;
        // for(int i=0;i<n-1;i++){
        //     if(s[i] != s[i+1])
        //         enter_count++;
        // }
        // if(enter_count == n-1)
        //     cout<<"NO"<<"\n";
        // else{
        //     bool flag = false;
        //     for(int i=0;i<=n-k;i++){
        //     // *a**b
        //         int count = 0;
        //         for(int j=i;j<i+k;j++){
        //             if(s[i] == s[j])
        //                 count++;
        //             else
        //                 count--;
        //         }
        //         // cout<<"\n--------"<<count<<"---------\n";
        //         if(count >= k){
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(flag == true)
        //         cout<<"YES"<<"\n";
        //     else
        //         cout<<"NO"<<"\n";
        // }
        int count = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '*'){
                count++;
                if(count >= maxi)
                    maxi = count;
            }
            else
                count = 0;
        }
        if(maxi >= k)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}