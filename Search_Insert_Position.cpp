#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int m)
{
	int low=0;
	int high=arr.size()-1;
	int mid=(low+high)/2;
	int ans=arr.size();

	while(low<=high){
		int curr=arr[mid];
		if(curr>=m){
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

}