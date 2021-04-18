// TCS Codevita Problem :

#include<iostream>
using namespace std;
int find_count(int row, int col){
    int count = 0;
    while(row && col){
        count++;
        if(row > col)
            row -= col;
        else
            col -= row;
    }
    return count;
}
int main(){
    int min_len, max_len, min_wid, max_wid;
    cin>>min_len>>max_len>>min_wid>>max_wid;
    int count = 0;
    for(int i=min_len;i<=max_len;i++){
        for(int j=min_wid;j<=max_wid;j++){
            count += find_count(i, j);
        }
    }
    cout<<count;
    return 0;
}