// Amazon Online Assessment Problem :

//   1 0 0      1 1 1       1 1 1
//   0 0 1  ->  1 1 1  ->   1 1 1
//   0 0 0      0 0 1       1 1 1
// (INITIAL)     (1)         (2)         Result = 2 (count)

#include<vector>
#include<iostream>
using namespace std;

vector<int> v;

bool all_elements_one(int arr[3][3])
{
    bool result = true;
    int count = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j] == 1)
                count++;
        }
    }
    if(count == 9)
        result = false;
    return result;
}

int main()
{
    int arr[3][3], t=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    }
    int count = 0;
    // while(all elements are not 1)
    while(all_elements_one(arr))
    {
        // check the 1's in matrix and store their i,j index into a vector
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[i][j] == 1)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        // change only those places in matrix and increment count by one
        for(int i=0;i<v.size();i=i+2)
        {
            arr[v[i]][v[i+1]-1] = 1;
            arr[v[i]][v[i+1]+1] = 1;
            arr[v[i]+1][v[i+1]] = 1;
            arr[v[i]-1][v[i+1]] = 1;
        }
        count++;
    }
    cout<<count;
    return 0;
}