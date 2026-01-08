#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns  ";
    cin >> rows >> cols;
    int grid_data[10][10];

    cout << "Fill the array " << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> grid_data[r][c];
        }
    }

   
    int topscore = -999999;
    int runnerup = -999999;

       for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
            
            int currentvalue = grid_data[i][j];

            if (currentvalue > topscore) {
                runnerup = topscore;
                   topscore = currentvalue;
            } 
            else if (currentvalue > runnerup && currentvalue != topscore) {
                runnerup = currentvalue;
            }
        }
    }

    cout << "\n  Results  " << endl;
    if (runnerup == -999999) {
        cout << "No second largest found it    (maybe all numbers are the same  )" << endl;
    } else {
        cout << "The biggest is  =  " << topscore << endl;
        
        cout << "The second biggest   is   " << runnerup << endl;
    }

    return 0;
}