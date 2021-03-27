// Codechef Lunchtime 2021 March Div.3 

#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int max_rating = 0;
        while(n--){
            int size, rating;
            cin>>size>>rating;
            if(size <= x){
                if(rating > max_rating)
                    max_rating = rating;
            }
        }
        cout<<max_rating<<"\n";
    }

    return 0;
}