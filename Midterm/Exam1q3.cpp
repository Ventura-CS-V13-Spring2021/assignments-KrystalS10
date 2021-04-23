#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);
int findMax(void);
int maxnum = findMax();

int main(){
  int rdnum;
  srand(time(0));

  int num1 = getRdnum();
  int num2 = getRdnum();
  int num3 = getRdnum();

  cout<<"Random number 1 is: " << num1 << endl;
  cout<<"Random number 2 is: " << num2 << endl;
  cout<<"Random number 3 is: " << num3 << endl;

  int minNum = findMin(num1, num2, num3);
}

int getRdnum(){
  int rdnum;
  rdnum = rand()% 9 + 1;
  return rdnum; 

}

int findMin{
  int minNum = 0;
  if (n1 < n2 && n1 < n3){
    minNum = n1;
  }
  else if ( n1 == n2 && n1 < 3){
    minNum = n1;
}

int findMax(){  
  if(num1 > num2 && num1 > num3)
  {
    int maxnum;
    cout << num1 << " is the max amoung the three integers" ;
    maxnum = num1;
  }
  else if (num2 > num1 && num2 > num3){
     int maxnum;
    cout << num2 << " is the max amoung the three integers" ;
    maxnum = num2;
  }
  
  else if(num3 > num1 && num3 > num2){
     int maxnum;
    cout << num3 << " is the max amoung the three integers" ;
    maxnum = num3;
  }
    return maxnum;
  
}