#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int getRdnum(void);


int main(){
  //int randnum;
  srand(time(0));

  int num1 = getRdnum();
  cout<<"Num1 is: " << num1<< endl;
  int num2 = getRdnum();
  cout<<"Num2 is: " << num2<<endl;
  int num3 = getRdnum();
  cout << "Num3 is: " << num3<<endl;

  
}

int getRdnum(){
  int rdnum;
  rdnum = rand()% 9 + 1;
  return rdnum; 

}