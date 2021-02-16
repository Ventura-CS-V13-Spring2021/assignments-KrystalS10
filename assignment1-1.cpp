#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;

  double classA;
  double classB;
  double  classC;
  
  cout << "How many Class A seat tickets were sold?\n";
  cin>> classA;
  cout << "How many Class B seat tickets were sold?\n";
  cin>> classB;  
  cout << "How many Class B seat tickets were sold?\n";  
  cin>> classC; 

  double incomeGenerated;
  incomeGenerated = (classA * rateA)+(classB * rateB)+(classC * rateC);
  cout<<"The total income generated is: $" << fixed<< setprecision(2)<<incomeGenerated;

}