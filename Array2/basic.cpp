#include <iostream>
#include <array>
using namespace std;
//making a function of array
void print(int *arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    // making a array in the 
    int arr[5]={1,2,3,4,5};
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    print(arr ,5);

    cout<<endl;


    //trying dynamic allocation._._.1)take input array size , 2)int *arr = new int[size] 
    int n;
    cout <<"Enter the size of the array = ";
    cin>>n;

    //creating the pointer of array
    int *brr = new int[n];

    for(int j= 0  ; j < n ; j++){
        cout<<"Enter the element at index  "<<j<<"=";
        cin>>brr[j];
    }
    cout<<endl;

    //printing the dynamic array 

    for(int k=0 ; k < n ;  k++){
        cout <<brr[k]<<" ";
    }
    cout<<endl;

    return 0;
}
