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
  Student (string n, int num){
    name = n;
    num_classes = num;
    class_list = new string[num];
    for (int i = 0; i < num_classes; i++)
    {
      cout << "Enter the course name : ";
       cin >> class_list[i];
    }
  }
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