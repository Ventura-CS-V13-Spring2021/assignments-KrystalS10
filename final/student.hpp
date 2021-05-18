#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
private:
  string name;
  int numClasses; 
  string *classList;

public:
  Student () : name(), numClasses(0),classList(NULL){};
  Student (string n, int num);
  Student(Student &rhs);
  ~Student();
  Student &operator=(Student &rhs);
  void inputClass(string n, int num);
  void resetClass();
  void printAll() const;
  string getName() const;
  int getNumClasses() const;
};

#endif 