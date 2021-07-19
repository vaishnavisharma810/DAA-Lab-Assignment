#include<iostream>
#include<cmath>
using namespace std;
int jumpSearch(int *a, int n, int k)
{
    int jump = sqrt(n);
    int start = 0;
    while(a[jump] <= k && jump < n)
    {
        start = jump;
        jump += sqrt(n);
        if(jump > n - 1)
            jump = n;
    }
    for(int i = start; i < jump; i++)
    {
        if(a[i] == k)
            return i;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n;
        int *a = new int[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        cin >> k;
        int ans = jumpSearch(a, n, k);
        if(ans == -1)
            cout << "Element not found!!!" << endl;
        cout << "Element found at index " << ans << endl;
    }
}
