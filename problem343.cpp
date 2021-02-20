// TCS codevita question- 
// (stars and constellation) -

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;i++){
        if(arr[0][i] == '#' && arr[1][i] == '#' && arr[2][i] == '#')
            cout<<'#';
        else if(arr[0][i] == '.' && arr[1][i] == '.' && arr[2][i] == '.'){}
        else{
            char a0, b0, c0, a1, b1, c1, a2, b2, c2;
            int x = i;
            a0 = arr[0][x];
            b0 = arr[0][x+1];
            c0 = arr[0][x+2];
            a1 = arr[1][x];
            b1 = arr[1][x+1];
            c1 = arr[1][x+2];
            a2 = arr[2][x];
            b2 = arr[2][x+1];
            c2 = arr[2][x+2];
            if(a0 == '.' && b0 == '*' && c0 == '.' && a1 == '*' && b1 == '*' && c1 == '*' && a2 == '*' && b2 == '.' && c2 == '*')
                cout<<"A";
            if(a0 == '*' && b0 == '*' && c0 == '*' && a1 == '*' && b1 == '*' && c1 == '*' && a2 == '*' && b2 == '*' && c2 == '*')
                cout<<"E";
            if(a0 == '*' && b0 == '*' && c0 == '*' && a1 == '.' && b1 == '*' && c1 == '.' && a2 == '*' && b2 == '*' && c2 == '*')
                cout<<"I";
            if(a0 == '*' && b0 == '*' && c0 == '*' && a1 == '*' && b1 == '.' && c1 == '*' && a2 == '*' && b2 == '*' && c2 == '*')
                cout<<"O";
            if(a0 == '*' && b0 == '.' && c0 == '*' && a1 == '*' && b1 == '.' && c1 == '*' && a2 == '*' && b2 == '*' && c2 == '*')
                cout<<"U";
        }
    }

    return 0;
}