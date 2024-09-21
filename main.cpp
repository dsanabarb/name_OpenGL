/*
 * Writing my name
 * github.com/dsanabarb
 */

#include <GL/freeglut.h>

void draw (void) {
    glClear (GL_COLOR_BUFFER_BIT);

    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();

    gluOrtho2D(0, 85, 0, 20); //left, right, base, top

    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();

    //D
    glBegin (GL_LINE_LOOP);
        glVertex2f (10,15);
        glVertex2d (10, 5);
        glVertex2d (18, 10);
    glEnd();

    //I
    glBegin (GL_LINE_STRIP);
        glVertex2d (20, 5);
        glVertex2d (20,15);
    glEnd();

    //A
    glBegin (GL_LINE_STRIP);
        glVertex2f (25, 5);
        glVertex2f (25,15);
        glVertex2f (30,15);
        glVertex2f (30, 5);
        glVertex2f (30,10);
        glVertex2f (25,10);
    glEnd();

    //N
    glBegin (GL_LINE_STRIP);
        glVertex2d (35, 5);
        glVertex2d (35,15);
        glVertex2d (40, 5);
        glVertex2d (40, 15);
    glEnd();

    //A
    glBegin (GL_LINE_STRIP);
        glVertex2f(45,5);
        glVertex2f(45,15);
        glVertex2f(50,15);
        glVertex2f(50,5);
        glVertex2f(50,10);
        glVertex2f(45,10);
    glEnd();

    //V
    glBegin (GL_LINE_STRIP);
        glVertex2f(60,15);
        glVertex2f(62.5,5);
        glVertex2f(65,15);
    glEnd();

     glFlush ();
}


int main (int argc, char* argv [] ) {
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 400);
    glutCreateWindow ("Hello, World! My name is");
    glutDisplayFunc (draw);
    glClearColor (0, 0.3, 0, 0);
    glutMainLoop();

    return 0;
}


