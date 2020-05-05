// Codechef Bytelandian gold coins :

#include<iostream>
using namespace std;
int main()
{
    int t=1;
    while(t <= 10)
    {
        int n;
        cin>>n;
        int a = n/2;
        int b = n/3;
        int c = n/4;
        if(a+b+c > n)
            cout<<a+b+c<<endl;
        else
            cout<<n<<endl;
        t++;
    }
    return 0;
}