/*
Problem: Quick Sort
Platform: Custom
Difficulty: Easy
Topic: Arrays, Counting
Link: N/A
Status: Solved
*/

#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{

    int pivot = arr[low];

    int i = low;
    int j = high;

    int iteration = 0;

    while (i < j)
    { /// Sudhu i ar j is being compared
        iteration++;
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        { /// arr er value is being compared.
            j--;
        }
        cout << " Iteration no" << iteration << " i :" << i << " j:" << j << endl;
        if (i < j)
        { /// This last check is added for the value of i and j could dissatisfy this condition at the last iteration of the outer loop.
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[j], arr[low]); /// Because the value of j is negetively exceeded and became less then i after the execution of the last loop.

    return j;
}

void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {
        int q = partition(arr, low, high);
        quickSort(arr, low, q - 1);
        quickSort(arr, q + 1, high);
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    cout << "put the array values: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    /// After sorting;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
