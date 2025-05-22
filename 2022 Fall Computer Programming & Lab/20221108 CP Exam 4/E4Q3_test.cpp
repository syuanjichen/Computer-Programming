//PREPEND BEGIN
#include <iostream>
using namespace std;

struct Node
{
    const char element;
    struct Node *next;
};

void create(Node **head, int leng)
{
    int i;
    char iter;
    cin >> iter;
    *head = new Node{iter};
    
    Node *current = *head;
    for (i = 1; i < leng + 1; i++) 
	{
        if (i != leng) {
            cin >> iter;
            current->next = new Node{iter};
            current = current->next;
        } else { current->next = NULL; }

    }
}

void freenode(Node **head)
{   
    Node *current=NULL;
    if (*head != NULL)
	{
        current= (*head)->next;
        delete *head;
        *head=current;
    }
}
//PREPEND END

//TEMPLATE BEGIN
void reverse(Node **head, int k)
{
	int i;
	Node *current = NULL;
	char *rev;
	rev = new char [k];
	for (i = 0 ; i < k ; i++) 
	{
        current = (*head)->next;
        rev[i] = (*head)->element;
        *head = current;
    }
    
    for(i = k - 1 ; i >= 0 ; i--)
    	cout << rev[i] << " ";
}
void printList(Node *head)
{
	Node *current = NULL;
	while(head != NULL)
	{
        current = (head)->next;
        cout << head -> element << " ";
        head = current;
    }
}
//TEMPLATE END

//APPEND BEGIN
int main()
{
    Node *head = NULL;
    int leng, k;
    cin >> leng;
    cin >> k;
    create(&head,leng);
    reverse(&head,k);
    printList(head);
    freenode(&head);
    return 0;
}
//APPEND END
