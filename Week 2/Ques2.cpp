#include<iostream>
using namespace std;
int solve(int a[], int n, int lb, int k)
{
    int ub = n - 1;
    while(lb <= ub)
    {
        int mid = (ub + lb) / 2;
        if(a[mid] == k)
            return mid;
        else if(a[mid] > k)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int f = 0;
        int *a  = new int[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int k = a[i] + a[j];
                int ans = solve(a, n, j + 1, k);
                if(ans != 0)
                {
                    cout << i + 1 << " " << j + 1 << " " << ans + 1 << endl;
                    f = 1;
                    break;
                }
            }
            if(f)
                break;
        }
        if(!f)
            {
                cout << "No Sequence Found" << endl;
                break;
            }
    }
}
