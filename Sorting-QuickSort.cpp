#include<iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;

    while(i < j) 
    {
       do
       {
          i++;
       } while (arr[i] <= pivot);
       do
       {
          j--;
       } while (arr[j] > pivot);
       if(i < j)
       {
          swap(arr[i], arr[j]);
       }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quickSort(int arr[], int l, int h)
{
    if(l < h)
    {
        int j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j+1, h);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}
int main()
{
    int arr[] = {6, 5, 8, 9, 3, 10, 15, 12, 16};
    int n = 9;
    
    quickSort(arr, 0, n);
    printArray(arr, n);
    return 0;
}