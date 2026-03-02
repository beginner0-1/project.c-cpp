#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 0;
    double amount;

    cout << "===== Simple Bank System =====\n";

    do {
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Check Balance";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                balance = 0;
                cout << "Account Created Successfully!\n";
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Money Deposited Successfully!\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount > balance) {
                    cout << "Insufficient Balance!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal Successful!\n";
                }
                break;

            case 4:
                cout << "Current Balance: " << balance << endl;
                break;

            case 5:
                cout << "Thank you for using our bank system!\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while(choice != 5);

    return 0;
}