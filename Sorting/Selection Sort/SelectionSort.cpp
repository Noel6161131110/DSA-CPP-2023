#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Selectionsort(int array[], int n)
{
    int k, min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (k = i + 1; k < n; k++)
        {
            if (array[k] < array[min])
            {
                min = k;
            }
        }
        Swap(&array[i], &array[min]);
    }
}

int main()
{
    int array[] = {1, 4, 5, 3, 22, 6};
    Selectionsort(array, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}