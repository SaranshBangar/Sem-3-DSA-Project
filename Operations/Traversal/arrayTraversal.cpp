// Traversing an array is very simple, all you have to do is iterate through the array and print the elements.

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
    for (int i=0;i<num;i++) // Iterating through the array
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"The elements of array are : "; // Printing the elements of array
    for (int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The array is traversed successfully"<<endl; 

    return 0;
}