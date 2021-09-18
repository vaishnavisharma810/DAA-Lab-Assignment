#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n1, n2;
        cin >> n1;
        int a[n1];
        for(int i = 0; i < n1; i++)
            cin >> a[i];
        cin >> n2;
        int b[n2];
        for(int i = 0; i < n2; i++)
            cin >> b[i];
        int i = 0, j = 0;
        while(i < n1 && j < n2)
        {
            if(a[i] == b[j])
            {
                cout << a[i] << " " <<;
                i++; j++;
            }
            else if(a[i] < b[j])
                i++;
            else if(b[j] < a[i])
                j++;
        }
        cout << endl;
    }
}
