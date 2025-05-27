#include <GL/freeglut.h>
#include <cmath>

void drawShapes() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0); // Red
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.8f, 0.2f);
        glVertex2f(-0.6f, 0.6f);
        glVertex2f(-0.4f, 0.2f);
    glEnd();

    glColor3f(0.0, 1.0, 0.0); // Green
    glBegin(GL_QUADS);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f( 0.2f, 0.2f);
        glVertex2f( 0.2f, 0.6f);
        glVertex2f(-0.2f, 0.6f);
    glEnd();

    glColor3f(0.0, 0.0, 1.0); // Blue
    float x = 0.6f, y = 0.4f, r = 0.2f;
    int num_segments = 100;
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; ++i) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float dx = r * cosf(theta);
        float dy = r * sinf(theta);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Basic OpenGL Shapes");
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(drawShapes);
    glutMainLoop();
    return 0;
}
