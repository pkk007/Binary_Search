#include<iostream>
using namespace std;
//ITERATIVE BINARY SEARCH

int binarySearch(int arr[], int x, int length){
    int l = 0, h = length -1;

    //loop i.e iterative way
    while(l <= h){
        int mid = l + (h-l)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            l = mid +1;
        else
            h  = mid -1;
    }
    //IF WE HAVEN'T RETRUN ANYTHING MEANS ELEMENT IS NOT FOUND THEN
    return -1;
}

int main(){
    int x;
    cout<<"enter the number you want to search  : ";
    cin>>x;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr,x,length);
    
    if(result != -1)
        cout<<"found the element at index "<<result;
    else
        cout<<"element is not found";
}