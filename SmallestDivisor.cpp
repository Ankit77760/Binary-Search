#include<bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int>nums,int threshold){
    int n=nums.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
    }

    for(int j=1;j<maxi;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)(nums[i])/(double)(j));
        }
        if(sum<=threshold){
            return j;
        }
    }
    return -1;
}

int sumD(vector<int>&nums,int div){
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)(nums[i])/(double)(div));
    }
    return sum;
}

//tc-O(LogN) binary Search
int smallestDivisorr(vector<int>&nums,int threshold){
    int n=nums.size();
    
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(nums[i],maxi);
    }
    int low=1;
    int high=maxi;

    while(low<=high){
        int mid=(low+high)/2;
        if(sumD(nums,mid)<=threshold){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    vector<int>vt={1,2,3,4,5};
    cout<<smallestDivisorr(vt,8);
}