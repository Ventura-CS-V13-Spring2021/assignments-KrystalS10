#include <iostream>
using namespace std;
int main(){
  int num1,num2,num3;
  cout << "Enter three integer values: ";
  cin >> num1 >> num2 >> num3 ;

  if(num1 == num2 && num1 == num3)
    cout << " All numbers are the same" ;

  else if (num1 == num2 || num2 == num3 || num1 == num3)
    cout << " There are two duplicated numbers." ;

  else
    cout << " All numbers are distinct" ;
}