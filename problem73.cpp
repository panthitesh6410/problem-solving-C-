// Techgig - problem 2 :

#include<iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubble_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[i] > arr[j+1])
                swap(arr[i], arr[j+1]);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        int G[n], O[n];
        for(int i=0;i<n;i++)
            cin>>G[i];
        for(int i=0;i<n;i++)
            cin>>O[i];
        bubble_sort(G, n);
        bubble_sort(O, n);
        int count = 0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                if(G[i]>G[j])
                    count++;
            }
            // 20, 30, 50 - i
            // 25, 40, 60 - j
        }
        cout<<count<<endl;
    }
    return 0;
}