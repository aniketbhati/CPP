#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string name;
    int accNum;
    float balance;

public:
    //Constructor 
    Account() : name(""), accNum(0), balance(0.0) {}

    //to create a new account
    void createAccount() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accNum;
        cout << "Enter account balance: ";
        cin >> balance;
        cout << "Account created successfully"<<endl;
    }

    //to display account information
    void displayAccount() const {
        cout << "Name: " << name << endl;
        cout << "Account number: " << accNum << endl;
        cout << "Balance: " << balance << endl;
    }

    //to deposit money
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: "<<endl;
        cin >> amount;
        balance += amount;
        cout << "Deposit successful"<<endl;
    }

    //to withdraw money
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: "<<endl;
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance"<<endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful"<<endl;
        }
    }
};

int main() {
    int choice;
    Account acc;

    cout << "* Banking System *"<<endl;

    //to display menu and user choice
    do {
        cout << "1. Create new account"<<endl;
        cout << "2. Display account information"<<endl;
        cout << "3. Deposit money"<<endl;
        cout << "4. Withdraw money"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                acc.createAccount();
                break;
            case 2:
                acc.displayAccount();
                break;
            case 3:
                acc.deposit();
                break;
            case 4:
                acc.withdraw();
                break;
            case 5:
                cout << "Thank you! Have a great day sir"<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again."<<endl;
                break;
        }
    } while (choice != 5);

    return 0;
}

