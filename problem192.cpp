// (Directi) Question -

#include<vector>
#include<iostream>
using namespace std;

vector<int> v;

bool is_present(int num)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == num)
            return true;
    }
    return false;
}

bool distinct_digits(int num)
{
    while(num != 0)
    {
        int d = num%10;
        if(is_present(d))
            return false;
        else
            v.push_back(d);
        num /= 10;
    }
    return true;
}

bool digits_limit(int num)
{
    while(num != 0)
    {
        int d = num % 10;
        if(d > 5)
            return false;
        num /= 10;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        int count = 0;
        for(int i=l;i<=r;i++)
        {
            // i contains distinct digits
            // all digits are <= 5
            if(distinct_digits(i) && digits_limit(i))
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}