// TCS Mockvita 202 - Problem-C :

#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    int c;
    scanf("%d", &c);
    int vect[c];
    for(int i=1;i<=c;i++)
    {
        float x, y, v;
        scanf("%d%d%d", &x, &y, &v);
        float dist = pow((y*y + x*x), 0.5);
        float time = dist/v;
        // vect.push_back(time);
        vect[i] = time;
    }
    int count = 0;
    for(int i=1;i<=c-1;i++)
    {
        for(int j=i+1;j<=c;j++)
        {
            if(vect[i] == vect[j])
                count++;
        }
    }
    cout<<count;
    return 0;
}