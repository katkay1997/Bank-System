#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdio.h>
using namespace std;

char account_type;
float balance;
double amount;
string first_name;
string last_name;

void open_account() {
    cout << "Enter your name";
    cin >> first_name;
    cin >> last_name;
    cout << "Hello " << first_name << " " << last_name << "! What information do you need? \n";

    cout << "For verification purposes, please enter building number";
    int address_num;
    cin >> address_num;
    cout << "what is your street?";
    string street;
    cin >> street;
    cin.ignore();
    cout << address_num << street << " is in our records. \n" ;

//    cout << "\n \n";
//    cout << "You are required to deposit $15 to open an account";
}

void credentials() {
    cout << "What type of account you want to view? \n"
         << "Savings (S) or Checking (C)";
    cin >> account_type;
    cin.ignore();
    if (account_type == 'S') {
        cout << account_type << "\n" << "Enter how much money you want to deposit in savings  \n" ;
    } else if(account_type == 'C') {
        cout << account_type << "\n" <<  "Enter how much money you want to deposit in checking \n";
    } else {
        cout << "ERROR: Enter S or C \n";
    }

    cin >> balance;
    cout << "You have deposited: $"
         << balance << "\n";
    cout << "Account Created Successfully \n";
}

void deposit_money(){
    cout << "Add more money into your account";
    cin >> amount;
    cout << "You have entered : \n" << amount;
    balance += amount;
    cout << "\n";
    cout << "This is your new balance is \n $" << balance;
}

void withdraw_money(){
    cout   << "Your current account balance is: \n $" << balance;
    cout << "How much money do you want to withdraw from your account? \n";
    cin >> amount;
    balance -= amount;
    cout << "Your new account balance is: \n $" << balance << "\n \n ";
}

void account_display(){
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "Account User: "<< first_name << " " << last_name << "\n"
        << "Account recently viewed: \n" << account_type << "\n"
        << "Current Balance: \n " << balance;
}


int main() {
    open_account();
    credentials();
    deposit_money();
    withdraw_money();
    account_display();
    return 0;
}
