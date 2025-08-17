#include <iostream>
using namespace std;

class set
{
    public:
      int arr[20];
      int n;
      int i,p,j;
       void input()
       {
           cout<<"Enter the Size: ";
           cin>>n;
           cout<<"Enter the Elements: ";
           for(i=1; i<=n; i++)
           {
               cout<<"\na["<<i<<"]=";
               cin>>arr[i];
           }
       }
       void output()
       {
           cout<<"Enter the Position: ";
           cin>>p;
           cout<<"Enter the Element to insert: ";
           cin>>j;
           n++;
           for(i=n;i>p;i--)
           {
               arr[i]=arr[i-1];
           }
           arr[p]=j;
           for(i=1; i<=n; i++)
           {
              cout<<"\na["<<i<<"]="<<arr[i];
           }
       }
};
int main()
{
    set s;
    s.input();
    s.output();
    return 0;
}