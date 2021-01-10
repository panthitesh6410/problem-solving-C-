// Wipro Problem - counting pairs 

#include<iostream>
#include<vector>
using namespace std;
bool is_present(vector<int> v, int num){
    for(int i=0;i<v.size();i++){
        if(v[i] == num)
            return true;
    }
    return false;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    int arr[n];
    int total_pairs = 0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(!is_present(v, arr[i]))
            v.push_back(arr[i]);
    }
    for(int i=0;i<v.size();i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(v[i] == arr[j])
                count++;
        }
        int pairs = count/2;
        total_pairs += pairs;
    }
    cout<<total_pairs;
    // find and store unique elemnts in a vector
    // for each element in vector traverse arr and count number of occurences
    // divide its total occurences by 2 and add that to total_pairs var
    return 0;
}