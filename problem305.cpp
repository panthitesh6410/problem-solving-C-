// Array Left Rotation (HackerRank)

#include<iostream>
#include<vector>
using namespace std;
vector<int> rotLeft(vector<int> a, int d) {
    int tmp[a.size()]={0};
    for(int i=0;i<a.size();i++){
        int v = (i+(a.size()-d))%(a.size());
        // printf("--%d\n", v);
        tmp[v] = a[i];
    }
    for(int i=0;i<a.size();i++)
        a[i] = tmp[i];
    return a;
}
int main(){
    int n, d;
    cin>>n>>d;
    vector<int> a;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a.push_back(num);
    }
    vector<int> res = rotLeft(a, d);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}
