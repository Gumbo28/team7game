//Author: Anh Vu
//Date: 10/4/2022
//source file for avu2.h
//
#include <X11/keysym.h>
#include <GL/glx.h>
#include "avu2.h"
//std::string credit_html =
//#include "credit.html";

/*unsigned int manage_state(unsigned int s)
{
    s = s ^ 1;
    return s;
}*/

extern int showCredit(GLuint creditTexture, int xres, int yres) 
{	  
   glBindTexture(GL_TEXTURE_2D, creditTexture);
        glColor3f(0.2f, 0.2f, 0.6f);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 1.0f);   glVertex2i(0,    0);
            glTexCoord2f(0.0f, 0.25f);  glVertex2i(0,    yres);
            glTexCoord2f(1.0f, 0.25f);  glVertex2i(xres, yres);
            glTexCoord2f(1.0f, 1.0f);   glVertex2i(xres, 0);
        glEnd();
        glBindTexture(GL_TEXTURE_2D, 0);
        return 0;
}


