//QuickSort
#include<iostream>
using namespace std;

int c = 0;
int swaps = 0;
int partitionFunc(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;
    while(i < j)
    {
        do{
            i++;
            c++;
        }while(a[i] <= pivot);
        c--;
        do{
            j--;
            c++;
        }while(a[j] > pivot);
        c--;
        if(i < j){
            swap(a[i], a[j]);
            swaps++;
        }
    }
    swap(a[l], a[j]);
    swaps++;
    return j;
}

void quickSort(int a[], int l, int h)
{
    int j;
    if(l < h)
    {
        j = partitionFunc(a, l, h);
        quickSort(a, l, j);
        quickSort(a, j + 1, h);
    }
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
        quickSort(a, 0, n);
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        cout << "comparisons = " << c << endl;
        cout << "Swaps = " << swaps << endl;
    }
}
