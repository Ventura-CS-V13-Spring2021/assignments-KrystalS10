#include "IntegerArray.hpp"
#include <iostream>
using namespace std;

int IntegerArray::getLength(void) const
{
  return length;
}

void IntegerArray::sortArray(int flag){

}

void IntegerArray::fillUp(void){
  srand(time(NULL));

  const unsigned int length = 10;

  int numbers[length]; 
  for (int i = 0; i < length; i++)
  {
    numbers[i] = rand() % 101;
    cout << numbers[i]; 
  }
}

void IntegerArray::getPrimenumbers(void) const{

}

void IntegerArray::printAll(void) const{
  
}