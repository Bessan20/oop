#include<iostream>
using namespace std;

class Account {

    public:
    
    string accountNum;
    double balance;

    Account(string accountNum, double balance) {

        if(balance < 0)
            cout << "Initial balance must be non-negative.\n";
        
        else {
        this->balance = balance;
        cout <<"The balance  "<<balance <<"\n";
        }

        if(accountNum == ""){
        cout << "Account number cannot be empty.\n";
        }
        else {
        this->accountNum = accountNum;
        cout <<"The account number "<<accountNum<<"\n";
        }
        
        
    }
};

int main() {

    //
    Account a1("",-1);
    Account a2("1234567890", 2000);

    return 0;
}
