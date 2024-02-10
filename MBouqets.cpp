bool isPossible(vector<int> &v, int day, int m, int k)
{
    int n = v.size();
    int cnt = 0;
    int noOfF = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= day)
        {
            cnt++;
        }
        else
        {
            noOfF += (cnt / k);
            cnt = 0;
        }
    }
    noOfF += (cnt / k);
    return noOfF >= m;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    long long val = m * 1ll * k * 1ll;
    if (val > bloomDay.size())
        return -1;

    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        maxi = max(bloomDay[i], maxi);
        mini = min(bloomDay[i], mini);
    }

    int low = mini;
    int high = maxi;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int curr = mid;
        if (isPossible(bloomDay, curr, m, k))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}