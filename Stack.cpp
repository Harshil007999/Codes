#include<iostream>
using namespace std;
class Stack
{
    int x,stac[20],top;
    public:
     Stack()
     {
        top = -1;
     }
      void push(int n)
      {
        if(top>=x-1) 
        {
            cout<<"Stack is Overflow\n";
        }
        else
        {
          stac[++top]=n;
          cout<< "Pushed: " << n << endl;
        }
      }
      void pop()
      {
        if(top<0)
        {
            cout<<"Stack is Underflow\n";
        }
        else
        {
          cout<< "Popped Value: " << stac[top]<< endl;
          top--;
        }
      }
      void peek()
      {
         if(isempty())
         {
            cout<<"Stack is Empty\n";
         }
         else
         {
            for(int i=top; i>=0; i--)
            {
               cout<<stac[i]<<" ";
            }
         }
      }
      bool isempty()
      {
        return top==-1;
      }  
};
int main()
{
    Stack s;
    s.push(20);
    s.push(10);

    s.pop();
    cout<<"Popped from Stack\n";
    cout<<"Top element is: " << endl;
    s.peek();
    while(!s.isempty())
    {
      cout<<" ";
      s.peek();
      s.pop();
    }
    return 0;
}