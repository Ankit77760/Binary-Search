#include<bits/stdc++.h>
using namespace std;

//tc-O(logn) sc-O(1)
int upperBound(vector<int> &arr, int x, int n){
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;
	int ans=n;
	while(low<=high){
		int curr=arr[mid];
		if(curr>x){
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
    vector<int>vt={1,2,3,4,5};
    upperBound(vt,3,5);
}