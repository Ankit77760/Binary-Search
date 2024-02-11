#include <bits/stdc++.h>
using namespace std;

bool placeACow(vector<int>&arr,int distance,int cows){
    int n=arr.size();
    int contcow=1;
    int last=arr[0];

    for(int i=1;i<n;i++){
        if((arr[i]-last)>=distance){
            contcow++;
            last=arr[i];
        } 
        if(contcow>=cows){
            return true;
        }
    }
    return false;

}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());

    int limit=stalls[n-1]-stalls[0];

    for(int i=1;i<=limit;i++){
        if(placeACow(stalls,i,k)==false){
            return (i-1);
        }
    }
    return limit;

}

//binary search tc-O(logN)*N sc-O(1)
int aggressiveCows(vector<int> &stalls, int k)
{
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=0;
    int high=stalls[n-1]-stalls[0];

    while(low<=high){
        int mid=(low+high)/2;
        if(placeACow(stalls,mid,k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}