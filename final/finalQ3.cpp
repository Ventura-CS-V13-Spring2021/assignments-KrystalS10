#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
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

Student::Student(string n, int num){
  this->name = n;
  this-> numClasses = num;
  this-> classList = new string[num];
   for (int i = 0; i < numClasses; i++)
   {
       cout << "Enter the course name : ";
       cin >> classList[i];
   }
}
// Student Student::&operator= (Student &rhs){

// }

Student::~Student(){
  delete[] classList;
}
void Student::resetClass(){
  delete[] classList;
  this->numClasses =0;
}