#include <iostream>
using namespace std;

int main() {
    const int s = 5;
    int a, b;
    int arr[] = {5, 3, 8, 4, 6};
    bool swap;
    for (a = 0; a < s; a++) {
        swap = false; // Fixed assignment
        for (b = 0; b < s - 1; b++) {
            if (arr[b] > arr[b + 1]) {
                int temp = arr[b];
                arr[b] = arr[b + 1]; // Fixed indexing
                arr[b + 1] = temp;
                swap = true;
            }
        }
        if (!swap) // Simplified condition
            break;
    }
    for (int c = 0; c < s; c++) {
        cout << arr[c] << "  ";
    }
}
