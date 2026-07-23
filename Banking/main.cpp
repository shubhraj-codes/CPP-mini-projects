#include <iostream>
#include <iomanip>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 2000;
    int choice = 0;

    do
    {
        cout << "********************\n";
        cout << "Enter your choice\n";
        cout << "1. Show ballance\n";
        cout << "2. deposite money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit\n";
        cout << "********************\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            cout << "Thamks for visiting us\n";
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showbalance(double balance)
{
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << '\n';
}
double deposit()
{
    double deposit = 0;
    cout << "Enter amount to deposit: ";
    cin >> deposit;

    if (deposit > 0)
    {
        return deposit;
    }
    else
    {
        cout << "That's not a valid amount: \n";
        return 0;
    }
}
double withdraw(double balance)
{
    double withdraw = 0;
    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    if (withdraw > balance)
    {
        cout << "Insufficient funds: \n";
        return 0;
    }
    else if (withdraw > 0)
    {
        return withdraw;
    }
    else
    {
        cout << "That's not a valid amount: \n";
        return 0;
    }
    return withdraw;
}
