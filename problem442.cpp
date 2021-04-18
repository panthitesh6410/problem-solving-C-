// April Cook-Off 2021 Div.3 - (BodyBuilder)

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        int time[n], value[n];
        for(int i=0;i<n;i++)
            cin>>time[i];
        for(int i=0;i<n;i++)
            cin>>value[i];
        int x = 0, max = -199;
        for(int i=0;i<n;i++){
            x += value[i];
            if(x > max) max = x;
            if(i != n-1)
                x -= r * abs(time[i]-time[i+1]);
        }
        cout<<max<<"\n";
    }
    return 0;
}