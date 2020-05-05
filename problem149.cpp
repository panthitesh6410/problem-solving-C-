// Codechef : Number of Factors -

#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int product = 1;
        for(int i=1;i<=n;i++)
        {
            int num;
            scanf("%d", &num);
            product *= num;
        }
        int count = 2;
        for(int i=2;i<=product/2;i++)
        {
            if(product%i == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}