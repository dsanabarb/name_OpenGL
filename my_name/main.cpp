/*
 * Project 1 - Modelagem 3D
 * Writing my name
 * github.com/dsanabarb
 */

 //glutKeyboardFunc -> ASCII
 //glutSpecialFunc -> GLUT_KEY_F1

#include <GL/freeglut.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <iostream>


GLfloat escala = 1.5;
    float Tx = 0;
    float Ty = 0;
    float angulo = 0;


void draw (void) {

    glClear (GL_COLOR_BUFFER_BIT);

    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();

    gluOrtho2D(0, 85, 0, 20); //left, right, base, top

    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();

    glScalef (escala, escala, 0);
    glTranslated (Tx, Ty, 0);
    glRotatef (angulo, 0, 0, 1);


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

void listeningKey (unsigned char tecla, GLint x, GLint y) {
        switch (tecla) {
            case '+' : escala += 0.1;
                break;
            case '-' : if (escala >= 0.10) escala -= 0.1;
                break;
            case 'd' : Tx += 0.5;
                break;
            case 'a' : Tx -= 0.5;
                break;
            case 'w' : Ty += 0.5;
                break;
            case 's' : Ty -= 0.5;
                break;
            case 'q' : angulo += 0.5;
                break;
            case 'e' : angulo -= 0.5;
                break;
        }
        draw();
}


int main (int argc, char* argv [ ] ) {
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 500);
    glutCreateWindow ("Hello, World! My name is");
    glutKeyboardFunc (listeningKey);
    glutDisplayFunc (draw);
    glClearColor (0, 0.3, 0, 0);
    glutMainLoop();

    return 0;
}


