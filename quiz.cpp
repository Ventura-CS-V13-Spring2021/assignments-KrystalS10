#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{	
  int rdnum;
  int i,N;
  N = 5;

  srand(time(0));

  for(int i; i<N; i++)
	{
		rdnum = random() % 100;
		cout << rdnum << endl;
	}

}