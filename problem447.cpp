#include<vector>
#include<iostream>
using namespace std;
int calc_sum(vector<int> v){
    int sum = v[0];
    for(int i=1;i<v.size();i++)
        sum += v[i];
    return sum;
}
int minimumDivisor(vector<int> arr, int threshold){
    int num = 2;
    int sum = calc_sum(arr);
    while(sum > threshold){
        for(int i=0;i<arr.size();i++){
            arr[i] /= num;
            arr[i]++;
            sum = calc_sum(arr);
        }
        num++;
    }
    return --num;
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(7);
    int k = 8;
    cout<<minimumDivisor(arr,k);
}