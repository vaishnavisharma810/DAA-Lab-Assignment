//Merge Sort
#include<iostream>
using namespace std;

int c = 0;
int inv = 0;
void mergeSort(int a[], int n)
{
    if(n == 0 || n == 1)
        return;
    int mid = n / 2;
    mergeSort(a, n - mid);
    mergeSort(a + mid, n - mid);
    int n1 = mid;
    int n2 = n - mid;
    int Lpart[n1], Rpart[n2];
    for(int i = 0; i < n1; i++)
        Lpart[i] = a[i];
    for(int j = 0; j < n2; j++)
        Rpart[j] = a[mid + j];
    int k = 0, i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(Lpart[i] <= Rpart[j])
        {
            a[k] = Lpart[i];
            k++; i++;
            c++;
        }
        else{
            a[k] = Rpart[j];
            j++; k++;
            c++;
        }
    }
    for(; i < n1; i++)
    {
        a[k] = Lpart[i];
        k++;
    }
    for(; j < n2; j++)
    {
        a[k] = Rpart[j];
        k++;
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
        mergeSort(a, n);
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        cout << "Comparisons = " << c << endl;
        //cout << "Inversions = " << inv << endl;
    }
}
