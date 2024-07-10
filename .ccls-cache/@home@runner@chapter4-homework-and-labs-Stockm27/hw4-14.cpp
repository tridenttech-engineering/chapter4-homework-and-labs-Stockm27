// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
    double Small = 0.0;
    double Medium = 0.0;
    double Large = 0.0;
    double Family = 0.0;

    double Total = 0.0;
    double SP = 0.0;
    double MP = 0.0;
    double LP = 0.0;
    double FP = 0.0;
  
    cout << "Enter the number of Smalls sold: ";
    cin >> Small;
    cout << "Enter the number of Mediums sold: ";
    cin >> Medium;
    cout << "Enter the number of Larges sold: ";
    cin >> Large;
    cout << "Enter the number of Family sizes sold: ";
    cin >> Family;

    Total = Small + Medium + Large + Family;
    SP = Small/Total * 100;
    MP = Medium/Total * 100;
    LP = Large/Total * 100;
    FP = Family/Total * 100;
    
    cout << "Small Percent: " << SP << endl;
    cout << "Medium Percent: " << MP << endl;
    cout << "Large Percent: " << LP << endl;
    cout << "Family Percent: " << FP << endl;
    cout << "Total Pizzas sold: " << Total << endl;

    return 0;

  return 0;
} // end of main function