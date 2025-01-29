# Bank-System

A simple C++ console application that simulates basic banking operations.

## Description

This Bank-System project is a console-based application written in C++ that simulates basic banking operations. It allows users to open an account, make deposits, withdraw money, and view account details.

## Features

- Open a new bank account
- Choose between Savings (S) or Checking (C) account types
- Deposit money into the account
- Withdraw money from the account
- Display account information

## How to Use

1. Compile the C++ file using a C++ compiler (e.g., g++)
2. Run the executable
3. Follow the on-screen prompts to:
   - Open an account (provide name and address)
   - Select account type (Savings or Checking)
   - Make initial deposit
   - Perform additional deposits or withdrawals
   - View account information

## Code Structure

The main components of the code are:

- `open_account()`: Gathers user information to open a new account
- `credentials()`: Allows user to select account type and make initial deposit
- `deposit_money()`: Handles depositing money into the account
- `withdraw_money()`: Handles withdrawing money from the account
- `account_display()`: Displays account information
- `main()`: The main function that orchestrates the program flow

## Future Improvements

- Implement data persistence (save account information to a file)
- Add error handling for invalid inputs
- Implement multiple account management
- Add more banking features (e.g., transfer between accounts, calculate interest)
- Enhance security features (e.g., PIN protection)

## Contributing

Feel free to fork this repository and submit pull requests to contribute to this project. For major changes, please open an issue first to discuss what you would like to change.
