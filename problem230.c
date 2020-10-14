// TcS NQt questions : 
// using command line calculate hypotaneous of a trianngle

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void main(int argc, int *argv[])
{
    if(argc < 3)
        printf("Invalid Input");
    else
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        a = pow(a, 2);
        b = pow(b, 2);
        int sum = sqrt(a+b);
        printf("hypo = %d", sum);
    }
}