// Tyler's source code here
#include <GL/glx.h>
#include "tbrown.h"
#include <iostream>
extern int show_intro_screen(GLuint introTexture, int xres, int yres)
{
        // Renders intro image onto screen

        glBindTexture(GL_TEXTURE_2D, introTexture);
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f, 1.0f);   glVertex2i(0,   0);
            glTexCoord2f(0.0f, 0.25f);  glVertex2i(0,   yres);
            glTexCoord2f(1.0f, 0.25f);  glVertex2i(xres, yres);
            glTexCoord2f(1.0f, 1.0f);   glVertex2i(xres, 0);
        glEnd();
        glBindTexture(GL_TEXTURE_2D, 0);
        // Returns -1 to decrement intro_counter
        return -1;
}
