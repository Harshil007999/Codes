#include<iostream>
using namespace std;

int main()
{
    int marks[] = {20, 30, -15, -40};
    int n = 4;
    int index,index1;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        smallest = min(marks[i], smallest);
        if(smallest == marks[i])
        {
            index = i;
        }
        largest = max(marks[i], largest);
        if(largest == marks[i])
        {
            index1 = i;
        }
    }
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;
    cout<<"Index of smallest: "<<index<<endl;
    cout<<"Index of largest: "<<index1<<endl;
    return 0;
}