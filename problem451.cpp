// Leetcode - Check if Array Is Sorted and Rotated

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

bool check(vector<int>& nums) {
    int size = nums.size();
    // removing consecutive duplicates -
    here:
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] == nums[i+1]){
            nums.erase(nums.begin()+i);
            goto here;
        }
    }
    // for(int i=0;i<nums.size();i++)
    //     cout<<nums[i]<<" ";
    vector<int> temp;
    int min_index = 0, min_value = nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i] <= min_value){
            min_value = nums[i];
            min_index = i;
        }
    }
    int i = min_index;
    while(size--){
        temp.push_back(nums[i]);
        i = (i+1)%nums.size();
    }
    sort(nums.begin(), nums.end());
    for(int j=0;j<nums.size();j++){
        if(nums[j] != temp[j])
            return false;
    }
    return true;
}

int main(){
    vector<int> nums;
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(3);
    cout<<check(nums);
    return 0;
}