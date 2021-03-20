// Leetcode - Best Time to Buy and Sell Stock

#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& v){
    // Input: prices = [7,1,5,3,6,4]
    // Output: 5
    int max_profit = 0, min_price=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(v[i]<min_price)
            min_price = v[i];
        if(max_profit < v[i] - min_price)
            max_profit = v[i] - min_price;
    }
    return max_profit;
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);
    cout<<maxProfit(v);
    return 0;
}