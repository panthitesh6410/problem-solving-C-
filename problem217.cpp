#include<iostream>
using namespace std;
enum alpha{
    a, b, c, d, e, f,  g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z
};
int main()
{
    string s;
    cin>>s;
    int arr[s.length()];
    for(int i=0;i<s.length();i++)
        arr[i] = 1;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            if(s[i] == s[j] && i!=j)
                arr[i]++;
        }
    }
    int flag = 0;
    for(int i=0;i<s.length();i++)
    {
        switch(s[i])
        {
            case 'a':
                if(arr[i] != a+1)
                    flag = 1;
                break;
            case 'b':
                if(arr[i] != b+1)
                    flag = 1;
                break;
            case 'c':
                if(arr[i] != c+1)
                    flag = 1;
                break;
            case 'd':
                if(arr[i] != d+1)
                    flag = 1;
                break;
            case 'e':
                if(arr[i] != e+1)
                    flag = 1;
                break;
            case 'f':
                if(arr[i] != f+1)
                    flag = 1;
                break;
            case 'g':
                if(arr[i] != g+1)
                    flag = 1;
                break;
            case 'h':
                if(arr[i] != h+1)
                    flag = 1;
                break;
            case 'i':
                if(arr[i] != i+1)
                    flag = 1;
                break;
            case 'j':
                if(arr[i] != j+1)
                    flag = 1;
                break;
            case 'k':
                if(arr[i] != k+1)
                    flag = 1;
                break;
            case 'l':
                if(arr[i] != l+1)
                    flag = 1;
                break;
            case 'm':
                if(arr[i] != m+1)
                    flag = 1;
                break;
            case 'n':
                if(arr[i] != n+1)
                    flag = 1;
                break;
            case 'o':
                if(arr[i] != p+1)
                    flag = 1;
                break;
            case 'q':
                if(arr[i] != q+1)
                    flag = 1;
                break;
            case 'r':
                if(arr[i] != r+1)
                    flag = 1;
                break;
            // case 's':
            //     if(arr[i] != s+1)
            //         flag = 1;
            //     break;
            case 't':
                if(arr[i] != t+1)
                    flag = 1;
                break;
            case 'u':
                if(arr[i] != u+1)
                    flag = 1;
                break;
            case 'v':
                if(arr[i] != v+1)
                    flag = 1;
                break;
            case 'w':
                if(arr[i] != w+1)
                    flag = 1;
                break;
            case 'x':
                if(arr[i] != x+1)
                    flag = 1;
                break;
            case 'y':
                if(arr[i] != y+1)
                    flag = 1;
                break;
            case 'z':
                if(arr[i] != z+1)
                    flag = 1;
                break;
            default:
                flag = 1;
                break;
        }
    }
    if(flag == 0)
        cout<<"SUCESS";
    else
        cout<<"FAILURE";
    return 0;
}