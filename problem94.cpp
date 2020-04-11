//  Delete Middle of Linked List  (Amazon/Flipkart/Micreosoft) :

// Deletes middle of linked list and returns head of the modified list

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* deleteMid(Node* head) 
{
    Node *temp, *prev;
    prev = NULL;
    temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    int mid = count/2+1;
    int pos = 1;
    while(pos<mid)
    {
        prev = temp;
        temp = temp->next;
        pos++;
    }    
    prev->next = temp->next;
    free(temp);
    return head;
}
