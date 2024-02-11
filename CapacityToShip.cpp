int sum(vector<int>&vt){
    int n=vt.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=vt[i];
    }
    return sum;
}

int daysReqq(vector<int>&v,int cap){
    int day=1;
    int load=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(load+v[i]>cap){
            day=day+1;
            load=v[i];
        }
        else{
            load+=v[i];
        }
    }
    return day;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    int maxi = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(), 0);

    int n=weights.size();

    for(int i=maxi;i<=sum;i++){
        if((daysReqq(weights,i))<=d){
            return i;
        }
    }
    return -1;
}

int leastWeightCapacityy(vector<int>&weights,int d){
     int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while(low<=high){
        int mid=(low+high)/2;
        if((daysReqq(weights,mid))<=d){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}   



int main(){

}