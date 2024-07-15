#include <iostream>
using namespace std;
void viewMenu()
{
  cout << "1.Inches To Feet"<<"\n";
  cout << "2.Pound To Kilogram" << "\n";
  cout << "_______3.exit______" << "\n";
  cout << "Enter your choice= ";
}
double inchestoFeet(double x)
{
  return x / 12.0 ;
}
double poundtoKilogram(double y)
{
  return y * 0.453592;
}
int main ()
{
  double inches,pound;

  int choice;
  while (true)
  {
    viewMenu();
    cin >> choice;
    switch (choice)
  {
  case 1:
    cout << "Input your value= ";
    cin >> inches;
    cout << "Inches To =" << inchestoFeet(inches) << "Feet" << "\n";
    break;

    case 2:
      cout << "Input your value= ";
      cin >> pound;
      cout << "Pound To = " << poundtoKilogram(pound) << "kilogram" << "\n";

  default:
    cout << "_____Wrong choice______";
    break;
  }
  cout << "\n";
  }

  return 0;
}
