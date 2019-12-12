#include <windows.h>
#include <GL/glut.h>
#include <cmath>
# define PI 3.14159265358979323846
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat j=0.0f;



void update(int value) {
    if(position <-1.0 )
        position = 2.7f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(500, update, 0);
}
void sun()
{
    glPushMatrix();
glTranslatef(0.0f,position, 0.0f);
     glColor3ub(255,128,0); // Set background color to black and opaque
	//glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	int i;

	GLfloat x=-.7f; GLfloat y=.7f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();
	glPopMatrix();
}



void CarBody()
{
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-1.1,-0.8);
	glVertex2f(-0.5,-0.8);
	glVertex2f(-0.5,-0.3);
	glVertex2f(-1.1,-0.3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-1.15,-0.75);
	glVertex2f(-0.55,-0.75);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-1.15,-0.25);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255,0,0);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-0.58,-0.3);
	glVertex2f(-0.5,-0.3);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255,0,0);
	glVertex2f(-1.15,-0.75);
	glVertex2f(-1.0,-0.75);
	glVertex2f(-1.12,-0.8);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220,20,60);
	glVertex2f(-1.15,-0.55);
	glVertex2f(-0.55,-0.55);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-1.15,-0.25);
	glEnd();

    //car window left
	glBegin(GL_QUADS);
	glColor3ub(0,255,0);
	glVertex2f(-1.0,-0.35);
	glVertex2f(-1.0,-0.50);
	glVertex2f(-0.85,-0.50);
	glVertex2f(-0.85,-0.35);
	glEnd();

    //car window right
	glBegin(GL_QUADS);
	glColor3ub(0,255,0);
	glVertex2f(-0.75,-0.35);
	glVertex2f(-0.75,-0.50);
	glVertex2f(-0.60,-0.50);
	glVertex2f(-0.60,-0.35);
	glEnd();

    /*GLfloat thikness = 7.0;
    glLineWidth(thikness);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-1.0,-0.1);
	glVertex2f(-1.0,-0.25);
	glEnd();
    thikness = 8.0;
    glLineWidth(thikness);

    glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.55,-0.7);
	glVertex2f(-0.4,-0.7);
	glEnd();

	thikness = 1.0;
    glLineWidth(thikness);*/
glPopMatrix();

}
void CarWheel()
{
	glColor3ub(0,0,0);
	GLfloat x=-1.0f; GLfloat y=-0.85f; GLfloat radius = 0.1f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

    glColor3ub(0,0,0);
    x=-0.6f;y=-0.85f;radius = 0.1f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

    glEnd();
   glPopMatrix();



}

void round()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-.40f; GLfloat y=1.66f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp1()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-0.675f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp2()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-0.975f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp3()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-1.275f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}
void roundp4()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-1.575f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp5()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-1.875f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}
/*void Translate_tree()
{
    glScalef(0.4,0.4,0);
    glTranslatef(-2.0,-0.1,0);
    glBegin(GL_QUADS);
	glColor3ub(80,76,76);
	glVertex2f(1.6,0.4);
	glVertex2f(1.6,0.0);
	glVertex2f(1.7,0.0);
	glVertex2f(1.7,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(4,130,12);
	glVertex2f(1.65,0.8);
	glVertex2f(1.4,0.4);
	glVertex2f(1.9,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(4,130,12);
	glVertex2f(1.65,1.1);
	glVertex2f(1.43,0.59);
	glVertex2f(1.87,0.59);
	glEnd();

	glLoadIdentity();


	//left

    glScalef(0.6,0.6,0);
    glTranslatef(-3.0,-0.1,0);
    glBegin(GL_QUADS);
	glColor3ub(80,76,76);
	glVertex2f(1.6,0.4);
	glVertex2f(1.6,0.0);
	glVertex2f(1.7,0.0);
	glVertex2f(1.7,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(4,130,12);
	glVertex2f(1.65,0.8);
	glVertex2f(1.4,0.4);
	glVertex2f(1.9,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(4,130,12);
	glVertex2f(1.65,1.1);
	glVertex2f(1.43,0.59);
	glVertex2f(1.87,0.59);
	glEnd();

	glLoadIdentity();
}
*/


//CLOCK
void clock(){


    glColor3ub(255,250,205);
GLfloat x=-0.4f; GLfloat y=.9f; GLfloat radius =.1f;
	int i;

	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();



        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,0.8);
        glVertex2f(-0.4,0.83);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.3,0.9);
        glVertex2f(-0.33,0.9);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,1.0);
        glVertex2f(-0.4,.97);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.5,.9);
        glVertex2f(-.47,.9);
        glEnd();


        //sec
        glTranslatef(0,0,0);
        glPushMatrix();
        glRotatef(j,0,0,1.0);
        GLfloat thik=2.0;
       glLineWidth(thik);
        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,0.9);
        glVertex2f(-.43,0.82);
        glEnd();
       // glLoadIdentity();

       // glPopMatrix();
        //j+=0.5f;




        //min

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,0.9);
        glVertex2f(-.35,.82);
        glEnd();

        //hour

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,0.9);
        glVertex2f(-0.4,.95);
        glEnd();


}




void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(-2,2,-2,2);


    //sky
    glBegin(GL_QUADS);
	glColor3ub(135,206,235);
	glVertex2f(-2.0,2.0);
	glVertex2f(-2.0,-0.6);
	glVertex2f(2.0, -0.6);
	glVertex2f(2.0,2.0);
	glEnd();

    sun();

	// ROAD
	glBegin(GL_QUADS);
	glColor3ub(47,79,79);
	glVertex2f(-2.0,-0.6);
glVertex2f(-2.0,-2.0);
	glVertex2f(2.0,-2.0);
	glVertex2f(2.0,-0.6);
	glEnd();


    //CLOCK TOWER
	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.5,-0.6);
	glVertex2f(-0.5,0.7);
	glVertex2f(-0.3,0.7);
	glVertex2f(-0.3,-0.6);
	glEnd();

    //vertical; line
    GLfloat thikness1=6.0;
    glLineWidth(thikness1);
	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.45,-0.6);
	glVertex2f(-.45,0.7);
	glEnd();
    thikness1 = 6.0;
    glLineWidth(thikness1);

	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.4,-0.6);
	glVertex2f(-.4,0.7);
	glEnd();
    thikness1 = 6.0;
    glLineWidth(thikness1);


	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.35,-0.6);
	glVertex2f(-.35,0.7);
	glEnd();
    thikness1 = 6.0;
    glLineWidth(thikness1);

    //horizontal
	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,-0.35);
	glVertex2f(-0.3,-0.35);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);

    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,-0.30);
	glVertex2f(-0.3,-0.30);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);


    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.0);
	glVertex2f(-0.3,0.0);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);

    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.05);
	glVertex2f(-0.3,0.05);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);


   glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.35);
	glVertex2f(-0.3,0.35);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);

   glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.40);
	glVertex2f(-0.3,0.40);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);



    glBegin(GL_QUADS);
	glColor3ub(205,133,63);
	glVertex2f(-0.55,0.7);
	glVertex2f(-0.55,1.1);
	glVertex2f(-0.25,1.1);
	glVertex2f(-0.25,0.7);
	glEnd();


clock();


	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.5,1.1);
	glVertex2f(-0.5,1.2);
	glVertex2f(-0.3,1.2);
	glVertex2f(-0.3,1.1);
	glEnd();

    GLfloat thikness2=6.0;
    glLineWidth(thikness2);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.45,1.1);
	glVertex2f(-.45,1.2);
	glEnd();
    thikness2 = 6.0;
    glLineWidth(thikness2);


glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.4,1.1);
	glVertex2f(-.4,1.2);
	glEnd();
    thikness2 = 6.0;
    glLineWidth(thikness2);


	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.35,1.1);
	glVertex2f(-.35,1.2);
	glEnd();
    thikness2 = 6.0;
    glLineWidth(thikness2);


    glBegin(GL_QUADS);
	glColor3ub(70,130,180);
	glVertex2f(-0.5,1.2);
	glVertex2f(-0.45,1.3);
	glVertex2f(-0.35,1.3);
	glVertex2f(-0.3,1.2);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-0.46,1.3);
	glVertex2f(-0.46,1.34);
	glVertex2f(-0.34,1.34);
	glVertex2f(-0.34,1.3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.45,1.34);
	glVertex2f(-0.45,1.44);
	glVertex2f(-0.35,1.44);
	glVertex2f(-0.35,1.34);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-0.45,1.44);
	glVertex2f(-0.40,1.56);
	glVertex2f(-0.35,1.44);
	glEnd();

   GLfloat thikness = 4.0;
    glLineWidth(thikness);
	glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-.40,1.56);
	glVertex2f(-0.40,1.66);
	glEnd();

    //Building
    glBegin(GL_QUADS);
	glColor3ub(70,130,180);
	glVertex2f(-0.5,0.4);
	glVertex2f(-2.0,0.4);
	glVertex2f(-2.0,0.2);
	glVertex2f(-0.5,0.2);
	glEnd();

     GLfloat thikness3 = 7.0;
    glLineWidth(thikness3);
	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,0.215);
	glVertex2f(-2.0,0.215);
	glEnd();
     thikness3 = 7.0;
    glLineWidth(thikness3);



  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
	glVertex2f(-0.5,0.2);
	glVertex2f(-2.0,0.2);
	glVertex2f(-2.0,-0.6);
	glVertex2f(-0.5,-0.6);
	glEnd();

//bet clock tower & 1rst piller

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.63,0.225);
	glVertex2f(-0.63,0.3);
	glVertex2f(-0.53,0.3);
	glVertex2f(-0.53,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-0.56,0.225);
	glVertex2f(-0.56,0.35);
	glVertex2f(-0.60,0.35);
	glVertex2f(-0.60,0.225);
	glEnd();

	//struct between lines
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.63,-0.065);
	glVertex2f(-0.63,0.028);
	glVertex2f(-0.53,0.028);
	glVertex2f(-0.53,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-0.56,-.065);
	glVertex2f(-0.56,0.085);
	glVertex2f(-0.60,0.085);
	glVertex2f(-0.60,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.63,-0.366);
	glVertex2f(-0.63,-0.265);
	glVertex2f(-0.53,-0.265);
	glVertex2f(-0.53,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-0.56,-.366);
	glVertex2f(-0.56,-.209);
	glVertex2f(-0.60,-0.209);
	glVertex2f(-0.60,-.366);
	glEnd();
// lines & structures of the buildings
glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,0.155);
	glVertex2f(-2.0,0.155);
	glEnd();


glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.08);
	glVertex2f(-2.0,-0.08);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.15);
	glVertex2f(-2.0,-0.15);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.08);
	glVertex2f(-2.0,-0.08);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.38);
	glVertex2f(-2.0,-0.38);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.45);
	glVertex2f(-2.0,-0.45);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.582);
	glVertex2f(-2.0,-0.582);
	glEnd();


    //small pillaers
    glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.7,-0.6);
	glVertex2f(-0.7,0.45);
	glVertex2f(-0.65,0.45);
	glVertex2f(-0.65,-0.6);
	glEnd();

	GLfloat thiknessinside=5.0;
    glLineWidth(thiknessinside);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.675,-0.6);
	glVertex2f(-.675,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-0.71,0.45);
	glVertex2f(-0.71,0.47);
	glVertex2f(-0.64,0.47);
	glVertex2f(-0.64,0.45);
	glEnd();

glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-0.7,0.47);
	glVertex2f(-0.7,0.55);
	glVertex2f(-0.65,0.55);
	glVertex2f(-0.65,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-0.7,0.55);
	glVertex2f(-0.675,0.65);
	glVertex2f(-0.65,0.55);
    glEnd();


    GLfloat thiknessp1=2.0;
    glLineWidth(thiknessp1);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-.675,0.65);
	glVertex2f(-.675,0.75);
	glEnd();



	// struct betwwen pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.88,0.225);
	glVertex2f(-0.88,0.3);
	glVertex2f(-0.78,0.3);
	glVertex2f(-0.78,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-0.81,0.225);
	glVertex2f(-0.81,0.35);
	glVertex2f(-0.85,0.35);
	glVertex2f(-0.85,0.225);
	glEnd();

//struct between lines
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.88,-0.065);
	glVertex2f(-0.88,0.028);
	glVertex2f(-0.78,0.028);
	glVertex2f(-0.78,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-0.81,-.065);
	glVertex2f(-0.81,0.085);
	glVertex2f(-0.85,0.085);
	glVertex2f(-0.85,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.88,-0.366);
	glVertex2f(-0.88,-0.265);
	glVertex2f(-0.78,-0.265);
	glVertex2f(-0.78,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-0.81,-.366);
	glVertex2f(-0.81,-.209);
	glVertex2f(-0.85,-0.209);
	glVertex2f(-0.85,-.366);
	glEnd();

  //2nd small piller
  glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.95,-0.6);
	glVertex2f(-0.95,0.45);
	glVertex2f(-1.0,0.45);
	glVertex2f(-1.0,-0.6);
	glEnd();


GLfloat thiknessinside1=5.0;
    glLineWidth(thiknessinside1);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.975,-0.6);
	glVertex2f(-.975,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-0.94,0.45);
	glVertex2f(-0.94,0.47);
	glVertex2f(-1.01,0.47);
	glVertex2f(-1.01,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-0.95,0.47);
	glVertex2f(-0.95,0.55);
	glVertex2f(-1.0,0.55);
	glVertex2f(-1.0,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-0.95,0.55);
	glVertex2f(-0.975,0.65);
	glVertex2f(-1.0,0.55);
    glEnd();


   GLfloat thiknessp2=2.0;
    glLineWidth(thiknessp2);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-.975,0.65);
	glVertex2f(-.975,0.75);
	glEnd();
//struct between pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.18,0.225);
	glVertex2f(-1.18,0.3);
	glVertex2f(-1.08,0.3);
	glVertex2f(-1.08,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-1.11,0.225);
	glVertex2f(-1.11,0.35);
	glVertex2f(-1.15,0.35);
	glVertex2f(-1.15,0.225);
	glEnd();

//struct between lines
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.18,-0.065);
	glVertex2f(-1.18,0.028);
	glVertex2f(-1.08,0.028);
	glVertex2f(-1.08,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-1.11,-.065);
	glVertex2f(-1.11,0.085);
	glVertex2f(-1.15,0.085);
	glVertex2f(-1.15,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.18,-0.366);
	glVertex2f(-1.18,-0.265);
	glVertex2f(-1.08,-0.265);
	glVertex2f(-1.08,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-1.11,-.366);
	glVertex2f(-1.11,-.209);
	glVertex2f(-1.15,-0.209);
	glVertex2f(-1.15,-.366);
	glEnd();

	//3rd piller
	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.25,-0.6);
	glVertex2f(-1.25,0.45);
	glVertex2f(-1.30,0.45);
	glVertex2f(-1.30,-0.6);
	glEnd();


GLfloat thiknessinside2=5.0;
    glLineWidth(thiknessinside2);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-1.275,-0.6);
	glVertex2f(-1.275,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-1.24,0.45);
	glVertex2f(-1.24,0.47);
	glVertex2f(-1.31,0.47);
	glVertex2f(-1.31,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-1.25,0.47);
	glVertex2f(-1.25,0.55);
	glVertex2f(-1.30,0.55);
	glVertex2f(-1.30,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-1.25,0.55);
	glVertex2f(-1.275,0.65);
	glVertex2f(-1.30,0.55);
    glEnd();


   GLfloat thiknessp3=2.0;
    glLineWidth(thiknessp3);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-1.275,0.65);
	glVertex2f(-1.275,0.75);
	glEnd();

//struct between pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.48,0.225);
	glVertex2f(-1.48,0.3);
	glVertex2f(-1.38,0.3);
	glVertex2f(-1.38,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-1.41,0.225);
	glVertex2f(-1.41,0.35);
	glVertex2f(-1.45,0.35);
	glVertex2f(-1.45,0.225);
	glEnd();
	// STRUCT BET LINES
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.48,-0.065);
	glVertex2f(-1.48,0.028);
	glVertex2f(-1.38,0.028);
	glVertex2f(-1.38,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-1.41,-.065);
	glVertex2f(-1.41,0.085);
	glVertex2f(-1.45,0.085);
	glVertex2f(-1.45,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.48,-0.366);
	glVertex2f(-1.48,-0.265);
	glVertex2f(-1.38,-0.265);
	glVertex2f(-1.38,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-1.41,-.366);
	glVertex2f(-1.41,-.209);
	glVertex2f(-1.45,-0.209);
	glVertex2f(-1.45,-.366);
	glEnd();
//4th piller
glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.55,-0.6);
	glVertex2f(-1.55,0.45);
	glVertex2f(-1.60,0.45);
	glVertex2f(-1.60,-0.6);
	glEnd();


GLfloat thiknessinside3=5.0;
    glLineWidth(thiknessinside3);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-1.575,-0.6);
	glVertex2f(-1.575,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-1.54,0.45);
	glVertex2f(-1.54,0.47);
	glVertex2f(-1.61,0.47);
	glVertex2f(-1.61,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-1.55,0.47);
	glVertex2f(-1.55,0.55);
	glVertex2f(-1.60,0.55);
	glVertex2f(-1.60,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-1.55,0.55);
	glVertex2f(-1.575,0.65);
	glVertex2f(-1.60,0.55);
    glEnd();


   GLfloat thiknessp4=2.0;
    glLineWidth(thiknessp4);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-1.575,0.65);
	glVertex2f(-1.575,0.75);
	glEnd();

//struct bet pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.78,0.225);
	glVertex2f(-1.78,0.3);
	glVertex2f(-1.68,0.3);
	glVertex2f(-1.68,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-1.71,0.225);
	glVertex2f(-1.71,0.35);
	glVertex2f(-1.75,0.35);
	glVertex2f(-1.75,0.225);
	glEnd();

// STRUCT BET LINES
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.78,-0.065);
	glVertex2f(-1.78,0.028);
	glVertex2f(-1.68,0.028);
	glVertex2f(-1.68,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-1.71,-.065);
	glVertex2f(-1.71,0.085);
	glVertex2f(-1.75,0.085);
	glVertex2f(-1.75,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.78,-0.366);
	glVertex2f(-1.78,-0.265);
	glVertex2f(-1.68,-0.265);
	glVertex2f(-1.68,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-1.71,-.366);
	glVertex2f(-1.71,-.209);
	glVertex2f(-1.75,-0.209);
	glVertex2f(-1.75,-.366);
	glEnd();
// 5th piller

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.85,-0.6);
	glVertex2f(-1.85,0.45);
	glVertex2f(-1.90,0.45);
	glVertex2f(-1.90,-0.6);
	glEnd();


GLfloat thiknessinside4=5.0;
    glLineWidth(thiknessinside4);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-1.875,-0.6);
	glVertex2f(-1.875,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-1.84,0.45);
	glVertex2f(-1.84,0.47);
	glVertex2f(-1.91,0.47);
	glVertex2f(-1.91,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-1.85,0.47);
	glVertex2f(-1.85,0.55);
	glVertex2f(-1.90,0.55);
	glVertex2f(-1.90,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-1.85,0.55);
	glVertex2f(-1.875,0.65);
	glVertex2f(-1.90,0.55);
    glEnd();


   GLfloat thiknessp5=2.0;
    glLineWidth(thiknessp5);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-1.875,0.65);
	glVertex2f(-1.875,0.75);
	glEnd();

	//stru bet pill
	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-2.0,0.225);
	glVertex2f(-2.0,0.3);
	glVertex2f(-1.96,0.3);
	glVertex2f(-1.96,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-2.0,0.225);
	glVertex2f(-2.0,0.35);
	glVertex2f(-1.98,0.35);
	glVertex2f(-1.98,0.225);
	glEnd();
// STRUCT BET LINES
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-2.0,-0.065);
	glVertex2f(-2.0,0.028);
	glVertex2f(-1.96,0.028);
	glVertex2f(-1.96,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-2.0,-.065);
	glVertex2f(-2.0,0.085);
	glVertex2f(-1.98,0.085);
	glVertex2f(-1.98,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-2.0,-0.366);
	glVertex2f(-2.0,-0.265);
	glVertex2f(-1.96,-0.265);
	glVertex2f(-1.96,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-2.0,-.366);
	glVertex2f(-2.0,-.209);
	glVertex2f(-1.98,-0.209);
	glVertex2f(-1.98,-.366);
	glEnd();


	//tree right
	glBegin(GL_QUADS);
	glColor3ub(80,76,76);
	glVertex2f(1.6,0.4);
	glVertex2f(1.6,0.0);
	glVertex2f(1.7,0.0);
	glVertex2f(1.7,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(0,100,0);
	glVertex2f(1.65,0.8);
	glVertex2f(1.4,0.4);
	glVertex2f(1.9,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(0,105,0);
	glVertex2f(1.65,1.1);
	glVertex2f(1.43,0.59);
	glVertex2f(1.87,0.59);
	glEnd();

round();
roundp1();
roundp2();
roundp3();
roundp4();
roundp5();
    //train
    CarBody();
    CarWheel();

    //translation building
    //Translate_building();
    //Translate_tree();

	glFlush();


}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);
  glutTimerFunc(100, update, 0);
    glutMainLoop();
    //return EXIT_SUCCESS;
}


