// leetcode problem - Maximum Subarray 

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums){
    int max_sum=nums[0], sum = 0;
    for(int i=0;i<nums.size();i++){
        if(sum < 0)
            sum = 0;
        sum = sum + nums[i];
        if(sum > max_sum)
            max_sum = sum;    
    }
    return max_sum;
}
//  [-2,1,-3,4,-1,2,1,-5,4]
int main(){
    vector<int> v;
    v.push_back(-2);
    v.push_back(1);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(-1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(-5);
    v.push_back(4);
    cout<<maxSubArray(v);
    return 0;
}