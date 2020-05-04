// Codechef - May Challenge 2020 Div.2 (Isolation Centers) :

#include<iostream>
using namespace std;

void find_count(int element_count[], int n, string s)
{
    // find count of all characters of string
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((s[i] == s[j]) && i != j)
                element_count[i]++;
        }
    }
}
int find_max_count(int element_count[], int n)
{
    // find max value out of the array
    int max=element_count[0];
    for(int i=0;i<n;i++)
    {
        if(element_count[i] >= max)
            max = element_count[i];
    }
    return max;
}
bool each_element_count_to_one(int element_count[], int n)
{
    // return true if all elements are 1
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(element_count[i] == 1)
            count++;
    }
    if(count == n)
        return true;
    return false;
}
int reduce_by_one(int element_count[], int n)
{
    // reduce those element by one who are != 1
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(element_count[i] > 1)
        {
            element_count[i]--;
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int j=1;j<=q;j++)
        {
            int c;
            cin>>c;
            int element_count[n];
            for(int k=0;k<n;k++)
                element_count[k] = 1;
            find_count(element_count, n, s);
            int max_count = find_max_count(element_count, n); 
            int count=0;
            if(max_count > c)
            {
                while(!each_element_count_to_one(element_count, n))
                {
                    count = reduce_by_one(element_count, n);
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}