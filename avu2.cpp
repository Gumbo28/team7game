//Author: Anh Vu
//Date: 10/4/2022
//source file for myimage.h
//
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "avu2.h"
#include <iostream>
using namespace std;

unsigned int manage_state(unsigned int s)
{
    s = s ^ 1;
    return s;
}


void showCredit() 
{	    
    cout << "Credit here" << endl;	
    cout << "Tyler, Anh, Abisai, Aldair, Andres";
}

//credit inti =0 
//change credit to 1 to turn on
//make a func
//render func
// show the func at the end
//

