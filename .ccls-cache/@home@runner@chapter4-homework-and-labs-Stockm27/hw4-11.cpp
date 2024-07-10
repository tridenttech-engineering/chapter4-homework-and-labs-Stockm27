// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double BBalance = 0.0;
  double Withdraws = 0.0;
  double Deposits = 0.0;

  double FinalBalance = 0.0;

  cout << "Enter the Beginning Balance: ";
  cin >> BBalance;
  cout << "Enter the amount deposits: ";
  cin >> Deposits;
  cout << "Enter the amount withdraws: ";
  cin >> Withdraws;
  
  FinalBalance = BBalance + Deposits - Withdraws;

  cout << "Beginning Balance: $" << BBalance << endl;
  cout << "Deposits: $" << Deposits << endl;
  cout << "Withdraws: $" << Withdraws << endl;
  cout << "Final Balance: $" << FinalBalance << endl;

  return 0;
} // end of main function