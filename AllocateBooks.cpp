int countsutud(vector<int>&arr,int pages){
    int n=arr.size();
    long long student=1;
    long long pagesStudent = 0;
    for(int i=0;i<n;i++){
        if(pagesStudent+arr[i]<=pages){
            pagesStudent+=arr[i];
        }
        else{
            student++;
            pagesStudent=arr[i];
        }
    }
    return student;

}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;

    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(arr[i],mini);
        maxi=max(arr[i],maxi);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    for(int i=maxi;i<=sum;i++){
        if(countsutud(arr,i)==m){
            return i;
        }
    }
    return maxi;
}

//binary search tc-O(logN)
int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;

    int  maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int low=maxi;
    int high=sum;

    while(low<=high){
        int mid=(low+high)/2;
        if(countsutud(arr, mid)<=m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
 
}