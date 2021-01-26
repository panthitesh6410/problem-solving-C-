// Merge overlapping intervals -

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

struct interval{
    int start, end;
};
typedef struct interval node;

int main(){
    int n;
    cin>>n;
    vector<node> result;
    node v[n];
    for(int i=0;i<n;i++){
        int num1, num2;
        cin>>num1>>num2;
        v[i].start = num1;
        v[i].end = num2;
    }
    // sort(v, v+n);
    node temp;
    temp.start = v[0].start;
    temp.end = v[0].end;
    for(int i=0;i<n;i++){
        if(v[i].start <= temp.end){
            if(v[i].end > temp.end)
                temp.end = v[i].end;
        }
        else{
            result.push_back(temp);
            temp = v[i];
        }
    }
    result.push_back(temp);
    for(int i=0;i<result.size();i++)
        cout<<result[i].start<<" "<<result[i].end<<endl;
    return 0;
}