#include <bits/stdc++.h>
int floorSqrt(int n)
{
    return sqrt(n);
}

//tc-O(N)
int floorSqrt(int n)
{
    int ans=1;
    for(int i=0;i<n;i++){
        if(i*i<=n){
            ans=i;
        }
        else{
            break;
        }
    }
    return ans;
}

//binary search tc-O(logN) sc-O(1)
int floorSqrt(int n)
{
    int low=1;
    int high=n-1;
    int mid=(low+high)/2;

    int ans=1;
    while(low<=high){
        int curr=mid;
        if(curr*curr <= n){
            ans=mid;
            low=mid+1;
        }
        else if(curr*curr > n){
            high=mid-1;            
        }
        mid=(low+high)/2;
    }
    return ans;
}

int main(){
    cout<<floorSqrt(5);
}