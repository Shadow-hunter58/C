#include <iostream>
using namespace std;

int main()
{
    int n;

    // Ask user for size
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate memory
    int *arr = new int[n];

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display elements
    cout << "\nArray elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}
