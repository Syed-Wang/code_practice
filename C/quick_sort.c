#include <stdio.h>

void QuickSort(int* arr, int left, int right)
{
    if (left >= right) {
        return;
    }
    int i = left, j = right, key = arr[left];
    while (i < j) {
        while (i < j && key <= arr[j]) {
            j--;
        }
        arr[i] = arr[j];
        while (i < j && key >= arr[i]) {
            i++;
        }
        arr[j] = arr[i];
    }
	arr[i] = key;
    QuickSort(arr, left, i - 1);
    QuickSort(arr, i + 1, right);
}

int main(int argc, const char* argv[])
{
    int arr[] = { 6, 8, 4, 2, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, size - 1);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
