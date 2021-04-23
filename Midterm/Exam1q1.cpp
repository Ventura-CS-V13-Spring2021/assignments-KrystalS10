#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  ifstream ffs;
  string name;
  int score_1, score_2;
  int sum;
  
  ffs.open("students.txt");

  if(!ffs){
    cerr << "File open error!\n";
    exit(0);
  }

  while(ffs >> name >> score_1 >> score_2)
  {
    cout<< "Student name: " << name << "\t";
    cout<< "Score 1: " << score_1 << "\t" << "Score 2: " << score_2 << "\t";   

    sum = score_1 + score_2; 
    cout << "Sum: " << sum << "\t";
    
    average = sum / 2.0;
    cout << "Avg: " << average << "\t"; 

  }
}
