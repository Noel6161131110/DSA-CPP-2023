#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
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
        if (min != i)
        {
            Swap(&array[i], &array[min]); // addresses of the the elements to be swapped are passed
        } 
    }
}

int main()
{
    int array[] = {1, 4, 5, 3, 22, 6}; // array of size 6
    Selectionsort(array, 6);
    Printarray(array, 6);

    return 0;
}