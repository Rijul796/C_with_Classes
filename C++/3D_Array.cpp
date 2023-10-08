#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input the dimensions of the 3D array
    cout << "Enter the dimensions (x, y, z) of the 3D array: ";
    cin >> x >> y >> z;

    // Create the 3D array
    int array[x][y][z];

    // Input elements of the 3D array
    cout << "Enter elements of the 3D array:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cin >> array[i][j][k];
            }
        }
    }

    // Print the 3D array
    cout << "The 3D array is:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << array[i][j][k] << " ";
            }
            cout << endl; // Move to the next row in the 2D plane
        }
        cout << endl; // Separate the 2D planes
    }

    return 0;
}
