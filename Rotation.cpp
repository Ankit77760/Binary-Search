#include <bits/stdc++.h>

//tc-O(logN)
int findKRotation(vector<int> &arr){
    int low=0;
    int high=arr.size()-1;
    int mid=(low+high)/2;

    int ans=INT_MAX;
    int index=-1;
    while(low<=high){
        int curr=arr[mid];
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            break;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans=arr[low];
                index=low;
            }
            low=mid+1;
        }

        else{
            high=mid-1;
            if(arr[mid]<ans){
                ans=arr[mid];
                index=mid;
            }
        }

        mid=(low+high)/2;
    }
    return index;

}