#include<vector>
#include<iostream>
using namespace std;

bool is_ugly(int num){
    vector<int> factors;
    // 1 2 3 4 5 6 8 9 10 12 15 . . . 
    for(int i = 2;i<=num/2;i++){
        if(num%i == 0)
            factors.push_back((i));
    }
    for(int i=0;i<factors.size();i++){
        if(factors[i]%2 != 0 || factors[i]%3 != 0 || factors[i]%5 != 0)
            return false;
    }
    return true;
}

int ugly_number(int num){
    int count = 0;
    int i = 1;
    while(count < num){
        if(is_ugly(i))
            count++;
        i++;
    }
    return i;
}

int main(){
    int n;
    cin>>n;
    cout<<ugly_number(n);
    return 0;
}