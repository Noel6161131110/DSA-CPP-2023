#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void read(int a[10], int n)
{
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void print(int a[], int n)
{
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

void insertionSort(int a[10], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while ((a[j] < a[j - 1]) && j > 0)
        {
            swap(&a[j], &a[j - 1]);
            j--;
        }
    }
}

int main()
{
    int a[10], n;

    cout << "Enter size of the array: ";
    cin >> n;

    read(a, n);

    insertionSort(a , n);

    print(a , n);

    return 0;
}

