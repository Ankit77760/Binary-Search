int firstoccurence(vector<int>&arr,int n,int x){
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;

	int first=-1;
	while(low<=high){
		int curr=arr[mid];
		if(curr==x){
			first=mid;
			high=mid-1;
		}
		else if(curr>x){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		mid=(low+high)/2;
	}
	return first;
}

int lastoccurence(vector<int>&arr,int n,int x){
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;

	int first=-1;
	while(low<=high){
		int curr=arr[mid];
		if(curr==x){
			first=mid;
			low=mid+1;
		}
		else if(curr>x){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		mid=(low+high)/2;
	}
	return first;
}

int count(vector<int> &arr, int n, int x) {
        int first = firstoccurence(arr, n, x);
        int last = lastoccurence(arr, n, x);
        int occurence = (last - first)+1;
		if(first==-1) return 0;
        return occurence;
}
