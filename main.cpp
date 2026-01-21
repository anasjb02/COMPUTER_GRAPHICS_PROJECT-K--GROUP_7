#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cmath>
#include <ctime>
#include <iostream>

using namespace std;

void init() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-20.00f, 20.00f, -10.00f, 15.00f, -1.00f, 1.00f);
    glMatrixMode(GL_MODELVIEW);
}


void mountain1() {
    glBegin(GL_POLYGON);
    glColor3ub(165, 212, 196);
    glVertex2f(-20.00f, 10.16f);
    glVertex2f(-18.96f, 10.97f);
    glVertex2f(-18.67f, 11.07f);
    glVertex2f(-18.33f, 11.09f);
    glVertex2f(-18.00f, 11.00f);
    glVertex2f(-17.74f, 10.84f);
    glVertex2f(-17.57f, 10.66f);
    glVertex2f(-17.26f, 10.14f);
    glVertex2f(-17.03f, 9.94f);
    glVertex2f(-16.80f, 9.86f);
    glVertex2f(-16.54f, 9.83f);
    glVertex2f(-16.29f, 9.91f);
    glVertex2f(-12.73f, 12.96f);
    glVertex2f(-20.00f, 3.82f);
    glEnd();
}

void mountain2() {
    glBegin(GL_POLYGON);
    glColor3ub(165, 201, 163);
    glVertex2f(-20.00f, 3.82f);
    glVertex2f(-12.73f, 12.96f);
    glVertex2f(-12.22f, 13.24f);
    glVertex2f(-11.73f, 13.36f);
    glVertex2f(-11.35f, 13.40f);
    glVertex2f(-10.91f, 13.37f);
    glVertex2f(-10.34f, 13.15f);
    glVertex2f(-7.90f, 9.38f);
    glVertex2f(-7.35f, 8.17f);
    glVertex2f(-6.81f, 5.28f);
    glEnd();
}

void mountain3() {
    glBegin(GL_POLYGON);
    glColor3ub(164, 205, 173);
    glVertex2f(-6.81f, 5.28f);
    glVertex2f(-7.35f, 8.17f);
    glVertex2f(-7.90f, 9.38f);
    glVertex2f(-10.34f, 13.15f);
    glVertex2f(-8.13f, 12.13f);
    glVertex2f(-4.34f, 10.86f);
    glVertex2f(-1.82f, 9.18f);
    glVertex2f(-12.22f, 13.24f);
    glVertex2f(-0.16f, 7.33f);
    glVertex2f(0.97f, 6.83f);
    glVertex2f(2.72f, 6.65f);
    glVertex2f(3.43f, 6.55f);
    glVertex2f(4.13f, 6.25f);
    glVertex2f(5.76f, 4.66f);
    glVertex2f(7.00f, 4.00f);
    glVertex2f(8.98f, 3.63f);
    glVertex2f(11.05f, 2.47f);
    glVertex2f(11.09f, 1.20f);
    glVertex2f(4.60f, 1.20f);
    glVertex2f(2.69f, 2.94f);
    glVertex2f(1.75f, 3.37f);
    glVertex2f(0.84f, 3.89f);
    glVertex2f(-0.43f, 4.26f);
    glVertex2f(-1.41f, 4.40f);
    glVertex2f(-2.12f, 4.46f);
    glVertex2f(-3.50f, 4.50f);
    glVertex2f(-4.06f, 4.63f);
    glEnd();
}

void mountain4() {
    glBegin(GL_POLYGON);
    glColor3ub(165, 211, 191);
    glVertex2f(-4.34f, 10.86f);
    glVertex2f(-1.82f, 9.18f);
    glVertex2f(-12.22f, 13.24f);
    glVertex2f(-0.16f, 7.33f);
    glVertex2f(0.97f, 6.83f);
    glVertex2f(2.72f, 6.65f);
    glVertex2f(3.43f, 6.55f);
    glVertex2f(4.13f, 6.25f);
    glVertex2f(5.76f, 4.66f);
    glVertex2f(7.00f, 4.00f);
    glVertex2f(8.98f, 3.63f);
    glVertex2f(11.05f, 2.47f);
    glVertex2f(16.42f, 2.48f);
    glVertex2f(13.12f, 3.52f);
    glVertex2f(12.81f, 3.81f);
    glVertex2f(12.52f, 4.17f);
    glVertex2f(12.00f, 4.50f);
    glVertex2f(10.76f, 4.97f);
    glVertex2f(8.98f, 5.38f);
    glVertex2f(8.66f, 5.55f);
    glVertex2f(7.72f, 6.31f);
    glVertex2f(6.68f, 7.10f);
    glVertex2f(6.07f, 7.45f);
    glVertex2f(5.41f, 7.73f);
    glVertex2f(2.91f, 7.95f);
    glVertex2f(1.79f, 8.16f);
    glVertex2f(1.05f, 8.42f);
    glVertex2f(0.33f, 8.94f);
    glVertex2f(-1.40f, 9.77f);
    glEnd();
}

void backside_Field_Left() {
    glBegin(GL_POLYGON);
    glColor3ub(80, 110, 65);
    glVertex2f(-20.00f, 1.20f);
    glVertex2f(4.60f, 1.21f);
    glVertex2f(2.69f, 2.95f);
    glVertex2f(1.75f, 3.38f);
    glVertex2f(0.84f, 3.9f);
    glVertex2f(-0.43f, 4.27f);
    glVertex2f(-1.41f, 4.41f);
    glVertex2f(-2.12f, 4.47f);
    glVertex2f(-3.50f, 4.51f);
    glVertex2f(-4.06f, 4.63f);
    glVertex2f(-4.78f, 4.81f);
    glVertex2f(-6.81f, 5.29f);
    glVertex2f(-8.50f, 5.51f);
    glVertex2f(-11.33f, 5.63f);
    glVertex2f(-13.80f, 5.81f);
    glVertex2f(-15.46f, 5.95f);
    glVertex2f(-16.32f, 6.1f);
    glVertex2f(-18.95f, 6.61f);
    glVertex2f(-20.00f, 6.75f);
    glEnd();
}

void backside_Field_With_Trees_Right() {
    glColor3ub(127, 155, 70);
    glBegin(GL_POLYGON);
    glVertex2f(2.69f, 2.95f);
    glVertex2f(4.60f, 1.21f);
    glVertex2f(20.00f, 1.21f);
    glVertex2f(20.00f, 3.36f);
    glVertex2f(16.57f, 3.26f);
    glVertex2f(11.23f, 2.92f);
    glVertex2f(8.68f, 2.69f);
    glVertex2f(6.12f, 3.41f);
    glEnd();

    glColor3ub(93, 134, 66);
    glBegin(GL_POLYGON);
    glVertex2f(4.02f, 3.22f);
    glVertex2f(3.65f, 2.90f);
    glVertex2f(3.87f, 2.29f);
    glVertex2f(3.75f, 1.84f);
    glVertex2f(4.26f, 1.41f);
    glVertex2f(4.89f, 1.73f);
    glVertex2f(5.08f, 2.70f);
    glVertex2f(4.31f, 3.23f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(5.46f, 3.75f);
    glVertex2f(5.08f, 2.70f);
    glVertex2f(4.89f, 1.73f);
    glVertex2f(5.08f, 1.49f);
    glVertex2f(5.60f, 1.52f);
    glVertex2f(5.95f, 1.76f);
    glVertex2f(5.89f, 2.50f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(6.22f, 3.29f);
    glVertex2f(5.89f, 2.50f);
    glVertex2f(5.95f, 1.76f);
    glVertex2f(5.60f, 1.52f);
    glVertex2f(6.09f, 1.32f);
    glVertex2f(6.58f, 1.42f);
    glVertex2f(6.50f, 2.00f);
    glVertex2f(6.41f, 2.66f);
    glVertex2f(6.22f, 3.29f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(7.27f, 3.82f);
    glVertex2f(6.63f, 2.39f);
    glVertex2f(7.40f, 1.49f);
    glVertex2f(8.21f, 2.18f);
    glVertex2f(7.88f, 2.78f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(9.89f, 3.62f);
    glVertex2f(9.54f, 3.17f);
    glVertex2f(9.42f, 2.27f);
    glVertex2f(9.80f, 1.65f);
    glVertex2f(10.24f, 1.21f);
    glVertex2f(10.71f, 1.91f);
    glVertex2f(10.74f, 2.98f);
    glVertex2f(10.22f, 3.43f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(11.95f, 3.27f);
    glVertex2f(11.70f, 2.76f);
    glVertex2f(11.58f, 2.16f);
    glVertex2f(11.49f, 1.42f);
    glVertex2f(11.73f, 1.36f);
    glVertex2f(12.06f, 1.33f);
    glVertex2f(12.31f, 1.39f);
    glVertex2f(12.23f, 1.99f);
    glVertex2f(12.17f, 2.63f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(12.94f, 2.85f);
    glVertex2f(12.67f, 2.79f);
    glVertex2f(12.54f, 2.39f);
    glVertex2f(12.32f, 2.20f);
    glVertex2f(12.30f, 1.80f);
    glVertex2f(13.08f, 1.28f);
    glVertex2f(13.30f, 1.43f);
    glVertex2f(13.56f, 1.49f);
    glVertex2f(13.78f, 2.17f);
    glVertex2f(13.51f, 2.62f);
    glVertex2f(13.25f, 2.85f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(14.50f, 4.00f);
    glVertex2f(14.22f, 3.47f);
    glVertex2f(14.05f, 2.79f);
    glVertex2f(13.90f, 2.30f);
    glVertex2f(13.81f, 1.88f);
    glVertex2f(13.89f, 1.46f);
    glVertex2f(14.30f, 1.45f);
    glVertex2f(14.46f, 1.25f);
    glVertex2f(15.00f, 1.50f);
    glVertex2f(15.04f, 2.15f);
    glVertex2f(14.98f, 2.50f);
    glVertex2f(14.81f, 3.33f);
    glVertex2f(14.50f, 4.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(15.58f, 3.71f);
    glVertex2f(15.08f, 3.09f);
    glVertex2f(14.98f, 2.50f);
    glVertex2f(15.04f, 2.15f);
    glVertex2f(15.81f, 1.21f);
    glVertex2f(16.47f, 1.77f);
    glVertex2f(16.42f, 2.49f);
    glVertex2f(16.35f, 2.97f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(17.00f, 4.00f);
    glVertex2f(16.69f, 3.75f);
    glVertex2f(16.59f, 3.51f);
    glVertex2f(16.35f, 2.97f);
    glVertex2f(16.47f, 1.77f);
    glVertex2f(16.79f, 1.55f);
    glVertex2f(17.43f, 1.78f);
    glVertex2f(17.50f, 2.59f);
    glVertex2f(17.38f, 2.92f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(18.00f, 3.50f);
    glVertex2f(17.38f, 2.92f);
    glVertex2f(17.50f, 2.59f);
    glVertex2f(17.43f, 1.78f);
    glVertex2f(17.81f, 1.69f);
    glVertex2f(18.75f, 2.08f);
    glVertex2f(18.64f, 2.81f);
    glVertex2f(18.44f, 2.83f);
    glVertex2f(18.62f, 3.22f);
    glEnd();
}

void middle_ground_trees1() {
    glBegin(GL_POLYGON);
    glColor3ub(127, 155, 70);
    glVertex2f(-3.04f, 3.37f);
    glVertex2f(-3.28f, 2.51f);
    glVertex2f(-3.05f, 2.47f);
    glVertex2f(-2.85f, 2.55f);
    glVertex2f(-2.87f, 2.69f);
    glVertex2f(-2.93f, 3.04f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(127, 155, 70);
    glVertex2f(-2.63f, 3.69f);
    glVertex2f(-2.73f, 3.57f);
    glVertex2f(-2.93f, 3.04f);
    glVertex2f(-2.87f, 2.69f);
    glVertex2f(-2.72f, 2.52f);
    glVertex2f(-2.49f, 2.56f);
    glVertex2f(-2.35f, 2.82f);
    glVertex2f(-2.39f, 3.09f);
    glVertex2f(-2.49f, 3.51f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(127, 155, 70);
    glVertex2f(-2.07f, 3.77f);
    glVertex2f(-2.22f, 3.37f);
    glVertex2f(-2.35f, 2.82f);
    glVertex2f(-2.32f, 2.57f);
    glVertex2f(-1.87f, 2.54f);
    glVertex2f(-1.76f, 2.87f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(127, 155, 70);
    glVertex2f(-1.66f, 3.39f);
    glVertex2f(-1.76f, 2.87f);
    glVertex2f(-1.87f, 2.54f);
    glVertex2f(-1.68f, 2.46f);
    glVertex2f(-1.46f, 2.49f);
    glVertex2f(-1.47f, 2.59f);
    glVertex2f(-1.50f, 2.83f);
    glVertex2f(-1.53f, 3.10f);
    glEnd();
}


void middle_ground_trees2() {
    glBegin(GL_POLYGON);
    glColor3ub(127, 155, 70);
    glVertex2f(-5.53f, 4.24f);
    glVertex2f(-5.62f, 4.12f);
    glVertex2f(-5.83f, 3.64f);
    glVertex2f(-5.80f, 3.27f);
    glVertex2f(-5.65f, 3.10f);
    glVertex2f(-5.39f, 3.09f);
    glVertex2f(-5.26f, 3.47f);
    glVertex2f(-5.33f, 3.89f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(127, 155, 70);
    glVertex2f(-5.12f, 3.92f);
    glVertex2f(-5.26f, 3.47f);
    glVertex2f(-5.39f, 3.09f);
    glVertex2f(-5.13f, 3.01f);
    glVertex2f(-4.93f, 3.05f);
    glVertex2f(-4.51f, 3.08f);
    glVertex2f(-4.62f, 3.52f);
    glVertex2f(-4.68f, 3.86f);
    glVertex2f(-4.78f, 4.03f);
    glVertex2f(-4.96f, 3.40f);
    glEnd();
}

void little_house1() {
    glColor3ub(190, 82, 53);
    glBegin(GL_POLYGON);
    glVertex2f(-8.20f, 5.15f);
    glVertex2f(-8.40f, 4.70f);
    glVertex2f(-8.00f, 4.70f);
    glVertex2f(-7.77f, 5.15f);
    glEnd();
    glColor3ub(217, 135, 111);
    glBegin(GL_POLYGON);
    glVertex2f(-8.40f, 4.70f);
    glVertex2f(-8.40f, 4.20f);
    glVertex2f(-8.00f, 4.20f);
    glVertex2f(-8.00f, 4.70f);
    glEnd();
    glColor3ub(251, 239, 223);
    glBegin(GL_POLYGON);
    glVertex2f(-7.77f, 5.15f);
    glVertex2f(-8.00f, 4.70f);
    glVertex2f(-8.00f, 4.20f);
    glVertex2f(-7.60f, 4.22f);
    glVertex2f(-7.60f, 4.70f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-8.15f, 4.60f);
    glVertex2f(-8.15f, 4.40f);
    glVertex2f(-8.05f, 4.40f);
    glVertex2f(-8.05f, 4.60f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-8.30f, 4.60f);
    glVertex2f(-8.30f, 4.40f);
    glVertex2f(-8.20f, 4.40f);
    glVertex2f(-8.20f, 4.60f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-7.84f, 4.56f);
    glVertex2f(-7.84f, 4.22f);
    glVertex2f(-7.77f, 4.22f);
    glVertex2f(-7.70f, 4.56f);
    glEnd();
}


void little_house2() {
    glColor3ub(190, 82, 53);
    glBegin(GL_POLYGON);
    glVertex2f(-9.30f, 5.40f);
    glVertex2f(-9.40f, 5.20f);
    glVertex2f(-9.00f, 5.20f);
    glVertex2f(-8.90f, 5.40f);
    glEnd();
    glColor3ub(217, 135, 111);
    glBegin(GL_POLYGON);
    glVertex2f(-9.40f, 5.20f);
    glVertex2f(-9.40f, 4.84f);
    glVertex2f(-9.00f, 4.84f);
    glVertex2f(-9.00f, 5.20f);
    glEnd();
    glColor3ub(251, 239, 223);
    glBegin(GL_POLYGON);
    glVertex2f(-8.90f, 5.40f);
    glVertex2f(-9.00f, 5.20f);
    glVertex2f(-9.00f, 4.84f);
    glVertex2f(-8.80f, 4.85f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-8.95f, 5.05f);
    glVertex2f(-8.95f, 4.84f);
    glVertex2f(-8.85f, 4.85f);
    glVertex2f(-8.85f, 5.05f);
    glEnd();
}

void little_house3() {
    glColor3ub(190, 82, 53);
    glBegin(GL_POLYGON);
    glVertex2f(-11.10f, 5.45f);
    glVertex2f(-11.30f, 5.00f);
    glVertex2f(-10.90f, 5.00f);
    glVertex2f(-10.68f, 5.45f);
    glEnd();
    glColor3ub(217, 135, 111);
    glBegin(GL_POLYGON);
    glVertex2f(-11.30f, 5.00f);
    glVertex2f(-11.30f, 4.50f);
    glVertex2f(-10.90f, 4.50f);
    glVertex2f(-10.90f, 5.00f);
    glEnd();
    glColor3ub(251, 239, 223);
    glBegin(GL_POLYGON);
    glVertex2f(-10.68f, 5.45f);
    glVertex2f(-10.90f, 5.00f);
    glVertex2f(-10.90f, 4.50f);
    glVertex2f(-10.52f, 4.52f);
    glVertex2f(-10.52f, 5.00f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-11.05f, 4.85f);
    glVertex2f(-11.05f, 4.70f);
    glVertex2f(-10.95f, 4.70f);
    glVertex2f(-10.95f, 4.85f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-11.20f, 4.85f);
    glVertex2f(-11.20f, 4.70f);
    glVertex2f(-11.10f, 4.70f);
    glVertex2f(-11.10f, 4.85f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-10.75f, 4.80f);
    glVertex2f(-10.75f, 4.51f);
    glVertex2f(-10.65f, 4.51f);
    glVertex2f(-10.65f, 4.80f);
    glEnd();
}


void little_house4() {
    glColor3ub(190, 82, 53);
    glBegin(GL_POLYGON);
    glVertex2f(-13.40f, 5.00f);
    glVertex2f(-13.50f, 4.80f);
    glVertex2f(-13.10f, 4.80f);
    glVertex2f(-13.00f, 5.00f);
    glEnd();
    glColor3ub(217, 135, 111);
    glBegin(GL_POLYGON);
    glVertex2f(-13.50f, 4.80f);
    glVertex2f(-13.50f, 4.40f);
    glVertex2f(-13.10f, 4.40f);
    glVertex2f(-13.10f, 4.80f);
    glEnd();
    glColor3ub(251, 239, 223);
    glBegin(GL_POLYGON);
    glVertex2f(-13.00f, 5.00f);
    glVertex2f(-13.10f, 4.80f);
    glVertex2f(-13.10f, 4.40f);
    glVertex2f(-12.87f, 4.41f);
    glVertex2f(-12.88f, 4.80f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-13.04f, 4.64f);
    glVertex2f(-13.04f, 4.44f);
    glVertex2f(-12.94f, 4.41f);
    glVertex2f(-12.94f, 4.64f);
    glEnd();
}


void display() {
glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    mountain1();
    mountain2();
    mountain3();
    mountain4();
    backside_Field_Left();
    backside_Field_With_Trees_Right();
    middle_ground_trees1();
    middle_ground_trees2();
    little_house1();
    little_house2();
    little_house3();
    little_house4();
    glutSwapBuffers();

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Village Scenery");
    srand((unsigned int)time(0));
    init();

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
