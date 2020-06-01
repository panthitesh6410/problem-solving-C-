// HackeRank (Hack-the-Interview-4)(Asia Specific) :
// Arrange Students -

#include<vector>
#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    vector<char> v;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int boys[n], girls[n];
        for(int i=0;i<n;i++)
            cin>>boys[i];
        for(int i=0;i<n;i++)
            cin>>girls[i];
        sort(boys, n);
        sort(girls, n);
        int i=0, j=0, flag=0;
        while(i<n || j<n)
        {
            if(boys[i] <= girls[i])
            {
                v.push_back('b');
                i++;
            }
            else{
                v.push_back('g');
                j++;
            }
        }
        for(int k=0;k<v.size()-1;k++)
        {
            if(v[k] == 'b')
            {
                if(v[k+1] == 'b')
                {
                    flag = 1;
                    break;
                }
            }
            else if(v[k] == 'g')
            {
                if(v[k+1] == 'g')
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
   }
    return 0;
}