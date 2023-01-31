#include <iostream>
using namespace std;

void read(int a[10], int n)
{
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int a[10], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void print(int a[10], int n)
{
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int a[10], n;

    cout << "Enter size of the array: ";
    cin >> n;

    read(a, n);

    bubbleSort(a, n);

    print(a, n);

    return 0;
}
