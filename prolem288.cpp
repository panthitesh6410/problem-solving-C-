// star rating problem

#include<iostream>
using namespace std;
int main()
{
    float num;
    cin>>num;
    for(int i=1;i<=5;i++)
    {
        if(num >= i)
        {
            cout<<"full ";
            // num--;
        }
        else if(num < i && num > i-1)
        {
            cout<<"half ";
            // num--;
        }
        else{
            cout<<"empty ";
            // num--;
        }
    }
    return 0;
}
