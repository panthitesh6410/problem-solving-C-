// codechef april challenge 2020 Div.2 :
// COVID Pandemic and Long Queue -

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        if(n <= 6)
            cout<<"NO"<<endl;
        else
        {
            string result = "YES";
            for(int j=0;j<n;j++)
            {
                if(arr[j] == 1)
                {
                    if((arr[j+1] == 1) || (arr[j+2] == 1) || (arr[j+3] == 1) || (arr[j+4] == 1) || (arr[j+5] == 1))
                    {
                        result = "NO";
                        break;
                    }    
                }
                
                // alter -
                // for(int k=j+1;k<j+6;k++)
                // {
                //     if(arr[j] == 1)
                //     {
                //         if(arr[k] == 1)
                //         {
                //             result = "NO";
                //             break;
                //         }
                //     }
                // }
            }
            cout<<result<<endl;
        }
    }
    return 0;
}