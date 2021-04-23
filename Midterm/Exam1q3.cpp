#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);
int findMin(int n1, int n2, int n3);
int findMax(int n1, int n2, int n3);
int getDifference(int m1, int m2);
void fileWrite(int d);

int main()
{
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
  cout << "The maximum number of the three is: " << maxNum << endl;

  int difference = getDifference(minNum,maxNum);




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

int getDifference(int m1, int m2){
  int difference = m2 - m1;
  return difference; 
}

void fileWrite (int d){
  ofstream ofs;
  ofs.open("question.txt");
  if (ofs.is_open()){
    ofs << d << "\t";
  }
  ofs.close();
}