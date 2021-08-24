//Program using priority queues
#include<iostream>
#include<queue>
#include<climits>
using namespace std;

int kthSmallest(int a[], int n, int k)
{
    priority_queue<int> maxh;
    for(int i = 0; i < n; i++)
    {
        maxh.push(a[i]);
        if(maxh.size() > k)
            maxh.pop();
    }
    if(maxh.empty())
        return INT_MIN;
    return maxh.top();
}

int kthLargest(int a[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minh;
    for(int i = 0; i < n; i++)
    {
        minh.push(a[i]);
        if(minh.size() > k)
            minh.pop();
    }
    if(!minh.empty())
        return minh.top();
    return INT_MAX;
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
            cin >> a[i];
        int k;
        cin >> k;
        int kLargest = kthLargest(a, n , k);
        if(kLargest == INT_MAX)
            cout << "Not Present" << endl;
        else
            cout << k <<"th Largest: " << kLargest << endl;
        int kSmallest = kthSmallest(a, n, k);
        if(kSmallest == INT_MIN)
            cout << "Not Present" << endl;
        else
            cout << k << "th smallest: " << kSmallest << endl;
    }
}
