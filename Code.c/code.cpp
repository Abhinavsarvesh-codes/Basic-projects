#include<iostream>
using namespace std;
class bank{
        private:
        int balance = 10000;
        int password = 8008;
        public:
        int type;
        void showbalance(){
            cout << "Your balance :" << balance << endl;

        }
        void deposit(){
            int amount;
            int newbalance;
            
            cout << "How much do you want to deposit?" <<endl;
            cout << "Enter the amount :"<< endl;
            cin >> amount;
            newbalance = balance+amount;
            cout << "Do you want to see balance then type 0" << endl;
            cin >> type;
        if(type == 0){
            cout << "Your old balance :" << balance << endl;    
            cout << "Your newbalance:" << newbalance << endl;
        }
        else {
            cout << "Thank you ! vist again" << endl;
        }

        }
        void withdraw(){
            int money;
            int bal;
            cout << "How much do you want to withdraw?" <<endl;
            cout << "Enter the amount :"<< endl;
            cin >> money;
            if(balance<money){
                cout << "Insufficient balance !" << endl;
            }
            else if(balance>money){
            bal = balance-money;
            cout << "Do you want to see balance then type 0" << endl;
            cin >> type;
            if(type == 0){
            cout << "Your old balance :" << balance << endl;    
            cout << "Your newbalance:" << bal << endl;
        }
    }
    
        else {
            cout << "Thank you ! vist again" << endl;
        }
        }

    };
int main(){
    bank bankacc;
    int choice;
    int pass;
    int password;
    cout << "---------Welcome to our bank----------" << endl;
    cout << "Please select the option" << endl;
    cout << "1.Check the balance" <<endl;
    cout << "2.Deposit" << endl;
    cout << "3.Withdraw" << endl;
    cin >> choice;

    if(choice == 1){
        cout << "Enter your password:" << endl;
        cin >> pass;
        if(8008 == pass){
            bankacc.showbalance();
        }
        else{
            cout << "You have entered wrong password !" << endl;
        }
        
    }
    else if(choice == 2){
        
        cout << "Enter your password:" << endl;
        cin >> pass;
        if(8008 == pass){
            bankacc.deposit();
        }
        else{
            cout << "You have entered wrong password !" << endl;
        }
    }
    else if(choice == 3){
        
         cout << "Enter your password:" << endl;
        cin >> pass;
        if(8008 == pass){
            bankacc.withdraw();
        }
        else{
            cout << "You have entered wrong password !" << endl;
        }
    }   
}