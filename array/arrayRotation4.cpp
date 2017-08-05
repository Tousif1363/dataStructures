#include <iostream>

using namespace std;

// Runtime: O(n)
// Auxillary space: O(1)

void rotateInPlaceGcd(int arr[], int g) {
	for(int i = 0; i < g; i++)
	{
		int temp = arr[i];
		int j;

		for(j = 0; j < g; j++)
		{	
			cout << "i + j*g" << i + j*g << '\n';
			cout << "i + (j+1)*g" << i + (j+1)*g << '\n';
			arr[i + j*g] = arr[i + (j+1)*g];
		}
		arr[i + j*g] = temp;
		cout << "Later: i + j*g" << i + j*g << '\n';
	}	       
}

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

void printArray(int arr[], int n) {
        cout << "The contents of the array are: "<< '\n';
        for(int i = 0; i < n; i++)
                cout << arr[i] << ' ';
        cout << '\n';
}

int main() {
        int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int l = 9;
	int d = 3;

        cout << "Before rotation: " << '\n';
        printArray(array, l);;
	
	int g = gcd(l, d);
	cout << "gcd is : " << g << '\n';

        rotateInPlaceGcd(array, g);

        cout << "After rotation: " << '\n';
        printArray(array, l);

        return 0;
}
