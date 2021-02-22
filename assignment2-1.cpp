#include <iostream>
using namespace std;
int main(){
  int num1,num2,num3;
  cout << "Enter three integer values: ";
  cin >> num1 >> num2 >> num3 ;

  if(num1 > num2 && num1 > num3)
    cout << num1 << " is the greatest amoung the three integers" ;

  else if (num2 > num1 && num2 > num3)
    cout << num2 << " is the greatest amoung the three integers" ;
  
  else if(num3 > num1 && num3 > num2)
    cout << num3 << " is the greatest amoung the three integers" ;
}
