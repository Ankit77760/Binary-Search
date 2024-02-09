#include<bits/stdc++.h>
using namespace std;

//tc-O(logN)
int findMin(vector<int>& arr)
{
	int low=0;
	int high=arr.size()-1;
	int mid=(low+high)/2;

	int ans=INT_MAX;
	while(low<=high){
		int curr=arr[mid];
		if(arr[low]<=arr[mid]){
			ans=min(ans,arr[low]);
			low=mid+1;
		}
		else {
			high=mid-1;
			ans=min(ans,arr[mid]);
		}
		mid=(low+high)/2;
	}
	return ans;
}

int main(){

}