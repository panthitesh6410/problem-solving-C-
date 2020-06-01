//

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                        
            }
        }
    }

    // so ingredients of each type (which is used in his recipe) always appear as 
    // a contiguous subsequence
    
    // the quantity of each ingredient (number of occurrences of this type of 
    // ingredient) is distinct from the quantities of all other ingredients. 

    // 1 1 4 3 4 5 5 5 7 7 -
    // errors -
    // Here 4 occurs an non-contiguous array
    // and 7 occurs 2 times i.e. same as 1 (2 times) 
    

    return 0;
}