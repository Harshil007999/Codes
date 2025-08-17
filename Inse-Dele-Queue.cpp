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
        void getdata()
        {
            cout<<"Enter the Size: "<<endl;
            cin>>n;
        }
        void ENqueue()
        {
            if(R==n-1)
            {
                cout<<"Queue is Overflow";
            }
            else
            {
              if(F==-1)
              {
                F=0;
              }
                R=R+1;
                cout<<"Enter item: ";
                cin>>item;
                Queue[R]=item;
                cout<<"Q: "<<Queue[R]<<endl;
            }    
        }
        void DEqueue()
        {
            if(F==-1 || F==R+1)
            {
                cout<<"Queue is Empty";
            }
            else {
                item=Queue[F];
                cout<<"Deleted value is "<<Queue[F];
                F=F+1;
                
            }
        
        }
        
};
int main()
{
    q Q;
    Q.getdata();
    Q.ENqueue();
    Q.DEqueue();
    return 0;
}