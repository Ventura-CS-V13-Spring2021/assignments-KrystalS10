#include <iostream>
using namespace std;

void swap( int i, int j){
  int temp=0;
  temp = i;
  i = j;
  j = temp;

}
// void getArrayCount(int arr[]){
  
// }

int main() {
  int arr[] = { -12, 3, -12, 4, 1, 1, -12, 1 , -1, 1, 2, 3, 4, 2, 3 -12};
  int len = sizeof(arr)/ sizeof(arr[0]);
  int sortedArr[len];
  int temp; 
  for(int i= 0; i < len; i++){
    for(int j = i+1; j< len; j++){
      if(arr[i] < arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      
      
    }
  }



  cout<< "N" << "  " << "Count" << endl;
  int count;
  for(int i = 0; i<= len; i++){
    count = 0;
    for(int j = 0; j<= len; j++){
      if(arr[i] == arr[j]){
        count++;
      }
    }
    if(arr[i] != arr[i-1]){
      cout<<arr[i-1] << "  "<< count<< endl;
    }
  }

  // for(int i: arr){
  //   cout<< arr[i]<< " ";
  // }

}