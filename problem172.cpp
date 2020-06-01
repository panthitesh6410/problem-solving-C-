// May Lunchtime 2020 Div.2 -
// (Lost Weekends) -

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[5];
        // for(int i=0;i<4;i++)
        //     cin>>arr[i];
        int i1, i2, i3, i4, i5;
        cin>>i1>>i2>>i3>>i4>>i5;
        int p;
        cin>>p;
        int count = 120;
        int total = i1*p + i2*p + i3*p + i4*p + i5*p;
        // for(int i=0;i<4;i++){
        //     arr[i] = arr[i]*2;
        //     total = total + arr[i];
        // }        
        if(total > count)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}