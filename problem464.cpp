// TCS Digital Question

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int l, h;
    cin>>l>>h;
    int count = 0;
    for(int i=l;i<=h;i++){
        int visited[10]={0}; 
        while(i){
            int d = i%10;
            if(visited[d] == 1)
                break;
            visited[d] = 1;
            i /= 10;
        }        
        if(i == 0)
            count++;
    }
    cout<<count;
    return 0;
}