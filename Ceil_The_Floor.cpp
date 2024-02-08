#include <bits/stdc++.h>
int findfloor(vector<int>&arr,int n,int x){
	int low=0;
	int high=n-1;
	int	mid=(low+high)/2;
	
	int floor=-1;
	while(low<=high){
		int curr=arr[mid];
		if(curr<=x){
			floor=curr;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
	return floor;
}

int findceil(vector<int>&arr,int n,int x){
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;

	int ceil=-1;
	while(low<=high){
		int curr=arr[mid];
		if(curr>=x){
			ceil=curr;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		mid=(low+high)/2;
	}
	return ceil;
}

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	
	int f=findfloor(arr, n, x);
	int c=findceil(arr, n, x);
	
	return make_pair(f,c);
}