// GeeksforGeeks - search in a matrix :
// (Amazon/adobe/Goldman Sachs/Ola/MMT/Paytm/Snapdeal/Visa...)

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, m;
        cin>>n>>m;
        int mat[n][m];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
                cin>>mat[j][k];
        }
        int num, flag=0;
        cin>>num;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(mat[j][k] == num)
                {
                    flag=1;
                    break;
                }
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}