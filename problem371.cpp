// HackerRank - Jumping on the Clouds: Revisited

#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int energy = 100;
    int i=0;
    do{
        i = (i+k)%n;
        energy--;
        if(arr[i] == 1)
            energy -= 2;
    }while(i!=0);
    cout<<energy;
    return 0;
}
// 0 0 1 0 0 1 1 0
// 100-2-2-2-2-2-2