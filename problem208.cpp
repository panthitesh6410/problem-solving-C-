// TCS Mockvita-2 2020
//  Problem-A : Swayamvar

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char bride[n], groom[n];
    cin>>bride>>groom;
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j=0;j<n;j++)
        {
            if(bride[i] == groom[j])
            {
                flag = 1;
                bride[i] = groom[j] = 'z';  
            }
        }
        if(flag == 0)
            break;
    }
    // cout<<bride;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(bride[i] != 'z')
            count++;
    }
    cout<<count;
    return 0;
}