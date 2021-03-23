  #include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  int i,num;
  int flag;
  int range1,range2;
  
  cout << "Enter your range: ";
  cin >> range1 >> range2;
  
  for(num = range1; num <= range2; i++)
  {

    for(num = 1; num <= range2; num++)
    {
      flag = 1;

      for(i = 2; i < num; i++)
      {
        if((num %i) == 0) break;
      }

      if(i == num)
        cout << num << " is a PRIME Number\n";

    }

  }
  
}