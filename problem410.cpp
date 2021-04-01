/*
add binary :
(In Python)
def add(n1, n2):
	sum = bin(int(n1, 2)+int(n2, 2))
	print(sum[2:])
*/

// ----------------------------------------------------

/*
Rotate Array :

#include<iostream>
using namespace std;
int main(){
    // 0 1 2 3 4        0 1 2 3 4 
    // 1 2 3 4 5, 3 --> 3 4 5 1 2 
    // 
    int arr[]={1,2,3,4,5,6,7}, k=3;
    int temp[5];
    for(int i=0;i<7;i++){
        int index = (i+k)%7;
        temp[index] = arr[i]; 
    }
    for(int i=0;i<7;i++)
        cout<<temp[i]<<" ";
    return 0;
}
*/
