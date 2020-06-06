// Paytm Interiew Question :

#include<iostream>
using namespace std;

int digits_count(int num)
{
    int count = 0;
    while(num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count = 0;
        if(n <= 9)
            count = n;
        else
        {
            count = 9;
            for(int i=10;i<=n;i++)
                count += digits_count(i);
        }
        cout<<count<<endl;
    }
    return 0;
}