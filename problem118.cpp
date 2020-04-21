// given sorted array , return the index [i][j] of number given to search and 
// return [-1, -1] if not found
// Example : [5, 7, 7, 8, 8, 10] , num = 8 , output->[3, 4]

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int num;
    cin>>num;
    int start, end, flag=0, j;
    for(int i=0;i<n;i++)
    {
        j = i;
        if(arr[i] == num)
        {
            flag = 1;
            start = i;
            break;
        }
    }
    while(arr[j] == num)
        j++;
    end = j-1;
    if(flag == 1)
        cout<<"["<<start<<", "<<end<<"]";
    else
        cout<<"[-1, -1]";
    return 0;
}