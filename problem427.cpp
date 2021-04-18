// TCS Codevita Problem:

#include<iostream>
using namespace std;
int main(){
    int n, last;
    cin>>n;
    string brides, grooms;
    cin>>brides>>grooms;
    // rmrm mmmr - 2
    // rrmm mrmr - 0
    for(int i=0;i<brides.length();i++){
        bool flag = false;
        for(int j=0;j<grooms.length();j++){
            if(brides[i] == grooms[j]){
                flag = true;
                grooms.erase(grooms.begin()+j);
                j++;
            }
        }
        if(flag == false)
            break;
    }
    cout<<grooms.length();
    return 0;
}