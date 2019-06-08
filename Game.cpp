#include <iostream>

using namespace std;

int main (){
	srand((int)time(0));

	int computer;
	
	computer = (rand() % 6) + 1;
	
	cout << computer;

	return 0;
}
