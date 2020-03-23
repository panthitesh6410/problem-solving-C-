// codeforces : Lucky Division 

#include<iostream>
using namespace std;

bool is_lucky(int num)
{
    bool result;
    int temp = num;
    int count = 0;
    // count digits in number
    while(num != 0)
    {
        count++;
        num = num / 10;
    }
    // check if (only both 4 and 7) or (only 4) or (only 7) - lucky number (YES) else (NO)
    int new_count=0;
    while(temp != 0)
    {
        int d = temp % 10;
        if(d == 4 || d == 7)
            new_count++;
        temp = temp/10; 
    }
    if(new_count == count)
        result = true;
    else
        result = false;
    return result;
}
int main()
{
    int num;
    cin>>num;
    bool ans = is_lucky(num);
    if(ans)
        cout<<"YES";
    else
    {
        string flag;
    // check if number is almost lucky (if divided by some lucky number) as :
    //       find all factors of num and check if any one of them is lucky ,
    //          if yes, num is almost lucky (YES) 
        for(int i=4;i<=num/2;i++)
        {
            if(num % i == 0)    // a factor
            {
                bool result = is_lucky(i);
                if(result)
                {
                    flag = "YES";
                    break;
                }
                else
                    flag = "NO";
            }
        }
        cout<<flag;
    }
    return 0;
}

