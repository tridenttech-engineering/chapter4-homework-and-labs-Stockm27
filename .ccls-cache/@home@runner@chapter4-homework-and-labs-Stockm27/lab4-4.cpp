//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Mathias Stock> on <7-9-2024>
#include<iostream>
using namespace std;
int main()
{
  
const double PI = 3.14159;
double height   = 0.0;
double radius   = 0.0;
double volume   = 0.0;
  
cout << "Height: ";
cin >> height;
cout << "Radius: ";
cin >> radius;
  
volume = PI * radius * radius * height;
cout << "Volume: " << volume << endl;
return 0;
} //end of main function