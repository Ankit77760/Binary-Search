#include<bits/stdc++.h>
using namespace std;

//iterative approach tc-O(n) sc-O(1)
int lowerBoundd(vector<int> arr, int n, int x) {
	for(int i=0;i<n;i++){
		if(arr[i]>=x){
			return i;
		}
	}
	return x;
}

//tc-O(logn) sc-O(1)
int lowerBound(vector<int> arr, int n, int x) {
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;
	int ans=n;
	while(low<=high){
		int curr=arr[mid];
		if(curr>=x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		mid=(low+high)/2;
	}
	return ans;
}


int main(){ 
    vector<int>ans={1,2,3,4,5};
    cout<<lowerBound(ans,5,3);
    
}