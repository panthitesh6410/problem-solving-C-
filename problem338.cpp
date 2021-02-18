// given 'k', find pairs from arr1[], arr2[] that,
// diffreence b/w k and sum of pairs is minimum

#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1], arr2[n2];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    int k, diff, i1, i2;
    cin>>k;
    diff = k;
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<n2;j++){
            if(abs(arr1[i]+arr2[j] - k) < diff){
                diff = abs(arr1[i]+arr2[j] - k);
                i1 = i;
                i2 = j;
            }
        }
    }
    cout<<i1<<" from arr1[] and "<<i2<<" from arr2[]";

    return 0;
}