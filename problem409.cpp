// Codechef Lunchtime 2021 March Div.3 

#include<math.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int U, V, A, S;
        cin>>U>>V>>A>>S;
        if(U<=V)
            cout<<"yes"<<"\n";
        else{
            float v = pow(U*U-2*A*S, 0.5);
            cout<<v<<"--------";
            if(v <= (float)V)
                cout<<"yes"<<"\n";
            else    
                cout<<"no"<<"\n";
        }
    }

    return 0;
}