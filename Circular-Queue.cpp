#include <iostream>
using namespace std;

class q
{
    public:
      int n;
      int Queue[20];
      int item;
      int F=-1;
      int R=-1;
       bool isFull()
       {
           return (R==n-1);
       }
       bool isEmpty()
       {
           return (F==-1);
       }
       void getdata()
       {
           cout<<"Enter the Size: ";
           cin>>n;
       }
       void enqueue()
       {
           if(isFull())
           {
               cout<<"Queue is Full"<<endl;
           }
           if(isEmpty())
           {
               F=0;
           }
           R=(R+1)%n;
           cout<<"Enter the item: "<<endl;
           cin>>item;
           Queue[R]=item;
           cout<<"Enqueued: "<<item<<endl;
       }
       void dequeue()
       {
           if(isEmpty())
           {
               cout<<"Queue is Empty";
           }
             item=Queue[F];
             F=(F+1)%n;
             cout<<"Dequeued: "<<item<<endl;
           if(F==R)
           {
               F=-1;
               R=-1;
           }
           else
           {
               F=F+1;
           }
       }
};
int main()
{
    q Q;
    Q.getdata();
    Q.enqueue();
    Q.dequeue();
    return 0;
}