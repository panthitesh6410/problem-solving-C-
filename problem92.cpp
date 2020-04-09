// Rotate Doubly Linked List (GeeksforGeeks)

#include<vector>
#include<iostream>
using namespace std;

struct doubly_linked_list
{
    int info;
    struct doubly_linked_list *right;
    struct doubly_linked_list *left;
};
typedef struct doubly_linked_list node;
node *start, *last;

void create_node(int num)
{
    // insert node at end;
    node *newnode, *temp;
    newnode=(node*)malloc(sizeof(node));
    newnode->info = num;
    newnode->right = NULL;
    newnode->left = NULL;
    if(start == NULL)
        start = last = newnode;
    else
    {
        temp = start;
        while(temp!=last)
            temp = temp->right;
        temp->right = newnode;
        newnode->left = temp;
        last = newnode;
    }
}
void display_list()
{
    node *temp;
    temp = start;
    while(temp != NULL)
    {
        cout<<temp->info<<" ";
        temp = temp->right;
    }    
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        start = last = NULL;
        int n, p;
        cin>>n>>p;
        // *************** LOGIC - 1 ******************
        // vector<int> v;
        // // creating linked list
        // for(int j=0;j<n;j++)
        // {
        //     int num;
        //     cin>>num;
        //     v.push_back(num);
        //     create_node(num);
        // }
        // // rotate list anti-clockwise p times
        // int pos = 0;
        // node *temp = start;
        // while(pos<n)
        // {
        //     int index = (pos+(n-p))%n;
        //     temp->info = v[index];
        //     pos++;
        //     temp = temp->right;
        // }
        // display_list();
    
        // ************** LOGIC - 2 *************
        // creating linked list : 
        for(int j=0;j<n;j++)
        {
            int num;
            cin>>num;
            create_node(num);
        }
        
    }
    return 0;
}