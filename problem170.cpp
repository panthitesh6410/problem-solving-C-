// HackeRank (Hack-the-Interview-4)(Asia Specific) :
// Maximum or 1 -

#include<iostream>
using namespace std;
bool contains_zero(int num, int k)
{
    int count = 0;
    while(num != 0)
    {
        int d = num % 10;
        if(d != 0)
            count++;
        num = num / 10;
    }
    if(count == k)
        return true;
    return false;
}
int main()
{
    int l, r, k;
    scanf("%d%d%d", &l, &r, &k);
    int count = 0;
    for(int i=l+1;i<=r;i++)
    {
        if(contains_zero(i, k))
            count++;
    }
    printf("%d", count);
    return 0;
}

