#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{

    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] <= pivot)
        {

            i++;

            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);

        quickSort(arr, pivotIndex + 1, high);
    }
}
int main()
{
    int n = 5;
    int arr[n] = {4, 2, 6, 38, 1};

    quickSort(arr, 0, n-1);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}