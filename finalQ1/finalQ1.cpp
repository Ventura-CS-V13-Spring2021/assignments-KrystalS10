#include <iostream>
using namespace std;

int getNumDiv(int num){
  int count = 0;
    for(int i =0; i < num; i++ ){
      if(num % i == 0){
        count++;
      }
    }
    return count;
}
int main() {
  int arr[] = {1, 2, 4, 6, 10, 24};
  int divElem[arr.length()];
  for(int i = 0; i < arr.length; i++){
    divElem[i] = getNumDiv(arr[i]);
  }
  int max = 0;
  for(int i = 0; i< divElem.length(); i++){
   
      if(divElem[i]> max){
        max = divElem[i];

      } 
  }

  
}

