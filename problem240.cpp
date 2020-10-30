#include<iostream>
using namespace std;
int main()
{
    int o11, o12, o13;
    cin>>o11>>o12>>o13;
    int o21, o22, o23;
    cin>>o21>>o22>>o23;
    int o31, o32, o33;
    cin>>o31>>o32>>o33;
    if(o11<1 || o11>100)
        o11 = 0;
    if(o12<1 || o12>100)
        o12 = 0;
    if(o13<1 || o13>100)
        o13 = 0;
    if(o21<1 || o21>100)
        o21 = 0;
    if(o22<1 || o22>100)
        o22 = 0;
    if(o23<1 || o23>100)
        o23 = 0;
    if(o31<1 || o31>100)
        o31 = 0;
    if(o32<1 || o32>100)
        o32 = 0;
    if(o33<1 || o33>100)
        o33 = 0;
    int avg1=(o11+o21+o31)/3;
    int avg2=(o12+o22+o32)/3;
    int avg3=(o13+o23+o33)/3;
    int max=avg1, flag=0;
    if(avg1<70 && avg2<70 && avg3<70)
        cout<<"All trainees are unfit";
    else
    {
        if(avg1 == avg2)
            cout<<"trainee 1 and 2"<<endl;
        else if(avg1 == avg3)
            cout<<"trainee 1 and 3"<<endl;
        else if(avg3 == avg2)
            cout<<"trainee 2 and 3"<<endl;
        else if(avg1 == avg2 && avg2 == avg3)
            cout<<"trainee 1, 2 and 3"<<endl;
        else{
            if(avg1 > max)
            {
                max = avg1;
                flag=1;
            }
            if(avg2>max)
            {
                max = avg2;
                flag=2;
            }
            if(avg3>max)
            {
                max=avg3;
                flag=3;
            }
            if(flag == 1)
                cout<<"trainee 1";
            else if(flag == 2)
                cout<<"trainee 2";
            else if(flag == 3)
                cout<<"trainee 3";
        }
    }
    
    return 0;
}