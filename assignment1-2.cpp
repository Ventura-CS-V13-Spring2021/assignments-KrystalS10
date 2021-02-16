#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  double Celcius;
  double Fahrenheit;
  
  cout << "Enter the temperature by Celcius:\n";
  cin>> Celcius;

   Fahrenheit = (9/5.0)*(celcius) + 32;

  cout << "Celsius " << Celcius << " is " << Fahrenheit << " Fahrenheit ";

}