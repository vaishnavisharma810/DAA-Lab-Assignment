#include<iostream>
using namespace std;
void selectionSort(int a[], int n)
{
    int minm, pos, comparisons = 0, swaps = 0;
    for(int i = 0; i < n - 1; i++)
    {
        minm = a[i];
        pos = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < minm)
            {
                minm = a[j];
                pos = j;
            }
            comparisons++;
        }
        if(pos != i)
        {
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
            swaps++;
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\nComparisons = " << comparisons << endl;
    cout << "Swaps = " << swaps << endl;
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
      selectionSort(a, n);
  }
}

