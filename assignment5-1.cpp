#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  const int N = 10;
  int numbers[N];
  double sum = 0;
  double average = 0;
  cout << "The list of random numbers is: ";

  for(int i = 0; i < N; i++){
    numbers[i] = rand()%99;
    cout<< numbers[i]<<"\t";

    sum = sum + numbers[i];
    average = (sum/N);
  }
  cout << "\t" <<endl;
  cout << "The sum of the numbers is: " << sum << "\t" << endl;
  cout << "The average of the numbers is: " << average << endl;

}