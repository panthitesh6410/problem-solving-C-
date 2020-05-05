// Codechef : Flipping Coins -

#include<iostream>
using namespace std;

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    int arr[n]={0};    
    // 0 - tails , 1 - heads
    for(int i=1;i<=q;i++)
    {
        int choice, a, b;
        scanf("%d%d%d", &choice, &a, &b);
        if(choice == 0)
        {   
            for(int i=a;i<=b;i++)
            {
                if(arr[i] == 0)
                    arr[i] = 1;
                else
                    arr[i] = 0;
            }
        }
        else
        {
            int count = 0;
            for(int i=a;i<=b;i++)
            {
                if(arr[i] == 1)
                    count++;
            }
            printf("%d\n", count);
        }
        
    }

    return 0;
}