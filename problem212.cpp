// hackerrank problem :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n], y[n];
        for(int i=0;i<n;i++)
        {
            int num1, num2;
            cin>>num1>>num2;
            x[i] = num1;
            y[i] = num2; 
        }
        int x_max=x[0], x_min=x[0], y_max=y[0], y_min=y[0];
        for(int i=0;i<n;i++)
        {
            if(x[i]>x_max)
                x_max = x[i];
            if(x[i]<x_min)
                x_min = x[i];
            if(y[i]>y_max)
                y_max = y[i];
            if(y[i]<y_min)
                y_min = y[i];
        }
        // cout<<x_max<<x_min<<y_max<<y_min;
        cout<<(abs(x_max)+abs(x_min))*(abs(y_max)+abs(y_min))<<endl;
    }
    return 0;

}