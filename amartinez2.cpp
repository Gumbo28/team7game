//Aldair Martinez
//new source file
//
#include <iostream>
#include <stdio.h>
using namespace std;
/*
typedef struct t_button {
	Rect r;
} Button;
*/

void show_name() {
	printf("aldair\n");
	//return 0;
}
//global
//create unsigned var
//put var in case statements credits
//gl.credits =^ 1			(replace with manage state)
//gl.credits = manage_state(gl.credits)
//void function show credits
//show credits function is called in render
//	if gl.credits 
//		show_credits()
//create header file
//		amartinez2.h
//int main.cpp file, add: 
//		#include "amartinez2.h"
//	add amartinez2.h in Make file

/*
unsigned int manage_state(unsigned int s)
{
	s = s ^ 1;
	return s;
}
*/

void help_screen(){
	//Rect r;
	/*
	ggprint16(&r, 0, 0x00ffffff, "Mouse movement: move paddle");
	ggprint16(&r, 0, 0x00ffffff, "F1 Key: close help screen");
	*/
	cout << "Mouse movement: move paddle\n";
	cout << "F1 key: close help screen\n";	
}
