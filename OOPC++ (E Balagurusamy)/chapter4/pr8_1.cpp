#include <iostream>
#include <string>

using namespace std;

class Account
{
protected:
    string customer_name;
    int account_number;
    string type;
    double balance;

public:
    void initialize(string name, int acc_no, string acc_type, double initial_balance)
    {
        customer_name = name;
        account_number = acc_no;
        type = acc_type;
        balance = initial_balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit successful. Updated balance: " << balance << endl;
    }

    void display_balance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

class Sav_Acct : public Account
{
public:
    void compute_and_deposit_interest(double interest_rate)
    {
        double interest = balance * interest_rate / 100;
        balance += interest;
        cout << "Interest added: " << interest << ". Updated balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
};

class Cur_Acct : public Account
{
public:
    void check_minimum_balance(double min_balance, double penalty)
    {
        if (balance < min_balance)
        {
            balance -= penalty;
            cout << "Balance below minimum. Penalty imposed: " << penalty << ". Updated balance: " << balance << endl;
        }
        else
        {
            cout << "Balance is above minimum requirement." << endl;
        }
    }

    void withdraw(double amount)
    {
        balance -= amount;
        cout << "Withdrawal successful. Updated balance: " << balance << endl;
    }
};

int main()
{
    Sav_Acct sav;
    Cur_Acct cur;

    sav.initialize("John Doe", 1001, "Savings", 5000);
    cur.initialize("Jane Doe", 1002, "Current", 3000);

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
