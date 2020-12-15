//  car parking space problem : 

#include<iostream>
using namespace std;

string arr[3][6];

void assign_place()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(arr[i][j] == "0")
            {
                arr[i][j] = "*";
                break;
            }
        }
    } 
}
void ask_car_pos(int pos)
{
    int r,c;
    r = pos%10;
    c = pos/10;
    if(arr[r][c] == "0")
        cout<<"already vacant"<<endl;
    else
        arr[r][c] = "0";
}
void view_status()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
            arr[i][j] = "0";     // initially all empty.
    }
    while(true)
    {
        int choice, pos;
        cout<<"Press 1 to car IN"<<endl;
        cout<<"Press 2 to car OUT"<<endl;
        cout<<"Press 3 to display status"<<endl;
        cout<<"Press 4 to exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                assign_place();
                break;
            case 2:
                cout<<"enter position : ";
                cin>>pos;
                ask_car_pos(pos);
                break;
            case 3:
                view_status();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Invalid Input";
                break;
        }
    }

    return 0;
}