// codechef January Lunchtime 2021

#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int prob_solved = 0, time_taken_slow = 0, bot_time = 0;
        for(int i=0;i<n;i++){
            if(arr[i] != -1)
                prob_solved++;
            if(arr[i] == 0 || arr[i] == 1)
                bot_time++;
            if(arr[i]>k)
                time_taken_slow++;
        }
        if(float(prob_solved) < ceil(float(n)/2))
            cout<<"Rejected"<<endl;
        else{
            if(time_taken_slow > 0)
                cout<<"Too Slow"<<endl;
            else{
                if(bot_time == n)
                    cout<<"Bot"<<endl;
                else
                    cout<<"Accepted"<<endl;
            }
        }
    }
    return 0;
}