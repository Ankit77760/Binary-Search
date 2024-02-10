#include<bits/stdc++.h>
using namespace std;

//tc-O(N) sc-O(1)
int single(vector<int>&arr,int n){
    if(n==1){
        return arr[0];
    }

    for(int i=0;i<n;i=i+2){
        if(arr[i]==arr[i+1]){

        }
        else{
            return arr[i];
        }
    }
    return -1;
}

//tc-O(logn) sc-O(1)
int singleNonDuplicate(vector<int>& arr)
{
	int n=arr.size();

	if(arr.size()==1) return arr[0];
	if(arr[0]!=arr[1]) return arr[0];
	if(arr[n-1]!=arr[n-2]) return arr[n-1];

	int low=1;
	int high=arr.size()-2;
	int mid=(low+high)/2;

	while(low<=high){
		int curr=arr[mid];
		if(curr!=arr[mid+1] && curr!=arr[mid-1]) {
			return arr[mid];
		}
		else if((curr==arr[mid-1] && mid%2==1)|| (mid%2==0 && arr[mid]==arr[mid+1])){
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