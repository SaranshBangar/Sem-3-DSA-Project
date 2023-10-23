// Searching an element in an array is very easy, we mainly use two approaches for this, linear search [O(N)] or binary search [O(logN)]

#include <iostream>
using namespace std;

int linearSearch(int arr[],int num,int target) // Function to search an element in an array using linear search
{
    for (int i=0;i<num;i++)
    {
        if (arr[i]==target)
        {
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}

int binarySearch(int arr[],int num,int target) // Function to search an element in an array using binary search
{
    int low=0;
    int high=num-1;

    while (low<=high) // Loop to keep searching for the element
    {
        int mid=(low+high)/2;

        if (arr[mid]==target)
        {
            cout<<"Element found at index "<<mid<<endl;
            return 0;
        }
        else if (arr[mid]<target)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<"Element not found"<<endl;
    return 0;
}

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

    int target; // Element to be searched
    cout<<"Enter the element to be searched : ";
    cin>>target;

    int choice; // Choice of search
    cout<<"Choose the type of search : "<<endl;
    cout<<"1. Linear Search"<<endl;
    cout<<"2. Binary Search"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    if (choice==1) // Calling the respective function
    {
        linearSearch(arr,num,target);
    }
    else if (choice==2) // Calling the respective function
    {
        binarySearch(arr,num,target);
    }
    else // Invalid choice
    {
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}