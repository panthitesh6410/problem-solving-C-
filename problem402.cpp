// GeeksforGeeks - Airtel 

#include<iostream>
using namespace std;
string findRollOut(string s, int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            int c = s[j];
            if(c+1 > 122)
                c = (c+1)%122 + 96;
            else
                c =  (c+1)%122;
            char temp = c;
            s[j] = temp;
        }
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    int n = 4;
    int arr[] = {1, 1, 3, 4};
    cout<<findRollOut(s, arr, n);
    return 0;
}