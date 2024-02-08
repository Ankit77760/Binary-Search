#include<bits/stdc++.h>
using namespace std;

//tc-O(log_2_N)
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


//Recursive Approach
int BinarySearchh(int arr,int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;

    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        BinarySearch(arr,mid+1,high,target);
    }
    else{
        BinarySearch(arr,low,mid-1,target);
    }

}

int main(){

    int arr[5]={1,2,3,4,5};
    cout<<BinarySearch(arr,3,5);
}