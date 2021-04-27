
#include    <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;
    cout << numbers[10]<<endl;

    for (int i = 0; i< SIZE; i++){
      sum += numbers[i];
    }

    for(auto &eachvalue : diff ){
      difference = sum - eachvalue ;
      cout << difference << "\t";
    }

}