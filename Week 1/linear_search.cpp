
// Linear Search
// Time Complexity : O(n)

#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    bool f;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            cout << "Element Found " << i + 1 << endl; // i + 1: as this is a linear search so number of comparisons will be the position of the element
            f = true;
            break;
        }
    }
    if(!f)
        cout << "Element not Found" << endl;
}
