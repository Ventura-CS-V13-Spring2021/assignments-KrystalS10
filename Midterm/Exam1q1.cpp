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
  
  ffs.open("students.txt");

  if(!ffs){
    cerr << "File open error!\n";
    exit(0);
  }
}
