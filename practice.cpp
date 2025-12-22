#include<iostream>
using namespace std;

class Node
{
    public:
      int data;
      Node* next;
};
class LinkedList
{
    Node* head;
   public:
     LinkedList()
     {
         head = nullptr;
     }
     
     void insertbegin(int data)
     {
         Node* newNode = new Node();
         newNode->data = data;
         newNode->next = nullptr;
         
         if(head == nullptr)
         {
             head = newNode;
             newNode->next = head;
             return;
         }
         Node* temp = head;
         while(temp->next != head)
         {
             temp = temp->next;
         }
         temp->next = newNode;
         newNode->next = head;
         head = newNode;
     }
     
     void deletebegin()
     {
         if(head == nullptr)
         {
             cout<<"List is Empty";
             return;
         }
         Node* temp = head;
         while(temp->next != head)
         {
             temp=temp->next;
         }
         Node* temp2 = head;
         temp->next = head->next;
         head = temp->next;
         delete temp2;
     }
     
     void deletelast()
     {
         if(head == nullptr)
         {
             cout<<"List is Empty";
             return;
         }
         Node* temp = head;
         while(temp->next->next != head)
         {
             temp = temp->next;
         }
         Node* temp2 = temp->next;
         temp->next = head;
         delete temp2;
     }
     
     void deletespecific(int pos)
     {
         if(head == nullptr)
         {
             cout<<"List is Empty";
             return;
         }
         if(pos == 1)
         {
             deletebegin();
             return;
         }
         Node* temp1 = head;
         for(int i=1; i<pos-1 && temp1->next != head; i++)
         {
             temp1 = temp1->next;
         }
         Node* temp2 = temp1->next;
         temp1->next = temp2->next;
         delete temp2;
     }
     
     void display()
     {
         Node* current = head;
         do
         {
            cout<<current->data << " -> ";
            current = current->next;
         }while(current != head);
         cout<<"nullptr" <<endl;
     }
};
int main()
{
    LinkedList l;
    l.insertbegin(20);
    l.insertbegin(40);
    l.insertbegin(60);
    l.display();
    
    l.insertbegin(80);
    l.display();
    
    l.deletebegin();
    l.display();
    
    l.deletelast();
    l.display();
    
    l.deletespecific(3);
    l.display();
    return 0;
}