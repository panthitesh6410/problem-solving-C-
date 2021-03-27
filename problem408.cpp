// Codechef Lunchtime 2021 March Div.3 

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int sum = 0;
        for(int i=0;i<n;i++)
            sum += arr[i];
        if(sum%2 == 0)
            cout<<0<<"\n";
        else{
            int count = 0;
            bool flag = false;
            int target = sum-1;
            for(int i=0;i<n;i++){
                int temp = arr[i]/2 - 1;
                if(temp%2 != 0){
                    count++;
                    arr[i] = arr[i]/2 - 1;
                    int int_sum = 0;
                    for(int j=0;j<n;j++)
                        int_sum += arr[j];
                    if(int_sum%2 == 0){
                        flag = true;
                        break;
                    }
                }
            }    
            if(flag)
                cout<<count<<"\n";
            else
                cout<<-1<<"\n";
        }
    }

    return 0;
}