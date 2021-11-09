#include<iostream>
using namespace std;

bool subsetSum(int a[], int n, int sum)
{
    //cout << "check1 ";
    bool t[n + 1][sum + 1];
    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j < sum + 1; j++)
        {
            if(i == 0)
                t[i][j] = false;
            if(j == 0)
                t[i][j] = true;
        }
    }
    //cout << "check2 ";
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < sum + 1; j++)
        {
            if(a[i - 1] <= j)
                t[i][j] = t[i - 1][j - a[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[n][sum];
}

bool checkSubsets(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    //cout << sum;
    if(sum % 2 != 0)
        return false;
    else
        return subsetSum(a, n, sum / 2);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(checkSubsets(a, n) == true)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
