// TCS codevita question- 
// (Prime Time Again)

#include<iostream>
using namespace std;
bool is_prime(int num){
    for(int i=2;i<=num/2;i++){
        if(num % i == 0)
            return false;
    }
    return true;
}
int main(){
    int h, p;
    cin>>h>>p;
    int count = 0;
    if(h%p == 0){
        int r = h/p, c = p;
        int arr[r][c];
        for(int i=1;i<=r;i++){
            int temp = 0;
            for(int j=1;j<=c;j++){
                arr[i][j] = i + temp*r;
                temp++;
            }
        }
        // for(int i=1;i<=r;i++){
        //     for(int j=1;j<=c;j++)
        //         cout<<arr[i][j]<<" ";
        //     cout<<endl;
        // }
        for(int i=1;i<=r;i++){
            int inner_count = 0;
            for(int j=1;j<=c;j++){
                if(is_prime(arr[i][j]))
                    inner_count++;
            }
            if(inner_count == p)
                count++;
        }
        cout<<count;
    }
// 49, 7
// 1 8  15
// 2 9  16
// 3 10 17
// 4 11 18
// 5 12 19
// 6 13 20
// 7 14 21
    return 0;
}