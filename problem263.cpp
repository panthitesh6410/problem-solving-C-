// reverse a linked list in group of given size :

#include<iostream>
using namespace std;
struct ll{
    int info;
    struct ll *next;
};
typedef struct ll node;
node *start;
node *insert_end(node *start, int num)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->info=num;
    if(start==NULL)
        start=newnode;
    else{
        node* temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
    return start;
}
void display_list(node *start)
{
    if(start!=NULL)
    {
        for(node *temp=start;temp!=NULL;temp=temp->next)
            cout<<temp->info<<"=>";
        cout<<"NULL"<<endl;
    }
}
node *reverse_list1(node *start)        // iterative method
{
    if(start!=NULL)
    {
        node *prev=NULL, *temp=start, *nextnode=NULL;
        while(temp!=NULL)
        {
            nextnode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nextnode;
        }
        start=prev;
    }
    return start;
}
node *reverse_list2(node *start)       // recursive method
{
    if(start==NULL || start->next==NULL)
        return start;
    node *rest=reverse_list2(start->next);
    start->next->next=start;
    start->next=NULL;
    return rest;
}
void reverse(node *first_node, node *last_node)
{
    node *temp=first_node, *prev=NULL, *next_node=NULL;
    while(temp!=last_node)
    {
        next_node=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next_node;
    }
    first_node=prev;
    // return first_node;
}
int main()
{
    int size;  
    cin>>size;
    start=NULL;
    start=insert_end(start,4);
    start=insert_end(start,2);
    start=insert_end(start,2);
    start=insert_end(start,1);
    start=insert_end(start,8);
    start=insert_end(start,7);
    start=insert_end(start,6);
    start=insert_end(start,5);
    display_list(start);
    // start=reverse_list2(start);
    node *temp=start;
    int i=1;
    while(temp!=NULL)
    {
        node* first=start, *last=start;
        if(i%size!=0)
        {
            last=last->next;
            temp=temp->next;
            i++;
        }
        start=reverse(first, last);
        first=last;
    }
    display_list(start);
    return 0;
}
