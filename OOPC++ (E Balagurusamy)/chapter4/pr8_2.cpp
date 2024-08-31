#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string customer_name;
    int account_number;
    string type;
    double balance;

public:
    // Constructor
    Account(string name, int acc_no, string acc_type, double initial_balance) {
        customer_name = name;
        account_number = acc_no;
        type = acc_type;
        balance = initial_balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Updated balance: " << balance << endl;
    }

    void display_balance() {
        cout << "Current balance: " << balance << endl;
    }
};

class Sav_Acct : public Account {
public:
    // Constructor for Sav_Acct
    Sav_Acct(string name, int acc_no, double initial_balance)
        : Account(name, acc_no, "Savings", initial_balance) {}

    void compute_and_deposit_interest(double interest_rate) {
        double interest = balance * interest_rate / 100;
        balance += interest;
        cout << "Interest added: " << interest << ". Updated balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};

class Cur_Acct : public Account {
public:
    // Constructor for Cur_Acct
    Cur_Acct(string name, int acc_no, double initial_balance)
        : Account(name, acc_no, "Current", initial_balance) {}

    void check_minimum_balance(double min_balance, double penalty) {
        if (balance < min_balance) {
            balance -= penalty;
            cout << "Balance below minimum. Penalty imposed: " << penalty << ". Updated balance: " << balance << endl;
        } else {
            cout << "Balance is above minimum requirement." << endl;
        }
    }

    void withdraw(double amount) {
        balance -= amount;
        cout << "Withdrawal successful. Updated balance: " << balance << endl;
    }
};

int main() {
    // Creating objects using constructors
    Sav_Acct sav("John Doe", 1001, 5000);
    Cur_Acct cur("Jane Doe", 1002, 3000);

    sav.deposit(1000);
    sav.compute_and_deposit_interest(5);
    sav.withdraw(2000);
    sav.display_balance();

    cur.deposit(2000);
    cur.withdraw(1500);
    cur.check_minimum_balance(2000, 100);
    cur.display_balance();

    return 0;
}
