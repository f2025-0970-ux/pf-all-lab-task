#include <iostream>
using namespace std;
int main() {
    int heighty, widthx;

    cout << "Enter the number of rows and cols in matrixx  ";
    cin >> heighty >> widthx;

      int box[20][20]; 
    cout << "Input your numbers  " << endl;
    for (int i = 0; i < heighty; i++) {
        for (int j = 0; j < widthx; j++) {
            cin >> box[i][j];
        }
    }

    int target_val;
    cout << " which is the number you are finding   ";
    cin >> target_val;

   
    int hitcount = 0; 

    for (int a = 0; a < heighty; a++) {
        for (int b = 0; b < widthx; b++) {
            
            if (box[a][b] == target_val) {
                hitcount++;
            }
        }
    }

    cout << "\n stats says that " << endl;
    cout << "Target element   " << target_val << endl;
    
    cout << "Found it " << hitcount << " times in the matrix." << endl;

    return 0;
}