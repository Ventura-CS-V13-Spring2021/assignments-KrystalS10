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

}
