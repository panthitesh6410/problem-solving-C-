// nagarro coding question 2021 -   

#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    int i = 1, count = 1;
    while (count != k)
    {
        int flag = 0;
        for(int i=0;i<n;i++){
            if(i== arr[i])
                flag = 1;
            else{
                int sum = 1;
                while(sum < i)
                    sum *= arr[i];
                if(sum == i)
                    flag = 1;
                else{
                    // nahi ban raha 
                }
            }
        }
        if(flag == 1)
            count++;
        i++;
    }
    cout<<i+1;

    return 0;
}