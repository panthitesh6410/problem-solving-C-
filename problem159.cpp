// Codesites : (Asked by Goldman-Sachs)
// Wave from Array -

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
        // scanf("%d", &n);
        cin>>n;
        int arr[n];
        // input sorted array 
        for(int i=0;i<n;i++)
            cin>>arr[i];
            // scanf("%d", arr[i]);
        // a1>=a2<=a3>=a4<=a5...
        for(int i=0;i<n-1;i++)
        {
            if(i%2 == 0)
            {
                if(arr[i] < arr[i+1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
            else
            {
                if(arr[i] > arr[i+1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
    return 0;
}