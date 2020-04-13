// HackerRank - Maximum Element :

#include<iostream>
using namespace std;

struct stack{
    int info;
    struct stack *next;
};
typedef struct stack node;
node *top;

void push(int num)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->info = num;
    newnode->next = NULL;
    if(top == NULL)
        top = newnode;
    else
    {
        newnode->next = top;
        top = newnode;
    }
}

void pop()
{
    node *temp = top;
    top = top->next;
    free(temp);
}

void display()
{
    node *temp = top;
    int max = top->info;
    while(temp != NULL)
    {
        if(temp->info >= max)
        {
            max = temp->info;
        }
        temp = temp->next;
    }
    cout<<max<<endl;
}

int main()
{
    top = NULL;
   int N, num;
   cin>>N;
   for(int i=1;i<=N;i++)
   {
       int query;
       cin>>query;
       switch(query)
       {
           case 1:
                cin>>num;
                push(num);
                break;
           case 2:
                pop();
                break;
           case 3:
                display();
                break;
           default:
            cout<<"Invalid Input"<<endl;
            break;
       }
   }
    return 0;
}