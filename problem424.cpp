// TCS Problem - (Special Sum) :

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];  
        vector<int> v;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += arr[j];
                v.push_back(sum);
            }
        }
        // for(int i=0;i<v.size();i++)
        //     cout<<v[i]<<"\n";
        sort(v.begin(), v.end());
        for(int i=0;i<q;i++){
            int l, r;
            cin>>l>>r;
            int sum = 0;
            for(int j=l-1;j<=r-1;j++)
                sum += v[j];
            cout<<sum<<"\n";
        }
    }
// 1 2 3 4 - 1,2,3,4,1+2,1+2+3,1+2+3+4,2+3,2+3+4,3+4
    return 0;
}