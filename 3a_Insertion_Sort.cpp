#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {

        int key = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = key;
    }
}
int main()
{
    int n = 5;
    int arr[n] = {4, 2, 6, 38, 1};

    insertionSort(arr, n);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}