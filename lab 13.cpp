
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int r1, c1;
    int sum = 0;

    cout << "Enter number of rows  ";
     cin >> r1;
    cout << "Enter number of columns   ";
    cin >> c1;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter number of elements   \n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements is    = " << sum << endl;

    return 0;
}
