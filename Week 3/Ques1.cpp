#include<iostream>
using namespace std;
void vaishnaviSharma()
{
    return;
}
void insertionSort(int a[], int n)
{
    int comparisons = 0, shifts = 0;
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && key < a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
            comparisons++;
            shifts++;
        }
        a[j + 1] = key;
        shifts++;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\nComparisons = " << comparisons << endl;
    cout << "Shifts = " << shifts << endl;
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
      insertionSort(a, n);
  }
}
