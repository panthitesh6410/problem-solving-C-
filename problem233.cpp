// TCS NQT problems :
// covert binary into it's decimal equivalent

#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int binary;
    cin>>binary;
    int decimal=0, i=0;
    while(binary != 0)
    {
        int d = binary%10;
        d = d*pow(2, i);
        decimal += d;
        binary=binary/10;
        i++;
    }
    cout<<decimal;
    return 0;
}