// TCS codevita season 9 - problem E :

#include<iostream>
using namespace std;
int main()
{
    int cost_h, cost_c, cost_a;
    cin>>cost_h>>cost_c>>cost_a;
    int max_area_h, max_area_c, max_area_a;
    cin>>max_area_h>>max_area_c>>max_area_a;
    int no_h, area_h;
    cin>>no_h>>area_h;
    int no_c, area_c;
    cin>>no_c>>area_c;
    int no_a, area_a;
    cin>>no_a>>area_a;
    int total_size;
    cin>>total_size;
    int final_cost;
    int area1,area2,area3;
    if(cost_h<=cost_c && cost_h<=cost_a)
    {
        area1 = max_area_h;
        total_size -= area1;
        if(cost_c>=cost_a)
        {
            area2 = no_c*area_c;
            total_size -= area2;
            area3 = total_size;
        }
        else
        {
            area3 = no_a*area_a;
            total_size -= area3;
            area2 = total_size;
        }
        final_cost = (area1*cost_h)+(area2*cost_c)+(area3*cost_a);
        cout<<final_cost;
    }
    else if(cost_c<=cost_h && cost_c<=cost_a)
    {
        area2 = max_area_c;
        total_size -= area2;
        if(cost_h>=cost_a)
        {
            area1 = no_h*area_h;
            total_size -= area1;
            area3 = total_size;
        }
        else
        {
            area3 = no_c*area_c;
            total_size -= area3;
            area1 = total_size;
        }
        final_cost = (area1*cost_h)+(area2*cost_c)+(area3*cost_a);
        cout<<final_cost;
    }
    else if(cost_a<=cost_c && cost_a<=cost_h)
    {
        area3 = max_area_a;
        total_size -= area3;
        if(cost_c>=cost_h)
        {
            area2 = no_c*area_c;
            total_size -= area2;
            area1 = total_size;
        }
        else
        {
            area1 = no_a*area_a;
            total_size -= area1;
            area2 = total_size;
        }
        final_cost = (area1*cost_h)+(area2*cost_c)+(area3*cost_a);
        cout<<final_cost;
    }
    return 0;
}