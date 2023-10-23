// You cannnot reduce the size of an array once it is declared.
// But you can delete an element from an array by shifting all the elements after it to the left by one position.

#include <iostream>
using namespace std;

int main()
{
    int num; // Size of array
    cout<<"Enter the size of array : ";
    cin>>num;
    cout<<endl;
    int arr[num];

    cout<<"Enter the elements of array -> "<<endl; // Inputting the elements of array
    for (int i=0;i<num;i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }

    cout<<endl;

    int del; // Index of element to be deleted
    cout<<"Enter the index of element to be deleted : ";
    cin>>del;

    if (del>num || del<=0) // Checking if the index is valid
    {
        cout<<"Invalid index"<<endl;
        return 0;
    }

    for (int i=del;i<num;i++) // Shifting all the elements after the element to be deleted to the left by one position
    {
        arr[i]=arr[i+1];
    }

    arr[num-1]=0; // Assigning 0 to the last element of array

    cout<<endl;

    cout<<"The elements of array are : "; // Printing the elements of array
    for (int i=0;i<num-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}