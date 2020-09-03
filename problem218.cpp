// codechef - August Lunchtime 2020 (Div.2)
// Game on a Strip
// https://www.codechef.com/LTIME87B/problems/ARRGAME

#include<iostream>
using namespace std;
int count_zeros(int arr[], int index, int n)
{
    int zeros_left=0, zeros_right=0;
    for(int i=index;i>0;i--)
    {
        if(arr[i-1] == 0)
            zeros_left++;
        else
            break;
    }
    for(int i=index;i<n-1;i++)
    {
        if(arr[i+1] == 0)
            zeros_right++;
        else
            break;
    }
    if(zeros_left == 0 && zeros_right == 0)
        return 0;
    else if(zeros_right>=zeros_left)
        return 1;
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        // find max segment start_index and end_index
        int max_length = 0;
        int max_start_index, max_end_index;
        for(int i=0;i<n-1;i++)
        {
            int length = 0;
            int j=i+1;
            while(arr[j] == 0)
            {
                length++;
                j++;
            }
            if(length>max_length)
            {
                max_length=length;
                max_start_index=i+1;
                max_end_index=j-1;
            }
        }
        // find center of that segment and put it as nayeon initial position
        int center = (max_start_index+max_end_index)/2;
        int flag = 1;        // 1-nayeon turn, 0-tzuyu turn
        int nayeon_score=0, tzuyu_score=0, nayeon_pos, tzuyu_pos;
        if(flag == 1)
        {
            arr[center] = 1;
            nayeon_score++;
            nayeon_pos=center;
            flag = 0;
        }
        max_length = 0;
        max_start_index, max_end_index;
        for(int i=0;i<n-1;i++)
        {
            int length = 0;
            int j=i+1;
            while(arr[j] == 0)
            {
                length++;
                j++;
            }
            if(length>max_length)
            {
                max_length=length;
                max_start_index=i+1;
                max_end_index=j-1;
            }
        }
        center = (max_start_index+max_end_index)/2;
        if(flag == 0)
        {
            arr[center] = 1;
            tzuyu_score++;
            tzuyu_pos=center;
            flag = 1;
        }
        int exit_flag = 0;
        while(exit_flag == 0)
        {
            int status = 0;
            if((arr[nayeon_pos-1]==1 && arr[nayeon_pos+1]==1)&&(arr[tzuyu_pos-1]==1 && arr[tzuyu_pos+1]==1))
                exit_flag = 1;
            else
            {
                if(flag == 1)  //nayeon turn
                {
                    if(count_zeros(arr, nayeon_pos, n)==1)
                    {
                        arr[nayeon_pos+1]=1;
                        nayeon_score++;
                    }
                    else if(count_zeros(arr, nayeon_pos, n)==0)
                    {
                        status++;
                        nayeon_score = nayeon_score;
                    }
                    else
                        arr[nayeon_pos-1]=1;
                        nayeon_score++;
                    flag = 0;
                }
                else           // tzuyu turn
                {
                   if(count_zeros(arr, tzuyu_pos, n)==1)
                    {
                        arr[tzuyu_pos+1]=1;
                        tzuyu_score++;
                    }
                    else if(count_zeros(arr, tzuyu_pos, n)==0)
                    {
                        status++;
                        tzuyu_score = tzuyu_score;
                    }
                    else
                        arr[tzuyu_pos-1]=1;
                        tzuyu_score++;
                    flag = 1;
                } 
                if(status >= 2)
                    exit_flag=1;
            }
        }
        if(nayeon_score > tzuyu_score)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}