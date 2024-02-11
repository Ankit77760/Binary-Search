#include<bits/stdc++.h>
using namespace std;

int missingElement(vector<int>&arr,int n,int k){
    for(int i=;i<n;i++){
        if(arr[i]<=k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}

int missingK(vector < int > vec, int n, int k) {
    int low=0;
    int high=n-1;
    int missing;
    while(low<=high){
        int mid=(low+high)/2;   
        missing=vec[mid]-(mid+1);
        if(missing<k) low=mid+1;
        else{
            high=mid-1;
        }
    }
    return vec[high]+(k-(vec[high]-high-1));
}

int main(){
    vector<int>vt={2,4,5,7};
    cout<<missingElement(vt,4,3);
}