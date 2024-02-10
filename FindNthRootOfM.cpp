#include <bits/stdc++.h>
using namespace std;

// tc-O(M* log_2_n) sc-O(1)
int NthRoot(int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        if (pow(i, n) == m)
        {
            return i;
        }
        if (pow(i, n) > m)
        {
            break;
        }
    }
    return -1;
}

// binary search tc-O(logn) sc-O(1)
int NthRoot(int n, int m)
{
    int low = 0;
    int high = m;
    long long mid = (low + high) / 2;
    while (low <= high)
    {
        long long curr = mid;
        if (pow(mid, n) == m)
        {
            return mid;
        }
        else if (pow(mid, n) > m)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return -1;
}

int main()
{
}