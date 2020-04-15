// GeeksforGeeks - Generate Binary Numbers : (Amazon/OYO)

#include <iostream>
using namespace std;

void binary(int num)
{
    int result[33]={0};
    int i=0;
    while(num != 0)
    {
        result[i] = num % 2;
        num = num / 2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<result[j];
}

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            binary(j);
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}