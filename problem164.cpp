// Google KickStart 2020 - Round C (problem3) :
// Perfect Subarray -

#include<iostream>
using namespace std;

bool perfect_square(int num)
{
    for(int i=0;i<=num/2;i++)
    {
        for(int j=0;j<=num/2;j++)
        {
            if(num == i*j)
                return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
            if(perfect_square(arr[i]))
                count++;
            int sum = arr[i];
            for(int j=i+1;j<n;j++)
            {
                sum += arr[j];
                if(perfect_square(sum))
                    count++;               
            }
        }      
        cout<<"Case #"<<q<<": "<<count<<endl;     
    }
    return 0;
}