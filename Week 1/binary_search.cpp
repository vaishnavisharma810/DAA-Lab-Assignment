
/*
Binary Search
Time Complexity : o(log n)
*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;  // Number of test cases
    while(t--)
    {
        int n, target;
        bool f = false;
        cin >> n;   //Number of elements in array, Array should be sorted
        int *a = new int[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        cin >> target ; //Element to be searched
        int lb = 0, ub = n - 1;
        while(lb <= ub)
        {
            int mid = (lb + ub) / 2;
            if(a[mid] == target)
            {
                cout << "Element Found at index " << mid << endl;
                f = true;
                break;
            }
            else if(a[mid] > target)
                ub = mid - 1;
            else
                lb = mid + 1;
        }
        if(!f)
            cout << "Element not found!!!" << endl;
        return 0;
    }
}
