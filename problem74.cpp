// Codeforces - Nearly Lucky Number :

#include<iostream>

using namespace std;

bool is_lucky(int num)
{
    bool flag = false;
    int ori = num, count = 0, actual_count = 0;
    while(num != 0)
    {
        actual_count++;
        int d = num % 10;
        if((d == 4) || (d == 7))
            count++;
        num = num / 10;
    }
    if(count == actual_count)
        flag = true;
    return flag;
}

int main()
{
    long int n;
    cin>>n;
    int count = 0;
    while(n != 0)
    {
        int d = n % 10;
        if(is_lucky(d))
        {
            count++;
        }
        n = n / 10;
    }
    if(is_lucky(count))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}