// TCS coding Practise

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num); 
    }
    // 3 2 1 7 5 4       1 8 0 2 3 5 6
    sort(v.begin() ,v.end());

    if(v.size() <= 2)
        cout<<0;
    else{
        vector<int> even, odd;
        for(int i=v.size()-1;i>=0;i--){
            if(i % 2 == 0)
                even.push_back(v[i]);
            else
                odd.push_back(v[i]);
        }
        int max_even = 0, max_odd = 0;
        if(even.size()>=2)
            max_even = even[1];
        if(odd.size() >= 2)
            max_odd = odd[1];
        cout<<max_odd+max_even;
    }

    return 0;
}