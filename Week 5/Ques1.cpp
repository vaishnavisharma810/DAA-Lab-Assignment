#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++)
            mp[a[i]]++;
        int maxm = 1;
        char max_char;
        for(int i = 0; i < n; i++)
        {
            if(mp[a[i]] > maxm)
            {
                maxm = mp[a[i]];
                max_char = a[i];
            }
        }
        if(maxm > 1)
            cout << max_char << " - " << maxm << endl;
        else
            cout << "No Duplicates Present" << endl;
    }
}
