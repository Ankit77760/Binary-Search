#include<bits/stdc++.h>
using namespace std;

//tc-O(n) sc-O(1)
int findPeakElement(vector<int> &arr) {
    int n=arr.size();
    if(n==1){
        return 0;
    }
    for(int i=0;i<n;i++){
        if((i==0 || arr[i-1]<arr[i]) && ((i==n-1) ||arr[i]>arr[i+1])){
            return i;
        }
    }    
}

int findPeakElement(vector<int> &arr) {
    int n=arr.size();

    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;

    int low=1;
    int high=n-2;
    int mid=(low+high)/2;

    while(low<=high){
        int curr=arr[mid];
        if (curr > arr[mid-1] && curr > arr[mid+1]){
            return mid;
        }
        else if(curr > arr[mid-1]){
            low=mid+1;
        }
        else { 
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return -1;
    
}


int main(){

}