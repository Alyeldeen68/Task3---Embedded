#include <stdio.h>
void insertionSort(int a[], int n) 
{
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = a[i];
		j = i - 1;

		while (j >= 0 && temp <= a[j])
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;
	}
}

int BinarySearch(int array[], int start_index, int end_index, int element, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1]) {
			insertionSort(array, size);

		}
		else
			while (start_index <= end_index) {

				int middle = start_index + (end_index - start_index) / 2;

				if (array[middle] == element)

					return middle;
				if (array[middle] < element)

					start_index = middle + 1;

				else
					end_index = middle - 1;
			}
	}
	return -1;
}



int main()
{

	int arr[] = { 65, 3, 4, 10, 40, 50 }; 
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 4;
	int result = BinarySearch(arr, 0, n - 1, x, n);

	if (result == -1) {
		printf("Element is not in your array");
	}
	else
	{
		printf(" INDEX OF YOUR ELEMENT IS %d", result);
	}
	return 0;
}