// wipro NLTH 2021
/*
n = 3
3 3 3
3 1 3
3 2 3
3 3 3

n=4
4 4 4 4 4
4 4 1 4 4
4 4 2 4 4
4 4 3 4 4
4 4 4 4 4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2 != 0){
        int temp=1;
        for(int i=1;i<=n+1;i++){
            if(i == 1){
                for(int j=1;j<=n;j++)
                    cout<<n<<" ";
                cout<<endl;
            }
            else{
                for(int j=1;j<=n;j++){
                    if(j == n/2+1){
                        cout<<temp<<" ";
                        temp++;
                    }
                    else{
                        cout<<n<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
    else{
        int temp=1;
        for(int i=1;i<=n+1;i++){
            if(i == 1){
                for(int j=1;j<=n+1;j++)
                    cout<<n<<" ";
                cout<<endl;
            }
            else{
                for(int j=1;j<=n+1;j++){
                    if(j == n/2+1){
                        cout<<temp<<" ";
                        temp++;
                    }
                    else{
                        cout<<n<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }

    return 0;
}