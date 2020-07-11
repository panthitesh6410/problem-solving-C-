// TCS Codeita 2018 Round-1 :
// Bride Hunting -

#include<vector>
#include<iostream>
using namespace std;

struct girl{
    int x;
    int y;
    int q;
};
typedef struct girl girl;

int main()
{
    int n, m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>mat[i][j];
    }
    vector<girl> girls;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if((mat[i][j] == 1) && ((i!=1 && j!=1) || (i!=1 || j!=1)))
            {
                int qualitiy = 0;
                girl g;
                g.x = i;
                g.y = j;
                if(mat[i-1][j] == 1)
                    qualitiy++;
                if(mat[i][j+1] == 1)
                    qualitiy++;
                if(mat[i+1][j] == 1)
                    qualitiy++;
                if(mat[i][j-1] == 1)
                    qualitiy++;
                if(mat[i-1][j+1] == 1)
                    qualitiy++;
                if(mat[i+1][j-1] == 1)
                    qualitiy++;
                if(mat[i+1][j+1] == 1)
                    qualitiy++;
                if(mat[i-1][j-1] == 1)
                    qualitiy++;
                g.q = qualitiy;
                girls.push_back(g);
            }
        }
    }
    int max = girls[0].q;
    for(int i=0;i<girls.size();i++)
    {
        cout<<girls[i].x<<", "<<girls[i].y<<", "<<girls[i].q<<endl;
        if(girls[i].q > max)
            max = girls[i].q;
    }
    int final_x=m+n, final_y=m+n;
    for(int i=0;i<girls.size();i++)
    {
        if(girls[i].q == max)
        {
            if(girls[i].x+girls[i].y < final_x+final_y)
            {
                final_x = girls[i].x;
                final_y = girls[i].y;
            }
        }
    }
    cout<<final_x<<":"<<final_y<<":"<<max;
    return 0;
}