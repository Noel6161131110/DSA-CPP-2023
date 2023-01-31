#include<iostream>
using namespace std;

int main()
{
    int a[10], n;

    cout<<"Enter size of the array: ";
    cin>>n;

    cout<<"Enter the elements: \n";
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for(int i = 1; i < n; i++)
    {
        int j = i;
        while((a[j] < a[j - 1]) && j > 0)
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }

    cout<<endl;
    
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}