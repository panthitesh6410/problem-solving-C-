// Asked by Microsoft -

#include<iostream>
using namespace std;

struct SinglyLinkedList
{
    int info;
    struct SinglyLinkedList *next;
};
typedef struct SinglyLinkedList node;
node *start1, *start2;

int reverse(int num)
{
    int rev = 0;
    while(num != 0)
    {
        rev = (rev*10) + num%10;
        num /= 10;
    }
    return rev;
}

node *insert_LL(node *start, int num)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start == NULL)
        start = newnode;
    else
    {
        node *temp = start;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    return start;
}

void display(node *start)
{
    if(start == NULL)
        cout<<"Empty List"<<endl;
    else
    {
        node *temp = start;
        while(temp != NULL)
        {
            cout<<temp->info<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int add_LL(node *start1, node *start2)
{
    int sum1=0, sum2=0;
    // add elemens of list to get a number
    node *temp = start1;
    while(temp != NULL)
    {
        sum1 = (sum1*10) + temp->info;
        temp = temp->next;
    }
    temp = start2;
    while(temp != NULL)
    {
        sum2 += (sum2*10) + temp->info;
        temp = temp->next;
    }
    // reverse that number
    sum1 = reverse(sum1);
    sum2 = reverse(sum2);

    return (sum1+sum2);
}

void return_LL(int result)
{
    // display result in reverse order as LL :
    while(result != 0)
    {
        cout<<result%10<<"->";
        result /= 10;
    }
    cout<<endl;
}

int main()
{
    start1=start2=NULL;
    int num, choice, result;
    while(true)
    {
        cout<<"MENU "<<endl;
        cout<<"1. Insert at LL1"<<endl;
        cout<<"2. Insert at LL2"<<endl;
        cout<<"3. Display LL1"<<endl;
        cout<<"4. Display LL2"<<endl;
        cout<<"5. Add and Return LL"<<endl;
        cout<<"6. EXIT"<<endl;
        cout<<"Choose an Option : "<<endl;
        cin>>choice;
        
        switch(choice){
            case 1:
                cout<<"Enter number - "<<endl;
                cin>>num;
                start1=insert_LL(start1, num);
                break;
            case 2:
                cout<<"Enter number - "<<endl;
                cin>>num;
                start2=insert_LL(start2, num);
                break;
            case 3:
                display(start1);
                break;
            case 4:
                display(start2);
                break;
            case 5:
                result = add_LL(start1, start2);
                return_LL(result);   
                break;
            case 6:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
    }
    return 0;
}