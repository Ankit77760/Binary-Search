#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int target,int n){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;

    while(low<=high){
        int curr=arr[mid];
        if(curr==target){
            return mid;
        }
        else if(curr>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    return -1;
}

int main(){

    int arr[5]={1,2,3,4,5};
    cout<<BinarySearch(arr,3,5);
}