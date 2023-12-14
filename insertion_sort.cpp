#include <iostream>
using namespace std;

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			swap(arr[j] , arr[j+1]);
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int N;
    cout << "Enter the number of elements in the array: ";
    cin >> N;

    int arr[N];
    cout << "Enter " << N << " elements:\n";
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    insertionSort(arr, N);

    cout << "Sorted array: ";
    printArray(arr, N);

	return 0;
}


