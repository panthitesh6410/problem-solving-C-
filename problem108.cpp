// codesites contest : Tribonacci Series : 
// summing the last 3 (instead of 2) numbers of the sequence to generate the next

#include<iostream>
using namespace std;
int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    if(n<=3)
    {
        for(int i=0;i<n;i++)    
            cout<<arr[i]<<" ";
    }
    else
    {
        int i = 0;
        while(i < 3)
        {
            cout<<arr[i]<<" ";
            i++;
        }
        while(i<n)
        {
            int j=0;            
            int num = arr[j] + arr[j+1] + arr[j+2];
            arr[j] = arr[j+1];
            arr[j+1] = arr[j+2];
            arr[j+2] = num;
            cout<<num<<" ";
            i++;
        }
    }
    
    return 0;
}