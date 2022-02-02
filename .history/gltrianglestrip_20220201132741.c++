#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init(void){
    glClearColor(1.0,1.0,0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,200.0,0.0,150.0);

}

void triangleStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.4,1.0);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2i(10, 100);
    glVertex2i(10, 150);
    glVertex2i(30, 80);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2i(30, 50);
    glVertex2i(50, 20);
    glVertex2i(80, 10);

    glEnd();
    glFlush();

}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800,900);
    glutCreateWindow("trial");
    init();
    glutDisplayFunc(triangleStrip);
    glutMainLoop();
}