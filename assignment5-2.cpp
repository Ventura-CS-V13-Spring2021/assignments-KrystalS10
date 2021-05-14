#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

void makeArray(int n[], int);
void printarray(int n[], int N);
void findminmax(int n[], int N);

int main(){
  srand(time(NULL));
  const int N = 10;
  int n[N];
  makeArray(n, N);
  printarray(n,N);
  findminmax(n,N);
}



void makeArray(int n1[], int N){
  for(int i = 0; i < N; i++){
    n1[i] = rand()%100;
    //cout<< n[i]<<"\t";
  }
}

void printarray(int n2[], int N){
  for (int i = 0; i < N; i++){
    cout<< n2[i]<<"\t";
  }

}

void findminmax(int n3[], int N){
  double max = n3[0];
  double min = n3[0];
  cout<<"\t"<<endl;
  for(int i=1; i < N; i++){
    if (n3[i] > max){
      max = n3[i];
    }
   
  }

  for(int i = 1; i < N; i++){
    if (n3[i] < min){
      min = n3[i];
    }
  }

cout << "The max number is: "<< max << endl;
cout <<"The min number is: "<< min << endl;

}