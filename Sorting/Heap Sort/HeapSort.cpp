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
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}

void print(int a[], int n)
{
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
}

void heapify(int i, int s, int a[])
{
    int lc = 2 * i;
    int rc = (2 * i) + 1;
    int lar = i;
    if (lc <= s && a[lc] > a[lar])
    {
        lar = lc;
    }
    if (rc <= s && a[rc] > a[lar])
    {
        lar = rc;
    }
    if (lar != i)
    {
        swap(&a[lar], &a[i]);
        heapify(lar, s, a);
    }
}

void Buildheap(int a[], int s)
{
    for (int i = s / 2; i >= 1; i--)
    {
        heapify(i, s, a);
    }
}

void Heapsort(int a[], int s)
{
    Buildheap(a, s);
    for (int i = s; i > 1; i--)
    {
        swap(&a[i], &a[1]);
        heapify(1, i - 1, a);
    }
}

int main()
{
    int a[10], n;

    cout << "Enter size of the array: ";
    cin >> n;

    read(a, n);

    Heapsort(a, n);

    print(a, n);
    return 0;
}