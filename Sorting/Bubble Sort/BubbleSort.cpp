#include <iostream>
using namespace std;

int main()
{
    int a[10], n;

    cout << "Enter size of the array: ";
    cin >> n;

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}