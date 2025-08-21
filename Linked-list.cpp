#include<iostream>
using namespace std;

class Node
{
    public:
       int data;
       Node* next;
};
class Linkedlist
{
    private:
       Node* head;
       Node* newNode;
    public:
       Linkedlist()
       {
            head = NULL;
       }
       void insertion_begin(int data)
       {
           Node* newNode = new Node();
           newNode->data = data;
           if(head==NULL)
           {
              newNode->next=NULL;
              head=newNode;
           }
           else
           {
              newNode->next=head;
              head=newNode;
           }
       }
       void display()
       {
          Node* temp = head;
          while(temp != NULL)
          {
             cout<<temp->data<<" -> ";
             temp = temp->next;
          }
          cout<<"NULL"<<endl;
       }
};
int main()
{
    Linkedlist l;
    l.insertion_begin(10);
    l.insertion_begin(20);
    l.insertion_begin(40);
    
    cout<<"Linked List:-"<<endl;
    l.display();
    return 0;
}