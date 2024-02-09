int search(vector<int>& arr, int n, int k)
{
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;

    while(low<=high){
        int curr=arr[mid];
        if(curr==k){
            return mid;
        }
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        mid=(low+high)/2;
    }
    return -1;
}
