// HackerRank - Flipping Bits :

/*
given decimal, 
convert it to binary, flip all bits, again convert into decimal
*/

#include<math.h>
#include<iostream>
using namespace std;
int main(){
    unsigned long int q;
    cin>>q;
    while(q--){
        unsigned long int num;
        cin>>num;
        int binary[32]={0}, i=31;
        // convert decimal to binary -
        while(num){
            int d = num%2;
            binary[i] = d;
            num /= 2;
            i--;
        }
        // cout<<"before flipping -"<<endl;
        // for(int r=0;r<32;r++)
        //     cout<<binary[r]<<" ";
        // cout<<endl;
        // flipping all bits -
        for(int r=0;r<32;r++){
            if(binary[r] == 0)
                binary[r] = 1;
            else if(binary[r] == 1)
                binary[r] = 0;
        }
        // cout<<"after flipping -"<<endl;
        // for(int r=0;r<32;r++)
        //     cout<<binary[r]<<" ";
        // cout<<endl;
        // convert back to decimal -
        unsigned long int po = 0, sum = 0;
        for(int j=31;j>=0;j--){ 
            // cout<<"\n-------res :"<<res;
            // cout<<"\n-------pow :"<<po<<endl;
            sum += binary[j]*pow(2, po);
            po++;
        }
        cout<<sum<<endl;
    } 
    return 0;
}