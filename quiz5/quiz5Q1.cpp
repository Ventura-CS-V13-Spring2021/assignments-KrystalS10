
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
      cout << numbers[i]<<"\t";
      sum += numbers[i];
    }

    cout<<"\t"<<endl;

    for(auto &eachvalue : numbers){
      int difference = 0;
      difference = sum - eachvalue;
      diff[eachvalue] = difference;
      cout << diff[eachvalue] << "\t";
    }


}