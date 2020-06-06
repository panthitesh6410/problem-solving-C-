// ORACLE -
// Given a LL, add 1 to it  : 9->9->9 becomes 1->0->0->0

#include<iostream>
using namespace std;

struct LL{
    int info;
    struct LL *next;
};
typedef struct LL node;
node* start;

void insert(node *start, int num){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start == NULL)
        start = newnode;
    else{
        node *temp = start;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

void display(node *start){
    if(start == NULL)
        cout<<"LL is empty"<<endl;
    else{
        node *temp = start;
        while(temp != NULL)
        {
            cout<<temp->info<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

void add_one(node *start){
    // node *temp = start->next;
    // int num = start->info;
    // while(temp->next != NULL)
    //     num = num*10 + temp->info;
    // num++;
    // 9-9-9  to 1-0-0-0
       
}

int main()
{
    start = NULL;
    int count;
    cout<<"Enter the number of digits : "<<endl;
    cin>>count;
    for(int i=1;i<=count;i++)
    {
        int digit;
        cout<<"Enter digit : "<<endl;
        cin>>digit;
        insert(start, digit);
    }
    cout<<"Initial LL - "<<endl;
    display(start);
    add_one(start);
    cout<<"LL after adding one - "<<endl;
    display(start);
    return 0;
}

