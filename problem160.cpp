// Codesites:  (Asked by Apple)
// Number of 1-bits -

#include<iostream>
using namespace std;
int main()
{
    int t;
    // scanf("%d", &t);
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        // scanf("%d", &n);
        int arr[32];
        int i = 0;
        while(n != 0)
        {
            arr[i] = n%2;
            n = n/2;
            i++;
        }
        int count = 0;
        for(int j=i;j>=0;j--)
        {
            if(arr[j] == 1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}