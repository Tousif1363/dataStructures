#include <iostream>

using namespace std;

// Running time: O(n*d)
// Auxillary space: O(1)

void rotateByOne(int arr[], int n) {
	int temp = arr[n-1];
	for(int i = n-1; i > 0 ; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
}

void printArray(int arr[], int n) {
        cout << "The contents of the array are: "<< '\n';
        for(int i = 0; i < n; i++)
                cout << arr[i] << ' ';
        cout << '\n';
}

int main() {
        int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
        cout << "Before rotation: " << '\n';
        printArray(array, 8);
	
	int d = 3;
	for(int i = 0; i < d; i++)
        	rotateByOne(array, 8);

        cout << "After rotation: " << '\n';
        printArray(array, 8);

        return 0;
}
