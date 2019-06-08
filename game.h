#ifndef _GAME_H_
#define _GAME_H_

#include <iostream>
#include <cstdlib>
#include <ctime>

int roll(){
	srand((int)time(0));
	return (rand() % 6) + 1;
}
#endif

