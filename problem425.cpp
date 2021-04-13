// Leetcode - Binary Gap

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int binaryGap(int n) {
    vector<int> binary;
    // int binary[32];
    // int i=0;
    while(n){
        int d = n%2;
        // binary[i] = d;
        binary.push_back(d);
        n /= 2;
        // i++;
    }
    // i--;
    reverse(binary.begin(), binary.end());
    int final_count = 0;
    for(int i=0;i<binary.size();i++){
        int count = 0;
        if(binary[i] == 1){
            int j=i+1;
            while(j<binary.size() && binary[j] != 1){
                count++;
                j++;
            }
            if(binary[j] != 1)
                count = 0;
            else
                count++;
            if(count > final_count)
                final_count = count;
        }
    }
    return final_count;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryGap(n);    
    return 0;
}