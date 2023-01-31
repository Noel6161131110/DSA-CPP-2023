#include <iostream>
using namespace std;

void swap(int *a, int *b)
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

void quickSort(int a[], int first, int last)
{
    int key, i, j;

    if (first < last)
    {
        key = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (a[i] <= a[key] && i < last)
                i++;
            while (a[j] > a[key])
                j--;

            if (i < j)
            {
                swap(&a[i], &a[j]);
            }
        }
        swap(&a[key], &a[j]);
        quickSort(a, first, j - 1);
        quickSort(a, j + 1, last);
    }
}

int main()
{
    int a[10], n;

    cout << "Enter size of the array: ";
    cin >> n;

    read(a, n);

    quickSort(a, 0, n - 1);

    print(a, n);
    return 0;
}
