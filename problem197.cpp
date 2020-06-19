// codechef code chronicles 1.0 :

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, l, r;
        cin>>a>>b>>l>>r;
        int count = 0;
        
            int sum = a, flag = 0;
            while(sum <= r)
            {
                if(flag == 0){
                    sum += b;
                    count++;
                    flag = 1;
                }
                else{
                    sum += a;
                    count++;
                    flag = 0;
                }
            }
        
        cout<<count<<endl;
    }
    return 0;
}