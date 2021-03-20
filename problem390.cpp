// Leetcode - Plus One

#include<vector>
#include<iostream>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    if(digits.size() == 1){
        if(digits[0]<9)
            digits[0]++;
        else{
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
    }
    else{
        for(int i=digits.size()-1;i>0;i--){
            if(digits[i]<9){
                digits[i]++;
                break;
            }
            else{
                digits[i] = 0;
                if(digits[i-1] < 9){
                    digits[i-1]++;  
                    break;                 
                } 
                else if(i-1 == 0){
                    digits[i-1] = 0;
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
        }
    }
    return digits;
}

int main(){
    vector<int> v;
    // v.push_back(1);
    v.push_back(9);
    v.push_back(9);
    // v.push_back(9);
    vector<int> res = plusOne(v);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";  
    return 0;
}