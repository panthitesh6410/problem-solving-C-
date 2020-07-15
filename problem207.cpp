
// Techgig -   Cut even from Family :

#include<iostream>
using namespace std;

struct linked_list{
    // struct linked_list *left;
    int info;
    struct linked_list *next;
};
typedef struct linked_list node;

node *start;

node *insert_list(node *start, int num)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    // newnode->left = NULL;
    if(start == NULL)
        start = newnode;
    else{
        node *temp = start;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    return start;
}

void delete_even(node *start)
{
    node *temp = start, *prev = NULL;
    while(temp != NULL)
    {
        if(temp->info % 2 == 0)
        {
            if(temp == start)
            {
                start = start->next;
                free(temp);
            }
            else if(temp->next != NULL)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                free(temp);
            }
            
        }
        prev = temp;
        temp = temp->next;
    } 
}

void display_list(node *start)
{
    node *temp = start;
    while(temp->next != NULL)
    {
        cout<<temp->info<<endl;
        temp = temp->next;
    }
}

int main()
{
    start = NULL;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num;
        cin>>num;
        start = insert_list(start, num);
    }
    delete_even(start);
    display_list(start);
    return 0;
}