#include <iostream>
#include <array>
using namespace std;

int main() {
  int arr[] = {1, 2, 4, 6, 10, 24};
  int len = sizeof(arr)/sizeof(arr[0]);
  int divElem[len];

  int lenDiv = sizeof(divElem)/sizeof(divElem[0]);

  for(int i = 0; i < len; i++){
    int count = 0;
    for(int j = 1; j < len; j++){
      if(arr[i] % arr[j]==0){
        count++;
      }
    }
    divElem[i] = count;
    
  }
  int max = 0;
  int elem = 0;
  for(int i = 0; i< lenDiv; i++){
   
      if(divElem[i]> max){
        max = divElem[i];
        elem = i;
      } 
  }
  cout<<"Element " << arr[elem] << " has the greatest number of divisible elements which is " << max;
  
}
