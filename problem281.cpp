// December Cook-off 2020 Div.2
// Catch the Thief

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int x, y, K, N, flag=0;
        cin>>x>>y>>K>>N;
        for(int i=0;i<=N;i++)
        {
            if(x==y)
            {
                cout<<"Yes"<<endl;
                break;
            }
            else{
                if(x<y){
                    while(x!=N || y!=0){
                        x++;
                        y--;
                        if(x == y){
                            cout<<"Yes"<<endl;
                            flag = 1;
                            break;
                        }
                    }
                    if(flag!=1)
                        cout<<"No"<<endl;
                    break;
                }
                else{
                    while(y!=N || x!=0){
                        y++;
                        x--;
                        if(x == y){
                            cout<<"Yes"<<endl;
                            flag = 1;
                            break;
                        }
                    }
                    if(flag != 1)
                        cout<<"No"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}