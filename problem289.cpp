// sorting digits in descending order :

#include<algorithm>
#include<math.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int digits = 0;
    while(n)
    {
        digits++;
        int d = n%10;
        v.push_back(d);
        n /= 10;
    }
    sort(v.begin(), v.end(), greater<int>());
    int mul = pow(10, digits-1), num = 0;
    for(int i=0;i<digits;i++)
    {
        num += v[i]*mul;
        mul /= 10;
    }
    cout<<num;
    return 0;
}