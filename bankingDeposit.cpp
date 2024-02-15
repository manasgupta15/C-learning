#include <iostream>
#include <iomanip>
using namespace std;
void showBalance(double balanace);
double deposit();
double withDraw(double balance);
int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        cout << "Enter your choice: \n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;
        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withDraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "thanks for visiting!";
            break;
        default:
            cout << "Invalid Choice!";
        }
    } while (choice != 4);

    return 0;
}
void showBalance(double balance)
{
    cout << "Your balance is: $ " << setprecision(2) <<fixed << balance << endl;
}
double deposit()
{
    double amount = 0;
    cout << "Enter the amount to be deposited! ";
    cin >> amount;

    if(amount>=0) {
        return amount;
    } else {
        cout << "That's not a valid amount \n";
        return 0;
    }
}
double withDraw(double balance)
{
    double amount = 0;
    cout << "Enter the amount to be withdrawn: " << endl;
    cin >> amount;
    if(amount>balance) {
        cout << "Insufficient funds\n";
        return 0;
    } else if(amount < 0) {
        cout <<"that's not correct amount \n";
        return 0;
    } else {
        return amount;
    }
}