#include <iostream>
#include <fstream>
using namespace std;

int getRdnum();
int isGreater();

const int N = 10;


int main()
{
  int randNum;
	ofstream ofs;

  srand(time(0));

  if(!ofs){
    cerr << "File Open Error\n";
    exit(0);
  }

  for ( i = 0; i < N; i++){
    
  }
}


int getRdnum(){
  return rand() % 50 + 1;

}
// You need to use Repl.it 
// and commit it often.
