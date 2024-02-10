#include <bits/stdc+.h>
int maxii(vector<int> &v)
{
    int maxi = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        maxi = max(v[i], maxi);
    }
    return maxi;
}

int reqTimee(vector<int> &v, int hourly)
{
    int totalH = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> v, int h)
{
    int maxi = maxii(v);
    for (int i = 1; i <= maxi; i++)
    {
        int reqTime = reqTimee(v, i);
        if (reqTime <= h)
        {
            return i;
        }
    }
    return maxi;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    long long low = 1;
    long long high = maxii(piles);
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long totalH = requireH(piles, mid);
        if (totalH <= h)
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