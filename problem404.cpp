// Leetcode Problem

#include<math.h>
#include<iostream>
using namespace std;

string convertToTitle(int columnNumber){
    string res;
    // int cycles = columnNumber/26;
    // int power = pow(10, cycles)
    
    
        while(columnNumber){
            // 3-C, 26-Z, 27-AA, 28-AB
            int x = columnNumber%26?columnNumber%26:26;
            res += (char)('@'+x);
            columnNumber -= x;

            if(columnNumber >= 26)
                columnNumber /= 26;
        }
    
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<convertToTitle(n);
    return 0;
}
