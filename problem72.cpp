// codeforces : Elephant :

#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int steps[] = {5, 4, 3, 2, 1};
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(x>=steps[i])
        {
            x = x-steps[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}