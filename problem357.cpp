// TCS digital capability exam -

#include<vector>
#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    int arr[atoi(argv[1])];
    vector<int> v;
    for(int i=0;i<atoi(argv[1]);i++)
        cin>>arr[i];
    int sum = 0;
    for(int i=0;i<atoi(argv[1]);i++){
        if(arr[i]<arr[i+1]){
            sum = sum + arr[i]+arr[i+1];
        }
        else{
            if(sum != 0){
                v.push_back(sum);
                sum = 0;
            }
        }
        if(i+1 == atoi(argv[1])-1 && atoi(argv[1])%2==0)
            v.push_back(sum);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
