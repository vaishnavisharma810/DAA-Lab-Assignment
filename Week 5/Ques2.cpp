#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<int>> ans;

void twoSum(int a[], int n, int target)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        if(mp.find(target - a[i]) != mp.end())
        {
            vector<int> res;
            res.push_back(target - a[i]);
            res.push_back(a[i]);
            ans.push_back(res);
        }
        mp[a[i]] = i;
    }
    cout << "In func " << ans.size() << endl;
    //return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int key;
        cin >> key;
        twoSum(a, n, key);
        if(ans.size() == 0)
            cout << "No such pair exist" << endl;
        else
        {
            for(int i = 0; i < ans.size(); i++)
                cout << ans[i][0] << "," << ans[i][1] << endl;
        }
    }
}
