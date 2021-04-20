#include <iostream>
using namespace std;
int main(){
  int num1,num2,num3;
  cout << "Enter three integer values, each number must be between 0 - 99: ";
  cin >> num1 >> num2 >> num3 ;

  if(num1 == num2 && num1 == num3)
    cout << num1 << "All numbers are duplicated " ;

  else if (num2 == num1 || num2 == num3)
    cout  << " There is one duplicated number of: " << num2 ;
  
  else if(num3 == num1 || num3 == num2)
    cout  << " There are two duplicated numbers of: " << num3; 
}
