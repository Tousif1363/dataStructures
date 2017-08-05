#include <iostream>

using namespace std;

//Runtime: O(n)
//Auxillary space: O(d)

void rotate(int arr[], int d, int n) {
        int temp[d];
        for(int i = 0; i < d; i++)
                temp[i] = arr[i];
        for(int j = d; j < n; j++)
                arr[j-d] = arr[j];

        for(int k = n-d; k < n; k++)
                arr[k] = temp[k-n+d];
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

        rotate(array, 4, 8);

        cout << "After rotation: " << '\n';
        printArray(array, 8);

        return 0;
}
