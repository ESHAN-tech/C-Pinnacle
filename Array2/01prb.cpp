#include <iostream>
using namespace std;

//Q1) Rev the array and then find min and max from it and code must be dynami

void revarr(int* arr , int size){
    int s=0;
    int e = size -1 ;
    while (s<=e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}
void print(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int revarr2(int* arr , int size){
    int s=0;
    int e = size -1 ;
    while (s<=e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
    // return {arr[size] , arr[0]};
    //Error :-return multiple values using {}is not valid in C++
    //solution:-Need to use a std::pair, std::vector
}
// writing the function for finding max and min 
int getmin(int arr[] , int n ){
    int min = 9999;
    for(int i=0 ; i<n ; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int getmax(int arr[] , int n ){
    int max = -9999;
    for(int i=0 ; i<n ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    revarr(arr,5);
    print(arr,5);
    cout<<endl;
    cout<<"now max is = "<<arr[0];
    cout<<endl;
    cout<<"now min is = "<<arr[4];
    cout<<endl;
    cout<<"max = "<<getmax(arr,5);
    cout<<endl;
    cout<<"max = "<<getmin(arr,5);
    cout<<endl;

    return 0;
}
