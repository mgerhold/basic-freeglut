#include <GL/freeglut.h>
#include <GL/gl.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex2f(-0.5, -0.5);
    glColor3f(0.0, 1.0, 0.0); // Green
    glVertex2f(0.5, -0.5);
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex2f(0.0, 0.5);
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL with FreeGLUT");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
