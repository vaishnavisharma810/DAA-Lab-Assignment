#include<iostream>
using namespace std;
int solve(int a[], int lb, int ub, int key, int OccurenceDir)
{
    int mid, ans = -1;    //Initially answer is not found or -1
    while(lb <= ub)
    {
        mid = (lb + ub) / 2;
        if(a[mid] < key)
            lb = mid + 1;
        else if(a[mid] > key)
            ub = mid - 1;
        else
        {
            ans = mid;
            if(OccurenceDir)
                ub = mid -1;
            else
                lb = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];    //Sorted
        int key;
        cin >> key;
        int first = solve(a, 0, n - 1, key, 1);   //Left direction
        int last = solve(a, 0, n - 1, key, 0);    //Right direction
        if(first != -1 || last != -1)
            cout << key << " - " << last - first + 1 << endl;
        else
            cout << "Key not present" << endl;
    }
    return 0;
}
