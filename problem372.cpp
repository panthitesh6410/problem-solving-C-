// Google Code-Jam 2020 Problem

#include<iostream>
using namespace std;
bool is_repeated(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j])
                return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cin>>arr[i][j];
        }
        int trace = 0, rr = 0, rc = 0;
        // calculating trace -
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j)
                    trace += arr[i][j];
            }
        }
        // calculating repeated rows -
        for(int i=0;i<n;i++){
            int temp_arr[n]={0};
            for(int j=0;j<n;j++)
                temp_arr[j] = arr[i][j]; 
            if(is_repeated(temp_arr, n))
                rr++;
        }
        // calculating repeated columns -
        for(int j=0;j<n;j++){
            int temp_arr[n]={0};
            for(int i=0;i<n;i++)
                temp_arr[i] = arr[i][j]; 
            if(is_repeated(temp_arr, n))
                rc++;
        }
        cout<<"Case #"<<k<<": "<<trace<<" "<<rr<<" "<<rc<<"\n";
    }
    return 0;
}