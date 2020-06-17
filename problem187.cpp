// Codechef JUNE cahllenge 2020 :
// Chef and Price Control

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int price[n];
        for(int i=0;i<n;i++)
            cin>>price[i];
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<n;i++)
        {
            sum1 += price[i];
            if(price[i]>k)
                sum2 += k;
            else
                sum2 += price[i];
        } 
        cout<<sum1-sum2<<endl;
    }
    return 0;
}