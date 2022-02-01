#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
    glClearColor(1.0, 1.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void quad(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.4, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(100, 100);
    glVertex2i(10, 145);
    glVertex2i(100, 15);
    glVertex2i(100, 15);
    glVertex2i(180, 15);
    glVertex2i(10, 145);
    glVertex2i(100, 15);
    glVertex2i(100, 15);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 900);
    glutCreateWindow("Quad");
    init();
    glutDisplayFunc(quad);
    glutMainLoop();
}