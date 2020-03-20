// codeforces : Young Physicist

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        int x, y, z;
        cin>>x>>y>>z;
        arr[i][0] = x;
        arr[i][1] = y;
        arr[i][2] = z;
    }
    int sumx=0, sumy=0, sumz=0;
    for(int i=0;i<n;i++)
    {
        sumx += arr[i][0];
        sumy += arr[i][1];
        sumz += arr[i][2];
    }
    if(sumx == 0 && sumy == 0 && sumz == 0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}