// Codechef : The next Palindrome -

#include<iostream>
using namespace std;

bool is_palindrome(int num)
{
    int ori=num, rev=0;
    while(num != 0)
    {
        rev = (rev*10) + (num%10);
        num /= 10;
    }
    if(rev == ori)
        return true;
    return false;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        int k;
        scanf("%d", &k);
        k++;
        // output smallest possible palindrome larger than k
        while(!is_palindrome(k))
            k++;
        printf("%d\n", k);
    }

    return 0;
}