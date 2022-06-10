#include <iostream>

using namespace std;

int sumOfArray(int arr[], int size){
    
    int sum = 0;
    
    // adding the elements of the array
    for(int i=0; i<size; i++){
        
        sum += arr[i];
    }
    
    return sum;
}

int main()
{
    // taking input : the size of the array
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    
    // dec    cout<<"The sum of the array elements is: "<< sumOfArray(arr, n)<<endl;

    return 0;
}laring array
    int arr[100];
    
    // taking input : the elements of the array
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
