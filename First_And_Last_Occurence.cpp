int firstoccurence(vector<int>&arr,int n,int k){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;

    int ans=-1;
    while(low<=high){
        int curr=arr[mid];
        if(curr==k){
            ans=mid;
            high=mid-1;
        }
        else if(curr>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    return ans;
}

int lastoccurence(vector<int>&arr,int n,int k){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;

    int an=-1;
    while(low<=high){
        int curr=arr[mid];
        if(curr==k){
            an=mid;
            low=mid+1;
        }
        else if(curr<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return an;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int f=firstoccurence(arr, n, k);
    int l=lastoccurence(arr, n, k);

    return make_pair(f,l);
}
