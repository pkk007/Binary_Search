#include<iostream>
using namespace std;
//RECURSUVE APPROACH

int binarySearch(int arr[], int x, int low , int high){

    if(low <= high){
        int mid =  low + (high - low)/2;

        if(arr[mid] == x)
            return mid;
        if(arr[mid] < x)
            return binarySearch(arr,x,mid+1,high);
        else
            return binarySearch(arr,x,low,mid-1);
    }

    //IF WE HAVEN'T RETRUN ANYTHING MEANS ELEMENT IS NOT FOUND THEN
    return -1;
}

int main(){
    int x;
    cout<<"enter the number you want to search  : ";
    cin>>x;
    int arr[] = {2,4,5,10,11,25,50,60,75,99};
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr,x,0,length-1);
    
    if(result != -1)
        cout<<"found the element at index "<<result;
    else
        cout<<"element is not found";

}