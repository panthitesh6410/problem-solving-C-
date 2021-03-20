/* Pascal Triangle -

            1
          1   1
        1   2   1
      1   3   3   1
    1   4   6   4   1
*/
            
#include<iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 2;i<=num;i++)
        fact *= i;
    return fact;
}

int calc_val(int n, int r){
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int n_minus_r_fact = factorial(n-r);
    return n_fact / (r_fact*n_minus_r_fact);
}

int main(){
    int n;
    cin>>n;
    int temp = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<temp;j++)
            cout<<" ";
        temp--;
        for(int j=1;j<=i;j++){
            if(j == 1 || j == i){
                cout<<1<<" ";
            }
            else{      
                // to find value @ ith row and jth col -
                // find (i-1)C(j-1) - P&C formula :
                int val = calc_val(i-1,j-1);         
                cout<<val<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}