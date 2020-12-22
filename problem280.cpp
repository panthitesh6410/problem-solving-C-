// December Cook-off 2020 Div.2
// Minimum Attendance Requirement

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, total=120;
        cin>>n;
        string s;
        cin>>s;
        int count_0=0, count_1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
                count_1++;
            else
                count_0++;
        }
        float perc = (count_1 * 100)/n;
        if(perc > 75)
            cout<<"YES"<<endl;
        else{
            int rem = total - n;
            count_1 += rem;
            float perc = (count_1 * 100)/n;
            if(perc > 75)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}