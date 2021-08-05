#include<iostream>
#include<algorithm>
using namespace std;
int solve(int a[], int n, int k)
{
    int c = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int l = i + 1;
        int h = n - 1;
        while(l <= h)
        {
            int mid = (l + h) / 2;
            if(a[mid] == a[i] + k)
            {
                c++;
                break;
            }
            else if(a[i] + k > a[mid])
                l = mid + 1;
            else
                h = mid - 1;
        }
    }
    return c;
}
int main()
{
    int t, n;
    cin >>t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int k;
        cin >> k;
        sort(a, a + n);
        cout << solve(a, n, k);
    }
}
