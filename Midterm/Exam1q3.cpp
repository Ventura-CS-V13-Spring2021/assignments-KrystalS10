#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);
int findMin(int n1, int n2, int n3);
int findMax(int n1, int n2, int n3);

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
  cout << "The minimum number of the three is: " << minNum << endl;

  int maxNum = findMax(num1, num2, num3);
}

int getRdnum(){
  int rdnum;
  rdnum = rand()% 9 + 1;
  return rdnum; 

}

int findMin(int n1, int n2, int n3){

  int minNum = 0;
  if (n1 < n2 && n1 < n3){
    minNum = n1;
  }
  else if ( n1 == n2 && n1 < 3){
    minNum = n1;
  }
  else if (n2 < n1 && n2 < n3)
  {
    minNum = n2;
  }
  else {
    minNum = n3;
  }
  return minNum;
}

int findMax(int n1, int n2, int n3)
{ 
  int maxNum;
  if ( n3 > n2 && n3 > n1){
    maxNum = n3;
  }
  else if ( n3 == n2 & n3 > n1){
    maxNum = n3;
  }
  else if(n2 > n3 && n2 > n1){
    maxNum = n2;
  } 
  else{
    maxNum = n1;
  }
  return maxNum;
}