#include <iostream>
using namespace std;
void withdrawing(int &balance,int amount){
    cout<<"Enter the amount to withdraw = "<<endl;
    cin >> amount;
    if(amount<=balance){
        balance-=amount;
        cout<<"The remaining balance is   \n"<<balance<<endl;
    }
    else{
        cout<<"Invalid balance"<<endl;
    }
}
int main() {
    int balance,amount;

    cout << "Enter firstb balance"<<endl;
    cin >> balance;

    attemptwithdraw(balance,amount);
    cout << "balance after  we call the function  \n"<<balance;
    return 0;
}