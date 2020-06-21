/*
 * OGL01Shape3D.cpp: 3D Shapes
 */
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

bool depan = true;

/* Initialize OpenGL Graphics */
void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClearDepth(1.0f);                   // Set background depth to farthest
	glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
	glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
	glShadeModel(GL_SMOOTH);   // Enable smooth shading
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

/* Handler for window-repaint event. Called back when the window first appears and
   whenever the window needs to be re-painted. */

void bottomSide() {
	glPushMatrix();
	glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-19.825f, 10.997f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 10.997f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, -6.1f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-19.825f, -6.1f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -5.272f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, -5.272f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.187f, -5.272f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -5.272f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.187f, -14.226f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -15.797f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -15.797f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -18.486f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -18.486f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.743f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -15.292f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.743f, -15.292f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 19.04f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.09f, 19.04f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.09f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 13.518f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.9f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-2.018f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 13.518f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(14.138f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.234f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.09f, 13.518f, 0.0f);
	glEnd();

	glPopMatrix();
}

void bottomSideFirstFloor(){
	glPushMatrix();
	glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-19.825f, 10.997f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 10.997f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, -6.1f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-19.825f, -6.1f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -5.272f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, -5.272f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.187f, -5.272f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -5.272f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.187f, -14.226f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -15.797f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -15.797f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -18.486f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -18.486f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.743f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -14.226f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -15.292f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.743f, -15.292f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.9f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-2.018f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 13.518f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(14.138f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.234f, 15.235f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, 13.518f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.09f, 13.518f, 0.0f);
	glEnd();

	glPopMatrix();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.83f, 0.64f);
	glVertex3f(-6.469f, 9.831f, 0.05f);
	glColor3f(0.9f, 0.83f, 0.64f);
	glVertex3f(3.668f, 2.466f, 0.05f);
	glColor3f(0.9f, 0.83f, 0.64f);
	glVertex3f(-0.204f, -9.45f, 0.05f);
	glColor3f(0.9f, 0.83f, 0.64f);
	glVertex3f(-12.734f, -9.45f, 0.05f);
	glColor3f(0.9f, 0.83f, 0.64f);
	glVertex3f(-16.606f, 2.466f, 0.05f);
	glEnd();
}

void frontSide() {
	//from rightest point and rigthest xyz area

	//1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, -11.08f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glEnd();
	//4
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glEnd();
	//5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glEnd();
	//6
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glEnd();
	//7
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 10.0f);
	glEnd();
	//8
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 10.0f);
	glEnd();
	//9
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glEnd();
	//10
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glEnd();
	//11
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glEnd();
}

void rightSide() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, 15.714f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, 15.714f, 10.0f);
	glEnd();
}

void backSide() {
	//1
	//gap 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, 15.714f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, 15.714f, 10.0f);
	glEnd();

	//window 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-17.408f, 15.713f, 9.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.848f, 15.713f, 9.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 9.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 9.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 10.0f);
	glEnd();

	//gap 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 10.0f);
	glEnd();

	//windows 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-13.934f, 15.713f, 9.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-15.375f, 15.713f, 9.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 9.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 9.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 10.0f);
	glEnd();

	//gap 3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 10.0f);
	glEnd();

	//2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.714f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.714f, 10.0f);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glEnd();
	//4
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glEnd();
	//5
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//6
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//7
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//8
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//9
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//10
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glEnd();
	//11
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, 6.017f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glEnd();

	glPushMatrix();
	glTranslatef(19.865f, 19.821f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.936f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.936f, -13.6f, 7.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(19.865f, 20.23f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.859f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.42f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.42f, -13.811f, 3.741f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.859f, -13.811f, 3.741f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.457f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.019f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.019f, -13.811f, 3.741f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.457f, -13.811f, 3.741f);
	glEnd();
	glPopMatrix();

	//1
//gap 1
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, 15.714f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, 15.714f, 10.0f);
	glEnd();

	//window 1
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 9.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 10.0f);
	glEnd();

	//gap 2
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 10.0f);
	glEnd();

	//windows 2
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 9.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 10.0f);
	glEnd();

	//gap 3
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 10.0f);
	glEnd();

	//2
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.714f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.714f, 10.0f);
	glEnd();
	//3
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glEnd();
	//4
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glEnd();
	//5
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//6
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//7
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//8
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//9
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//10
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glEnd();
	//11
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, 6.017f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glEnd();

	glPushMatrix();
	glTranslatef(19.865f, 19.821f, 0.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.936f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.936f, -13.6f, 7.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(19.865f, 20.23f, 0.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.859f, -13.811f, 3.259f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.42f, -13.811f, 3.259f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.42f, -13.811f, 3.741f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.859f, -13.811f, 3.741f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.457f, -13.811f, 3.259f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.019f, -13.811f, 3.259f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.019f, -13.811f, 3.741f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.457f, -13.811f, 3.741f);
	glEnd();
	glPopMatrix();
}

void backSideFirstFloor() {
	//1
	//gap 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, 15.714f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, 15.714f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, 15.714f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, 15.714f, 10.0f);
	glEnd();

	//window 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-17.408f, 15.713f, 9.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.848f, 15.713f, 9.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.848f, 15.713f, 9.0f);
	glEnd();

	//gap 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-17.408f, 15.713f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-17.408f, 15.713f, 10.0f);
	glEnd();

	//windows 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-13.934f, 15.713f, 9.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-15.375f, 15.713f, 9.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-15.375f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-13.934f, 15.713f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-13.934f, 15.713f, 9.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-15.375f, 15.713f, 9.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-15.375f, 15.713f, 10.0f);
	glEnd();

	//gap 3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.713f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-13.934f, 15.713f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.713f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-13.934f, 15.713f, 10.0f);
	glEnd();

	//2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.713f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 15.713f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.713f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 15.713f, 10.0f);
	glEnd();

	//3
	//gap 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-10.86f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-10.86f, 18.403f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-12.596f, 18.403f, 10.0f);
	glEnd();

	//door
	glBegin(GL_POLYGON);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 0.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 0.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 7.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 7.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 7.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-10.86f, 18.403f, 7.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.978f, 18.403f, 7.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.978f, 18.403f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-10.86f, 18.403f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-10.86f, 18.403f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-8.907f, 18.497f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-8.468f, 18.497f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-8.468f, 18.497f, 3.741f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-8.907f, 18.497f, 3.741f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.907f, 18.497f, 3.259f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.468f, 18.497f, 3.259f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.468f, 18.497f, 3.741f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.907f, 18.497f, 3.741f);
	glEnd();

	//gap 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.978f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.978f, 18.403f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-7.978f, 18.403f, 10.0f);
	glEnd();

	//4
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 18.403f, 10.0f);
	glEnd();
	//5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.242f, 15.209f, 10.0f);
	glEnd();
	//6
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 15.209f, 10.0f);
	glEnd();
	//7
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.647f, 14.143f, 10.0f);
	glEnd();
	//8
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 14.143f, 10.0f);
	glEnd();
	//9
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.283f, 5.19f, 10.0f);
	glEnd();
	//10
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 5.19f, 10.0f);
	glEnd();
	//11
	//gap 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, 6.017f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, 6.017f, 10.0f);
	glEnd();

	//window
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, 6.017f, 1.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, 6.017f, 1.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, 6.017f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, 6.017f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, 6.017f, 9.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, 6.017f, 9.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 9.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, 6.017f, 9.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, 6.017f, 9.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, 6.017f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, 6.017f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 9.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, 6.017f, 10.0f);
	glEnd();

	//gap 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, 6.017f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, 6.017f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, 6.017f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, 6.017f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, 6.017f, 10.0f);
	glEnd();
}

void leftSide() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, 6.017f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, -11.08f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, 6.017f, 10.0f);
	glEnd();
}

void topSide() {
	glPushMatrix();
	glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-19.825f, 10.997f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 10.997f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, -6.1f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-19.825f, -6.1f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 13.518f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, 13.518f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -5.272f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, -5.272f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.187f, -5.272f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -5.272f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -14.226f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.187f, -14.226f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -14.226f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -14.226f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, -15.797f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -15.797f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -14.226f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -14.226f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.692f, -18.486f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -18.486f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.743f, -14.226f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -14.226f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.338f, -15.292f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.743f, -15.292f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 19.04f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.09f, 19.04f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.09f, 13.518f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 13.518f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-5.9f, 15.235f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-2.018f, 15.235f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 13.518f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-7.84f, 13.518f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(14.138f, 15.235f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.234f, 15.235f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(20.282f, 13.518f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(12.09f, 13.518f, 10.0f);
	glEnd();

	glPopMatrix();
}

void frontSideFirstFloor() {
	//from rightest point and rigthest xyz area
	//1
	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(19.921f, -11.08f, 0.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(19.921f, -11.08f, 10.0f);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();

	float frontLine = 0.0f;
	for (int i = 0; i < 34; i++)
	{
		glBegin(GL_LINES);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(7.936f, -11.1f, frontLine);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f(19.921f, -11.1f, frontLine);
		glEnd();
		frontLine += 0.3f;
	}

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, -11.08f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glEnd();
	//4
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glEnd();
	//5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glEnd();
	//6
	//gap1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-3.055f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glEnd();

	//door
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-8.818f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-3.055f, -13.6f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(0.76f, 0.47f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.055f, -13.6f, 7.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.936f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.936f, -13.6f, 7.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.859f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.42f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.42f, -13.811f, 3.741f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-6.859f, -13.811f, 3.741f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.457f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.019f, -13.811f, 3.259f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.019f, -13.811f, 3.741f);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex3f(-5.457f, -13.811f, 3.741f);
	glEnd();
	//gap 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-8.818f, -13.6f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-8.818f, -13.6f, 10.0f);
	glEnd();
	//7
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glEnd();
	//8
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glEnd();
	//9
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glEnd();
}

void frontSideSecondFloor() {
	//from rightest point and rigthest xyz area
	//1
	//gap 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();

	//window
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 1.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 1.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 2.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 2.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 2.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 2.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 3.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 3.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 3.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 3.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 4.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 4.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 4.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 4.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 5.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 5.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 5.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 5.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 6.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 6.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 6.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 6.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 7.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 7.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 7.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 7.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(18.576f, -11.08f, 8.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(9.282f, -11.08f, 8.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 8.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 8.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(9.282f, -11.08f, 10.0f);
	glEnd();

	////gap 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(19.921f, -11.08f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(18.576f, -11.08f, 10.0f);
	glEnd();
	//2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glEnd();
	//4
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glEnd();
	//6
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glEnd();

	float frontLine = 0.0f;
	for (int i = 0; i < 34; i++)
	{
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.098f, -13.6f, frontLine);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.098f, -19.123f, frontLine);
		glEnd();
		frontLine += 0.3f;
	}
	//7
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.096f, -19.123f, 10.0f);
	glEnd();

	float frontLine2 = 0.0f;
	for (int i = 0; i < 34; i++)
	{
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.096f, -19.125f, frontLine2);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(-11.994f, -19.125f, frontLine2);
		glEnd();
		frontLine2 += 0.3f;
	}
	//8
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -19.123f, 10.0f);
	glEnd();

	float frontLine3 = 0.0f;
	for (int i = 0; i < 34; i++)
	{
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(-11.996f, -19.123f, frontLine3);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(-11.996f, -13.6f, frontLine3);
		glEnd();
		frontLine3 += 0.3f;
	}
	//9
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glEnd();
	//10
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//11
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-20.186f, -13.6f, 10.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glEnd();

	//from rightest point and rigthest xyz area
	//1
	//gap 1
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();

	//window
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 1.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 1.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 2.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 2.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 2.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 2.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 3.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 3.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 3.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 3.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 4.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 4.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 4.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 4.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 5.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 5.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 5.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 5.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 6.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 6.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 6.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 6.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 7.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 7.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 8.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 8.0f);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 8.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 8.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(9.282f, -11.08f, 10.0f);
	glEnd();

	////gap 2
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(19.921f, -11.08f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(18.576f, -11.08f, 10.0f);
	glEnd();
	//2
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -11.08f, 10.0f);
	glEnd();
	//3
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.936f, -13.6f, 10.0f);
	glEnd();
	//4
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.996f, -15.317f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//5
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.114f, -15.317f, 10.0f);
	glEnd();
	//6
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -19.123f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -19.123f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -13.6f, 10.0f);
	glEnd();

	float frontLineL = 0.0f;
	for (int i = 0; i < 34; i++)
	{
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.098f, -13.6f, frontLineL);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.098f, -19.123f, frontLineL);
		glEnd();
		frontLineL += 0.3f;
	}
	//7
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -19.123f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -19.123f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -19.123f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.096f, -19.123f, 10.0f);
	glEnd();

	float frontLineL2 = 0.0f;
	for (int i = 0; i < 34; i++)
	{
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.096f, -19.125f, frontLineL2);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(-11.994f, -19.125f, frontLineL2);
		glEnd();
		frontLineL2 += 0.3f;
	}
	//8
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -19.123f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -19.123f, 10.0f);
	glEnd();

	float frontLineL3 = 0.0f;
	for (int i = 0; i < 34; i++)
	{
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(-11.996f, -19.123f, frontLineL3);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(-11.996f, -13.6f, frontLineL3);
		glEnd();
		frontLineL3 += 0.3f;
	}
	//9
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-11.994f, -13.6f, 10.0f);
	glEnd();
	//10
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-14.042f, -15.317f, 10.0f);
	glEnd();
	glDisable(GL_BLEND);
	//11
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, -13.6f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-20.186f, -13.6f, 10.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-18.138f, -15.317f, 10.0f);
	glEnd();
}

void leftFence() {
	//main fence
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, 25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, 25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, -25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, -25.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, 25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, -25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, -25.0f, 3.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, 25.0f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, 25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, 25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, 25.0f, 3.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, 25.0f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, -25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, -25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, -25.0f, 3.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-23.5f, -25.0f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, -25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, 25.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, 25.0f, 3.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-25.0f, -25.0f, 3.0f);
	glEnd();

	//secondary fence (top)
	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, 25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, 25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, -25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, -25.25f, 2.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, 25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, 25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, 25.25f, 3.0f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, 25.25f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, 25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, -25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, -25.25f, 3.0f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, 25.25f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, -25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, -25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, -25.25f, 3.0f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, -25.25f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, -25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, 25.25f, 2.5f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, 25.25f, 3.0f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, -25.25f, 3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, 25.25f, 3.0f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, 25.25f, 3.0f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-23.25f, -25.25f, 3.0f);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex3f(-25.25f, -25.25f, 3.0f);
	glEnd();
}

void topFence() {
	glPushMatrix();
	glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
	glTranslatef(48.5f, 0.0f, 0.0f);
	leftFence();
	glPopMatrix();
}

void bottomFence() {
	glPushMatrix();
	glScalef(0.25f, 1.0f, 1.0f);
	glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
	glTranslatef(0.0f, 75.0f, 0.0f);
	leftFence();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.55f, 1.0f, 1.0f);
	glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
	glTranslatef(0.0f, -20.0f, 0.0f);
	leftFence();
	glPopMatrix();
}

void rightFence() {
	glPushMatrix();
	glTranslatef(48.5f, 0.0f, 0.0f);
	leftFence();
	glPopMatrix();
}

void secondFloor() {
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 10.0f);
	bottomSide();
	rightSide();
	backSide();
	leftSide();
	topSide();
	frontSideSecondFloor();
	glPopMatrix();
}

void firstFloor() {
	bottomSideFirstFloor();
	rightSide();
	leftSide();
	topSide();
	backSideFirstFloor();
	frontSideFirstFloor();
}

void middle() {
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 9.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 10.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 10.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 10.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 10.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 10.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 10.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 10.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 9.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 10.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 10.0f);
	glEnd();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-6.242f, 17.3f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(19.921f, 17.3f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(19.921f, 17.3f, 12.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(-6.242f, 17.3f, 12.0f);
	glEnd();
	glDisable(GL_BLEND);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBegin(GL_POLYGON);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(19.921f, 17.3f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(19.921f, 6.017f, 10.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(19.921f, 6.017f, 12.0f);
	glColor4f(0.498f, 0.858f, 1.0f, 0.6f);
	glVertex3f(19.921f, 17.3f, 12.0f);
	glEnd();
	glDisable(GL_BLEND);
}

void roof() {
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 20.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 20.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 20.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 20.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 20.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 20.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 20.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 20.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, 18.403f, 20.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 20.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(21.089f, -19.123f, 20.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 20.0f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, 18.403f, 20.5f);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-21.354f, -19.123f, 20.5f);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
	leftFence();
	topFence();
	rightFence();
	bottomFence();
	roof();
	firstFloor();
	secondFloor();
	middle();
	glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
}

/* Handler for window re-size event. Called back when the window first appears and
   whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
   // Compute aspect ratio of the new window
	if (height == 0) height = 1;                // To prevent divide by 0
	GLfloat aspect = (GLfloat)width / (GLfloat)height;

	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);

	// Set the aspect ratio of the clipping volume to match the viewport
	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
	glLoadIdentity();             // Reset
	// Enable perspective projection with fovy, aspect, zNear and zFar
	gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
		//gerak ke kiri
	case 'b':
	case 'B':
		depan = false;
		break;
		//gerak ke kiri
	case 'v':
	case 'V':
		depan = true;
		break;
		//gerak ke kiri
	case 'a':
	case 'A':
		glTranslatef(-1.0, 0.0, 0.0);
		break;
		//gerak ke kanan
	case 'd':
	case 'D':
		glTranslatef(1.0, 0.0, 0.0);
		break;
		//gerak ke depan
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 1.0);
		break;
		//gerak ke belakang
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -1.0);
		break;
		//gerak ke atas
	case 'q':
	case 'Q':
		glTranslatef(0.0, 1.0, 0.0);
		break;
		//gerak ke bawah
	case 'e':
	case 'E':
		glTranslatef(0.0, -1.0, 0.0);
		break;
		//rotate ke kiri
	case 'j':
	case 'J':
		glRotatef(1.0, 0.0, -5.0, 0.0);
		break;
		//rotate ke kanan
	case 'l':
	case 'L':
		glRotatef(1.0, 0.0, 5.0, 0.0);
		break;
		//rotate ke samping kanan
	case 'i':
	case 'I':
		glRotatef(1.0, 0.0, 0.0, -5.0);
		break;
		//rotate ke samping kiri
	case 'k':
	case 'K':
		glRotatef(1.0, 0.0, 0.0, 5.0);
		break;
		//rotate ke atas
	case 'o':
	case 'O':
		glRotatef(1.0, -5.0, 0.0, 0.0);
		break;
		//rotate ke bawah
	case 'u':
	case 'U':
		glRotatef(1.0, 5.0, 0.0, 0.0);
		break;
	}
	display();
	//glutPostRedisplay(); 
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
	glutInit(&argc, argv);            // Initialize GLUT
	glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
	glutInitWindowSize(1366, 768);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutCreateWindow("Latihan 3D");          // Create window with the given title
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	glutReshapeFunc(reshape);       // Register callback handler for window re-size event
	glutKeyboardFunc(keyboard);
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the infinite event-processing loop
	return 0;
}