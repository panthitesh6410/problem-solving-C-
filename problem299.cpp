// Counting Valley Problem -  

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int valley_count = 0, level = 0;
    for(int i=0;i<n;i++){
        // U  D  D  D  U  D  U  U
        if(arr[i] == 'U')
            level++;
        else{
            if(level == 0)
                valley_count ++;
            level--;
        }
    }
    cout<<valley_count;
    return 0;
}