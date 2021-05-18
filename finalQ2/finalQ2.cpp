#include <iostream>

void swap( int i, int j){
  int temp;
  temp = i;
  i = j;
  j = temp;

}
void getArrayCount(int arr[]){
  int len = sizeof(arr)/ sizeof(arr[0]);
  for(int i= 0; i < len; i++){
    for(int j = i+1; j< len; j++){
      if(arr[i] < arr[j]){
        swap(arr[i], arr[j]);
      }
      
    }
  }
}

int main() {
  int arr[] = { -12, 3, -12, 4, 1, 1, -12, 1 , -1, 1, 2, 3, 4,2,3 -12};
  

}