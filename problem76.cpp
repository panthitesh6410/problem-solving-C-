// Google KickStart 2020 (Round-A) problem :


#include<iostream>
using namespace std;

void selection_sort(int A[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minimum = i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[minimum])
                minimum = j;
        }
        int temp = A[i];
        A[i] = A[minimum];
        A[minimum] = temp;
    }
}

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int N, B;
        cin>>N>>B;
        int A[N];
        for(int j=0;j<N;j++)
            cin>>A[j];
        selection_sort(A, N);
        int count = 0;
        for(int k=0;k<N;k++)
        {
            if(A[k] <= B)
            {
                B = B - A[k];
                count++;
            }
        }
        cout<<count<<endl;
        // for(int j=0;j<N;j++)
        //     cout<<A[j]<<endl;
        
    }
    return 0;
}