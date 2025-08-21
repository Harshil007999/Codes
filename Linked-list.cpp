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
       void insertion_begin()
       {
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
    Node n;
    Linkedlist l;
    l.insertion_begin();
    l.display();
    return 0;
}

