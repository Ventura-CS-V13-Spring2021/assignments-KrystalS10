#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	int rdnum;
	int N;
	ofstream 	rdfile;

	rdfile.open("rdnum.txt");

	cout << "Please enter the number of how many integers are to be displayed: \n";
	cin >> N;

	srand(time(0));
	for(int i; i<N; i++)
	{
		rdnum = random() % 59;
		rdfile << rdnum << endl;
	}

	rdfile.close();

}