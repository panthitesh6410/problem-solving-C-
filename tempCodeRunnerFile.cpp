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