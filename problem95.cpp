// Sort a Stack (Amazon/Goldman Sachs/IBM/Yahoo) :

#include<iostream>
using namespace std;
int top;
void push(int stack[], int num)
{
        top++;
        stack[top] = num;
}
void display(int stack[])
{
    if(top == -1)
        cout<<"Stack is Empty"<<endl;
    else
    {
        for(int i=top;i>=0;i--)
            cout<<stack[i]<<" ";
    }
}
void selection_sort(int stack[], int n)
{
    for(int i=n-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(stack[i]<stack[j])
            {
                int temp = stack[i];
                stack[i] = stack[j];
                stack[j] = temp;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int stack[n];
        top = -1;
        for(int j=0;j<n;j++)
        {
            int num;
            cin>>num;
            push(stack, num);
        }
        selection_sort(stack, n);
        display(stack);
        cout<<endl;
    }
    return 0;
}