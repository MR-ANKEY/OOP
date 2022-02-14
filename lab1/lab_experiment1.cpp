//Name:- Ankit Prajapati
//Roll No:- 2244
//Batch:- B2
//Course Co-ordinator:- S.A. Wakure
//Date:- 14/02/2022

#include<iostream>
using namespace std;

// Function Declarations
void Display(float *, int);
void Swap(float &, float &);
void Bubble_Sort(float *, int);

// Main Function
int main()
{
    int n; // Number of elements in the array
    float a[n]; // Array of elements
    cout<<"Enter the Number of elements: "<<endl;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout << "Array before sorting: ";
    Display(a, n); // Function Call before sorting
    Bubble_Sort(a, n); // Function Call
    cout << "Array After Sorting: ";
    Display(a, n); // Function call After Sorting 
}


// Swap Method Defination
void Swap(float &x, float &y)
{
    float t;
    t = x;
    x = y;
    y = t;
}

// Display Method Defination
void Display(float *arr, int size)
{
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
    cout << endl;
}

// Bubble_Sort Method Definition
void Bubble_Sort(float *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                Swap(arr[j], arr[j+1]);
            }
        }
    }
}