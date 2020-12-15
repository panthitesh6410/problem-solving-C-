// Codechef : October LuchTime 2020 :

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
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i&j)+(i|j) == n)
                {
                    printf("%d %d\n", i, j);
                    break;
                }
            }
        }
    }
    return 0;
}