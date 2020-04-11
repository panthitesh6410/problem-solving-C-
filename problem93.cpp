// GeeksforGeeks :  
// linked list of strings forms a palindrome 

#include<iostream>
using namespace std;

struct doubly_linked_list
{
    struct doubly_linked_list *left;
    string info;
    struct doubly_linked_list *right;
};
typedef struct doubly_linked_list node;
node *start, *last;

void insert(string s)
{
    node *newnode, *temp;
    newnode = (node*)malloc(sizeof(node));
    newnode->left = NULL;
    newnode->info = s;
    newnode->right = NULL;
    if(start == NULL)
        start = last = newnode;
    else
    {
        last->right = newnode;
        newnode->left = last;
        last = newnode;
    }
}

int check_palindrome()
{
    int result = 0;
    node *temp;
    string s1, s2;
    temp = start;
    while(temp!=last)
    {
        s1 = s1 + temp->info;
        temp = temp->right;
    }
    temp = last;
    while(temp!=start)
    {
        s2 = s2 + temp->info;
        temp = temp->left;
    }
    if(s1 == s2)
        result = 1;
    return result;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        start = last = NULL;
        int n;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            string s;
            cin>>s;
            insert(s);
        }
        if(check_palindrome()==1)
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
    
    return 0;
}