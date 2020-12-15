// for i/p : 3 4 -
// 3
// 44
// 555
// 6666
// 555
// 44
// 3

#include<iostream>
using namespace std;
int main()
{
    int start, max_cols;
    cin>>start>>max_cols;
    int i=1;
    int dest=i+3;
    // 1st half -
    while(i!=dest+1)
    {
        for(int j=1;j<=i;j++)
            cout<<start;
        cout<<endl;
        start++;
        i++;
    }
    // 2nd half -
    i = i-2;
    start = start-2;
    while(i!=0)
    {
        for(int j=i;j>=1;j--)
            cout<<start;
        cout<<endl;
        start--;
        i--;
    }
    // cout<<endl<<i<<" "<<start;
    return 0;
}