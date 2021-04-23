#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  ifstream ifs;
  string name;
  int score_1, score_2;
  int sum;
  float average;
  int total_num = 0;
  
  ifs.open("students.txt");

  if(!ifs){
    cerr << "File open error!\n";
    exit(0);
  }

  while(ifs >> name >> score_1 >> score_2)
  {
    cout<< "Student name: " << name << "\t";
    cout<< "Score 1: " << score_1 << "\t" << "Score 2: " << score_2 << "\t";   

    sum = score_1 + score_2; 
    cout << "Sum: " << sum << "\t";
    
    average = sum / 2.0;
    cout << "Avg: " << average << "\t";

    if (average > 80)
      total_num++;

    cout << "\n"<< endl;

  }

  cout << "\nThe total number of students with an average greater than 80 is: " << total_num << endl;
  ifs.close();
}
