
#include <iostream>
#include <vector>
using namespace std;
void sumAverage(const vector<int>& v) {
    int sum = 0;
    for (int x : v) {
        sum += x;
    }

    double average = static_cast<double>(sum) / v.size();
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
}
int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    sumAverage(numbers);

    return 0;
}
