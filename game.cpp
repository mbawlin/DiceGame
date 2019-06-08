#include <iostream>
#include <ncurses.h>
#include "game.h"

using namespace std;

int main (){
	/*
	char buttonPress;
	
	buttonPress = getch();

	switch(buttonPress){
	
		case 'r':
			roll();
		case 'q':
			return 0;

	}
	*/
	
	
	
	/*
	while((buttonPress = getch()) != 27){
		if(buttonPress == 'r')
			cout << "r was pressed" << endl;
	roll();

	}
	*/
	cout << roll() << endl;
	return 0;
}
