#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
#include<MMSYSTEM.h>
#define PI 3.1416
int cposx1=60,cposx2=60,cposy=40;
static float r=0.863, g=0.863, b=0.863;
static float r4=0.863, g4=0.863, b4=0.863;
static float r1=0.863, g1=0.863, b1=0.863;
static float r2=0.863, g2=0.863, b2=0.863;
static float r3=0.863, g3=0.863, b3=0.863;
static float	tl	=  0,tly=0;
static float	tr	=  0,ty=0;
void background()
{
    glBegin(GL_QUADS);
    glColor3ub(79, 66, 181);
    //glVertex2f(0,80);
    glVertex2f(0,0);
    //glVertex2f(1000,80);
    glVertex2f(1000,0);
    glColor3ub(212, 241, 249);
    glVertex2f(1000,500);
    glVertex2f(0,500);
    glEnd();
    //ground
    /*glBegin(GL_QUADS);
    glColor3ub(212, 241, 249);
    glVertex2f(0,0);
    glVertex2f(1000,0);
    glColor3ub(135, 129, 51);
    glVertex2f(1000,80);
    glVertex2f(0,80);
    glEnd();*/
    //glFlush();
}

void traianle()
{   glColor3f(0.8,0.7,0.5);
    glBegin(GL_TRIANGLES);
    glVertex2f(1048,582);
    glVertex2f(1060,550);
    glVertex2f(1090,582);
    glEnd();
    //glFlush();
}
void drawstring(float x, float y, float z, char *string)
{
    char *ct;
    glRasterPos3f(x,y,z);

    for(ct=string; *ct!='\0'; ct++)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *ct);
    }
}
void up_circle(float radius)
{
   // glColor3f(1.0, 0.0, 0.0);
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 5; i < 45; i++)/// 100 ta point nicchi circle ta akar jonno
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius, sin(angle) * radius);///equation jeta dibo setai draw hobe evabe point bosaye..wowww!

		}

	glEnd();
	//glFlush();
}
void down_circle(float radius)
{
   // glColor3f(1.0, 0.0, 0.0);
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 55; i < 95; i++)/// 100 ta point nicchi circle ta akar jonno
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius, sin(angle) * radius);///equation jeta dibo setai draw hobe evabe point bosaye..wowww!

		}

	glEnd();
	//glFlush();
}
void circle(float radius)
{
   // glColor3f(1.0, 0.0, 0.0);
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)/// 100 ta point nicchi circle ta akar jonno
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius, sin(angle) * radius);///equation jeta dibo setai draw hobe evabe point bosaye..wowww!

		}

	glEnd();
	//glFlush();
}
void smoke1(float radius)
{
   // glColor3f(1.0, 0.0, 0.0);
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 35; i < 65; i++)/// 100 ta point nicchi circle ta akar jonno
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius, sin(angle) * radius);///equation jeta dibo setai draw hobe evabe point bosaye..wowww!

		}

	glEnd();
	//glFlush();
}
void smoke2(float radius)
{
   // glColor3f(1.0, 0.0, 0.0);
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 45; i < 75; i++)/// 100 ta point nicchi circle ta akar jonno
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius, sin(angle) * radius);///equation jeta dibo setai draw hobe evabe point bosaye..wowww!

		}

	glEnd();
	//glFlush();
}
void smoke3(float radius)
{
   // glColor3f(1.0, 0.0, 0.0);
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = -15; i < 15; i++)/// 100 ta point nicchi circle ta akar jonno
		{
			angle = 2 * PI * i / 100;
			glVertex2f (cos(angle) * radius, sin(angle) * radius);///equation jeta dibo setai draw hobe evabe point bosaye..wowww!

		}

	glEnd();
	//glFlush();
}
void cup()
{
   glColor3f(1.000, 1.0, 1.000); ///0.545, 0.271, 0.075 coffee

    glBegin(GL_QUADS);
     glVertex2f(735, 510);
     glVertex2f(735, 472);
     glVertex2f(805, 472);
     glVertex2f(805, 510);
    glEnd();
glColor3f(0.8,0.7,0.5); ///cup handle
     glBegin(GL_QUADS);
     glVertex2f(788, 505);
     glVertex2f(788, 477);
     glVertex2f(798, 477);
     glVertex2f(798, 505);
    glEnd();

glColor3f(1.000, 1.0, 1.000);
   glTranslatef(760,460,0);
   up_circle(27);
   glColor3f(0.545, 0.271, 0.075);
   up_circle(19);



    glColor3f(1.000, 1.0, 1.000);
    glTranslatef(0,17,0);

   down_circle(24);
   glColor3f(0.545, 0.271, 0.075);
   down_circle(19);
  // glEnd();
glTranslatef(0,17,0);
glColor3f(1.000, 1.0, 1.000); ///0.545, 0.271, 0.075 coffee
   up_circle(27);


  glTranslatef(-760,-494,0);
   //glFlush();
}
void H()
{
   glColor3f(r, g, b); /// je point ta draw korbo setar color
     glBegin(GL_QUADS);
     glVertex2f(375, 370);
     glVertex2f(375, 340);
     glVertex2f(380, 340);
     glVertex2f(380, 370);
     glEnd();
    // glColor3f(0.000, 0.0, 0.0);
     glBegin(GL_QUADS);
     glVertex2f(380, 350);
     glVertex2f(380, 357);
     glVertex2f(390, 357);
     glVertex2f(390, 350);
     glEnd();

     //glColor3f(0.000, 0.0, 0.0);
     glBegin(GL_QUADS);
     glVertex2f(390, 370);
     glVertex2f(390, 340);
     glVertex2f(395, 340);
     glVertex2f(395, 370);
     glEnd();


     //glFlush();
}
void E()
{

     glColor3f(r1, g1, b1);
     glBegin(GL_QUADS);
     glVertex2f(400, 370);
     glVertex2f(400, 340);
     glVertex2f(405, 340);
     glVertex2f(405, 370);
     glEnd();

     //glColor3f(0.000, 0.0, 0.0);
     glBegin(GL_QUADS);
     glVertex2f(400, 370);
     glVertex2f(400, 365);
     glVertex2f(410, 365);
     glVertex2f(410, 370);
     glEnd();
    //glColor3f(0.000, 0.0, 0.0);
     glBegin(GL_QUADS);
     glVertex2f(400, 352);
     glVertex2f(400, 357);
     glVertex2f(410, 357);
     glVertex2f(410, 352);
     glEnd();

    //glColor3f(0.000, 0.0, 0.0);
     glBegin(GL_QUADS);
     glVertex2f(400, 345);
     glVertex2f(400, 340);
     glVertex2f(410, 340);
     glVertex2f(410, 345);
     glEnd();

    // glFlush();
}
void L()
{
    glColor3f(r2, g2, b2);
     glBegin(GL_QUADS);
     glVertex2f(415, 370);
     glVertex2f(415, 340);
     glVertex2f(420, 340);
     glVertex2f(420, 370);
     glEnd();

     //glColor3f(0.000, 0.0, 0.0);
     glBegin(GL_QUADS);
     glVertex2f(415, 370);
     glVertex2f(415, 365);
     glVertex2f(430, 365);
     glVertex2f(430, 370);
     glEnd();


    // glFlush();
}
void LL()
{
    glColor3f(r3, g3, b3);
     glBegin(GL_QUADS);
     glVertex2f(432, 370);
     glVertex2f(432, 340);
     glVertex2f(437, 340);
     glVertex2f(437, 370);
     glEnd();

     //glColor3f(0.000, 0.0, 0.0);
     glBegin(GL_QUADS);
     glVertex2f(432, 370);
     glVertex2f(432, 365);
     glVertex2f(445, 365);
     glVertex2f(445, 370);
     glEnd();


     //glFlush();
}
void O()
{
    glColor3f(r4, g4, b4);
   glTranslatef(462,356,0);
   circle(15);
  // glEnd();
    glColor3f(	0.863, 0.863, 0.863);
    circle(10);
    glTranslatef(-462,-356,0);
  //  glEnd();


     //glFlush();
}


void smoke_draw()
{
    glTranslatef(775,458,0);
glColor3f(1.000,1.0, 1.000); ///smoke
   smoke1(15);

   //glColor3f(1.000,1.0, 1.000); ///smoke
   smoke2(15);

   glTranslatef(-10,0,0);
glColor3f(1.000,1.0, 1.000); ///smoke
   smoke1(15);

   glColor3f(1.000,1.0, 1.000); ///smoke
   smoke2(15);
glTranslatef(-2,-25,0);
   glColor3f(1.000,1.0, 1.000); ///smoke
   smoke3(15);

   glTranslatef(-10,0,0);
   glColor3f(1.000,1.0, 1.000); ///smoke
   smoke3(15);
  glTranslatef(-753,-433,0);
//   smoke1(15);
//   glTranslatef(0,-12,0);
//   smoke1(10);
  // glFlush();
}
void writing()
{
    //glPushMatrix();
    glTranslatef(60,0,0);
    H();
   // glPopMatrix();
    E();
    L();
    LL();
    O();
    glTranslatef(-60,0,0);
}
void page()
{
  glColor3f(1.2,1.2,1.2);
     glBegin(GL_QUADS);
     glVertex2f(755, 660);
     glVertex2f(765, 545);
     glVertex2f(935, 545);
     glVertex2f(925, 660);
    glEnd();
    //lines
    //1
    glColor3f(0.753, 0.753, 0.753);
     glBegin(GL_QUADS);
     glVertex2f(788, 565);
     glVertex2f(789, 560);
     glVertex2f(914, 560);
     glVertex2f(913, 565);
    glEnd();

   //2
      glBegin(GL_QUADS);
     glVertex2f(788, 580);
     glVertex2f(789, 575);
     glVertex2f(914, 575);
     glVertex2f(913, 580);
    glEnd();

    //3
    glBegin(GL_QUADS);
     glVertex2f(788, 602);
     glVertex2f(789, 590);
     glVertex2f(882, 590);
     glVertex2f(880, 602);
    glEnd();

    //4
     glBegin(GL_QUADS);
     glVertex2f(784, 620);
     glVertex2f(780, 625);
     glVertex2f(914, 625);
     glVertex2f(915, 620);
    glEnd();
   //5
    glBegin(GL_QUADS);
     glVertex2f(784, 635);
     glVertex2f(780, 640);
     glVertex2f(914, 640);
     glVertex2f(915, 635);
    glEnd();
   //6
     glBegin(GL_QUADS);
     glVertex2f(784, 650);
     glVertex2f(780, 655);
     glVertex2f(914, 655);
     glVertex2f(915, 650);
    glEnd();
///pen
glColor3f(0.1,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(971, 636);
     glVertex2f(997, 558);
     glVertex2f(1005, 558);
     glVertex2f(979, 636);
    glEnd();

    glColor3f(1.0,1.0,0.0);
     glBegin(GL_QUADS);
     glVertex2f(968, 659);
     glVertex2f(962, 648);
     glVertex2f(976, 638);
     glVertex2f(982, 652);
    glEnd();

     glBegin(GL_QUADS);
     glVertex2f(974, 628);
     glVertex2f(976, 620);
     glVertex2f(984, 622);
     glVertex2f(982, 630);
    glEnd();
     glBegin(GL_QUADS);
     glVertex2f(994, 568);
     glVertex2f(995, 566);
     glVertex2f(1001, 568);
     glVertex2f(1000, 570);
    glEnd();
    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(966, 640);
     glVertex2f(967, 633);
     glVertex2f(984, 635);
     glVertex2f(984, 644);
    glEnd();


    //glFlush();
}
void keys()
{
    ///laptop black keys
   glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(340, 510);
     glVertex2f(343, 500);
     glVertex2f(363, 500);
     glVertex2f(360, 510);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(375, 510);
     glVertex2f(377, 500);
     glVertex2f(397, 500);
     glVertex2f(395, 510);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(405, 510);
     glVertex2f(406, 500);
     glVertex2f(426, 500);
     glVertex2f(425, 510);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(435, 510);
     glVertex2f(435, 500);
     glVertex2f(455, 500);
     glVertex2f(455, 510);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(465, 510);
     glVertex2f(465, 500);
     glVertex2f(485, 500);
     glVertex2f(485, 510);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(495, 510);
     glVertex2f(495, 500);
     glVertex2f(515, 500);
     glVertex2f(515, 510);
    glEnd();

    glColor3f(0.3,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(525, 500);
     glVertex2f(525, 510);
     glVertex2f(545, 510);
     glVertex2f(545, 500);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(555, 510);
     glVertex2f(555, 500);
     glVertex2f(575, 500);
     glVertex2f(575, 510);
    glEnd();

   /* glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(565, 510);
     glVertex2f(565, 500);
     glVertex2f(585, 500);
     glVertex2f(585, 510);
    glEnd();
    */

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(590, 510);
     glVertex2f(587, 500);
     glVertex2f(607, 500);
     glVertex2f(610, 510);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(640, 510);
     glVertex2f(637, 500);
     glVertex2f(620, 500);
     glVertex2f(623, 510);
    glEnd();
    ///1 row end

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(325, 527);
     glVertex2f(327, 515);
     glVertex2f(362, 515);
     glVertex2f(360, 527);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(370, 527);
     glVertex2f(372, 515);
     glVertex2f(397, 515);
     glVertex2f(395, 527);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(405, 527);
     glVertex2f(406, 515);
     glVertex2f(426, 515);
     glVertex2f(425, 527);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(435, 527);
     glVertex2f(435, 515);
     glVertex2f(455, 515);
     glVertex2f(455, 527);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(465, 527);
     glVertex2f(465, 515);
     glVertex2f(485, 515);
     glVertex2f(485, 527);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(495, 527);
     glVertex2f(495, 515);
     glVertex2f(515, 515);
     glVertex2f(515, 527);
    glEnd();

    glColor3f(0.3,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(525, 527);
     glVertex2f(525, 515);
     glVertex2f(545, 515);
     glVertex2f(545, 527);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(555, 527);
     glVertex2f(555, 515);
     glVertex2f(575, 515);
     glVertex2f(575, 527);
    glEnd();

   /* glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(565, 510);
     glVertex2f(565, 500);
     glVertex2f(585, 500);
     glVertex2f(585, 510);
    glEnd();
    */


     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(590, 527);
     glVertex2f(587, 515);
     glVertex2f(607, 515);
     glVertex2f(610, 527);
    glEnd();

    glColor3f(0.8,1.0,0.2);
     glBegin(GL_QUADS);
     glVertex2f(649, 527);
     glVertex2f(645, 515);
     glVertex2f(617, 515);
     glVertex2f(620, 527);
    glEnd();
     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(645, 525);
     glVertex2f(642, 513);
     glVertex2f(620, 513);
     glVertex2f(623, 525);
    glEnd();
    ///2nd row end

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(305, 544);
     glVertex2f(307, 532);
     glVertex2f(332, 532);
     glVertex2f(330, 544);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(340, 544);
     glVertex2f(342, 532);
     glVertex2f(362, 532);
     glVertex2f(360, 544);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(370, 544);
     glVertex2f(372, 532);
     glVertex2f(397, 532);
     glVertex2f(395, 544);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(405, 544);
     glVertex2f(406, 532);
     glVertex2f(426, 532);
     glVertex2f(425, 544);
    glEnd();

     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(435, 544);
     glVertex2f(435, 532);
     glVertex2f(455, 532);
     glVertex2f(455, 544);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(465, 544);
     glVertex2f(465, 532);
      glVertex2f(545, 532);
     glVertex2f(545, 544);
    glEnd();


    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(555, 544);
     glVertex2f(555, 532);
     glVertex2f(575, 532);
     glVertex2f(575, 544);
    glEnd();



     glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(590, 544);
     glVertex2f(587, 532);
     glVertex2f(607, 532);
     glVertex2f(610, 544);
    glEnd();

    glColor3f(0.2,0.2,0.2);
     glBegin(GL_QUADS);
     glVertex2f(655, 544);
     glVertex2f(652, 532);
     glVertex2f(617, 532);
     glVertex2f(620, 544);
    glEnd();
    ///3rd row end

///track pad
glColor3f(0.863, 0.863, 0.863); ///laptop ash trackpad
     glBegin(GL_QUADS);
     glVertex2f(425, 580);
     glVertex2f(435, 550);
     glVertex2f(535, 550);
     glVertex2f(545, 580);
    glEnd();
   // glFlush();
}
void laptop()
{
    glColor3f(1.0,1.0,1.0); ///laptop white border
     glBegin(GL_QUADS);
     glVertex2f(300, 482);
     glVertex2f(300, 255);
     glVertex2f(677, 255);
     glVertex2f(677, 482);
    glEnd();

    glColor3f(0.2,0.2,0.2); ///laptop black border
     glBegin(GL_QUADS);
     glVertex2f(305, 477);
     glVertex2f(305, 260);
     glVertex2f(672, 260);
     glVertex2f(672, 477);
    glEnd();

    glColor3f(0.863, 0.863, 0.863); ///laptop ash screen
     glBegin(GL_QUADS);
     glVertex2f(325, 457);
     glVertex2f(325, 280);
     glVertex2f(652, 280);
     glVertex2f(652, 457);
    glEnd();

 glColor3f(0.663, 0.663, 0.663); ///laptop ash screen
     glBegin(GL_QUADS);
     glVertex2f(335, 236);
     glVertex2f(335, 236);
     glVertex2f(645, 226);
     glVertex2f(645, 226);
    glEnd();

    glColor3f(1.0,1.0,1.0); ///laptop white keybox
     glBegin(GL_QUADS);
     glVertex2f(235, 595);
     glVertex2f(327, 482);
     glVertex2f(650, 482);
     glVertex2f(742, 595);

    glEnd();

    glColor3f(0.2,0.2,0.2); ///laptop black connection
     glBegin(GL_QUADS);

     glVertex2f(400, 490);
     glVertex2f(405, 477);
     glVertex2f(585, 477);
     glVertex2f(590, 490);
    glEnd();
glColor3f(1.0,1.0,1.0);
drawstring(455,472,0.0,"ASUS  VivoBook");
    glColor3f(0.863, 0.863, 0.863); ///laptop ash under stand
     glBegin(GL_QUADS);
     glVertex2f(235, 605);
     glVertex2f(235, 595);
     glVertex2f(742, 595);
     glVertex2f(742, 605);
    glEnd();

    keys();

   // glFlush();

}
void mobile()
{
    glColor3f(1.184, 1.310, 1.310);
    glBegin(GL_QUADS);
     glVertex2f(121, 643);
     glVertex2f(150, 570);
     glVertex2f(202, 578);
     glVertex2f(176, 650);
    glEnd();
 glColor3f(0.184, 0.310, 0.310);
    glBegin(GL_QUADS);
     glVertex2f(125, 636);
     glVertex2f(146, 580);
     glVertex2f(198, 588);
     glVertex2f(178, 644);
    glEnd();
   // glFlush();
}


void cactus()
{
    glPushMatrix();
    glColor3f(1.000, 0.271, 0.000);
    glBegin(GL_QUADS);
     glVertex2f(1028, 376);
     glVertex2f(1018, 338);
     glVertex2f(1088, 338);
     glVertex2f(1078, 376);
    glEnd();

    glColor3f(0.698, 0.133, 0.133);
    glBegin(GL_QUADS);
     glVertex2f(1010, 338);
     glVertex2f(1010, 336);
     glVertex2f(1092, 336);
     glVertex2f(1092, 338);
    glEnd();

     glColor3f(1.000, 0.271, 0.000);
    glBegin(GL_QUADS);
     glVertex2f(1010, 336);
     glVertex2f(1010, 324);
     glVertex2f(1092, 324);
     glVertex2f(1092, 336);
    glEnd();

glColor3f(	0.000, 0.392, 0.000);
   glTranslatef(1060,298,0);
   circle(28);
glColor3f(	0.000, 0.392, 0.000);
   glTranslatef(-20,0,0);
   circle(28);
glColor3f(0.133, 0.545, 0.133);
    glTranslatef(10,4,0);
   circle(20);
   glTranslatef(0,-4,0);
   circle(20);
   glTranslatef(0,-4,0);
   circle(20);
   glTranslatef(0,-4,0);
   circle(25);
   glTranslatef(0,-4,0);
   circle(25);
   glTranslatef(0,-4,0);
   circle(20);
   glTranslatef(0,-4,0);
   circle(20);
   glTranslatef(0,-4,0);
   circle(20);
   glTranslatef(0,-4,0);
   circle(20);
   glTranslatef(0,-6,0);
   circle(17);
   glTranslatef(0,-6,0);
   circle(17);
   glTranslatef(0,-6,0);
   circle(15);
   glTranslatef(0,-6,0);
   circle(15);

glTranslatef(-1050,-246,0);
   // glFlush();
    glPopMatrix();

}
void window_kath()
{
     glColor3f(0.3, 0.2, 0.1); ///janalar aspasher kath
    glBegin(GL_QUADS);
     glVertex2f(1146, 366);
     glVertex2f(1146, 0);
     glVertex2f(1160, 0);
     glVertex2f(1160, 366);
    glEnd();
     glBegin(GL_QUADS);
     glVertex2f(711, 366);
     glVertex2f(711, 0);
     glVertex2f(726, 0);
     glVertex2f(726, 366);
    glEnd();
    //double deyal for megh dhaka
    glColor3f(1.000, 0.937, 0.835);
     glBegin(GL_QUADS);
     glVertex2f(370, 200);
     glVertex2f(370, 0);
     glVertex2f(711, 0);
     glVertex2f(711, 200);
    glEnd();
  //  glFlush();

}
void window()
{
    glColor3f(0.6, 0.4, 0.0); ///janalar tob dani
    glBegin(GL_QUADS);
     glVertex2f(692, 400);
     glVertex2f(692, 377);
     glVertex2f(1160, 377);
     glVertex2f(1160, 400);
    glEnd();
glColor3f(0.3, 0.2, 0.1); ///janalar aspasher kath
    glBegin(GL_QUADS);
     glVertex2f(711, 378);
     glVertex2f(711, 0);
     glVertex2f(1160, 0);
     glVertex2f(1160, 378);
    glEnd();
    //glFlush();


///    glColor3f(0.678, 0.847, 0.902); ///sky color 0.941, 0.973, 1.000
///    glBegin(GL_QUADS);
///     glVertex2f(726, 366);
///     glVertex2f(726, 0);
///     glVertex2f(1146, 0);
///     glVertex2f(1146, 366);
///    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(79, 166, 200);
    //glVertex2f(0,80);
    glVertex2f(726,366);
    //glVertex2f(1000,80);
    glVertex2f(726,0);
    glColor3ub(212, 241, 249);
    glVertex2f(1146,0);
    glVertex2f(1146,366);
    glEnd();
   // glFlush();
    ///winlow glass shade
//    glColor3f(0.941, 0.973, 1.000);
//    glBegin(GL_TRIANGLES);
//    glVertex2f(726, 285);
//    glVertex2f(726, 0);
//    glVertex2f(880, 0);
//    glEnd();
//
//    glColor3f(0.941, 0.973, 1.000);
//    glBegin(GL_QUADS);
//     glVertex2f(834, 303);
//     glVertex2f(978, 0);
//     glVertex2f(1028, 0);
//     glVertex2f(877, 303);
//    glEnd();
//
//    glColor3f(0.941, 0.973, 1.000);
//    glBegin(GL_QUADS);
//     glVertex2f(950, 265);
//     glVertex2f(1124, 0);
//     glVertex2f(1136, 0);
//     glVertex2f(1136, 298);
//    glEnd();
    ///buildings

 //1 light ash building
    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_QUADS);
     glVertex2f(726, 366);
     glVertex2f(726, 250);
     glVertex2f(780, 250);
     glVertex2f(780, 366);
    glEnd();
    //1 building's window
    glColor3f(0.941, 1.000, 1.000);
    glBegin(GL_QUADS);
     glVertex2f(735, 360);
     glVertex2f(735, 335);
     glVertex2f(743, 335);
     glVertex2f(743, 360);
    glEnd();
    glBegin(GL_QUADS);
     glVertex2f(735, 325);
     glVertex2f(735, 300);
     glVertex2f(743, 300);
     glVertex2f(743, 325);
    glEnd();
    glBegin(GL_QUADS);
     glVertex2f(735, 290);
     glVertex2f(735, 265);
     glVertex2f(743, 265);
     glVertex2f(743, 290);
    glEnd();


    glBegin(GL_QUADS);
     glVertex2f(755, 360);
     glVertex2f(755, 335);
     glVertex2f(763, 335);
     glVertex2f(763, 360);
    glEnd();
    glBegin(GL_QUADS);
     glVertex2f(755, 325);
     glVertex2f(755, 300);
     glVertex2f(763, 300);
     glVertex2f(763, 325);
    glEnd();
    glBegin(GL_QUADS);
     glVertex2f(755, 290);
     glVertex2f(755, 265);
     glVertex2f(763, 265);
     glVertex2f(763, 290);
    glEnd();
    //2 ash building
    glColor3f(0.467, 0.533, 0.600);
    glBegin(GL_QUADS);
     glVertex2f(790, 366);
     glVertex2f(790, 303);
     glVertex2f(882, 303);
     glVertex2f(882, 366);
    glEnd();

// 2 ash building's window
 glColor3f(0.902, 0.902, 0.980);
    glBegin(GL_QUADS);
      glVertex2f(800, 363);
     glVertex2f(800, 340);
     glVertex2f(810, 340);
     glVertex2f(810, 363);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(840, 363);
     glVertex2f(840, 340);
     glVertex2f(850, 340);
     glVertex2f(850, 363);
    glEnd();
     glBegin(GL_QUADS);
      glVertex2f(815, 363);
     glVertex2f(815, 340);
     glVertex2f(825, 340);
     glVertex2f(825, 363);
    glEnd();
      glBegin(GL_QUADS);
      glVertex2f(855, 363);
     glVertex2f(855, 340);
     glVertex2f(865, 340);
     glVertex2f(865, 363);
    glEnd();

glBegin(GL_QUADS);
      glVertex2f(800, 333);
     glVertex2f(800, 310);
     glVertex2f(810, 310);
     glVertex2f(810, 333);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(840, 333);
     glVertex2f(840, 310);
     glVertex2f(850, 310);
     glVertex2f(850, 333);
    glEnd();
     glBegin(GL_QUADS);
      glVertex2f(815, 333);
     glVertex2f(815, 310);
     glVertex2f(825, 310);
     glVertex2f(825, 333);
    glEnd();
      glBegin(GL_QUADS);
      glVertex2f(855, 333);
     glVertex2f(855, 310);
     glVertex2f(865, 310);
     glVertex2f(865, 333);
    glEnd();
    //3 ash
    glColor3f(0.753, 0.753, 0.753);
    glBegin(GL_QUADS);
      glVertex2f(900, 366);
     glVertex2f(900, 266);
     glVertex2f(1050, 266);
     glVertex2f(1050, 366);
    glEnd();

    //3 ash building's window

    glColor3f(0.973, 0.973, 1.000);
    glBegin(GL_QUADS);
      glVertex2f(912, 350);
     glVertex2f(912, 330);
     glVertex2f(935, 330);
     glVertex2f(935, 350);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(942, 350);
     glVertex2f(942, 330);
     glVertex2f(965, 330);
     glVertex2f(965, 350);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(972, 350);
     glVertex2f(972, 330);
     glVertex2f(995, 330);
     glVertex2f(995, 350);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(1002, 350);
     glVertex2f(1002, 330);
     glVertex2f(1035, 330);
     glVertex2f(1035, 350);
    glEnd();



     glBegin(GL_QUADS);
      glVertex2f(912, 315);
     glVertex2f(912, 290);
     glVertex2f(935, 290);
     glVertex2f(935, 315);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(942, 315);
     glVertex2f(942, 290);
     glVertex2f(965, 290);
     glVertex2f(965, 315);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(972, 315);
     glVertex2f(972, 290);
     glVertex2f(995, 290);
     glVertex2f(995, 315);
    glEnd();
    glBegin(GL_QUADS);
      glVertex2f(1002, 315);
     glVertex2f(1002, 290);
     glVertex2f(1035, 290);
     glVertex2f(1035, 315);
    glEnd();

    //4 black
    glColor3f(0.312, 0.312, 0.312);
    glBegin(GL_QUADS);
      glVertex2f(1095, 366);
     glVertex2f(1095, 300);
     glVertex2f(1146, 300);
     glVertex2f(1146, 366);
    glEnd();

    //4 no buildng's window
glColor3f(0.973, 0.973, 1.000);
    glBegin(GL_QUADS);
      glVertex2f(1105, 364);
     glVertex2f(1105, 340);
     glVertex2f(1110, 340);
     glVertex2f(1110, 364);
    glEnd();

    glBegin(GL_QUADS);
      glVertex2f(1117, 364);
     glVertex2f(1117, 340);
     glVertex2f(1122, 340);
     glVertex2f(1122, 364);
    glEnd();

    glBegin(GL_QUADS);
      glVertex2f(1130, 364);
     glVertex2f(1130, 340);
     glVertex2f(1135, 340);
     glVertex2f(1135, 364);
    glEnd();

    glBegin(GL_QUADS);
      glVertex2f(1105, 335);
     glVertex2f(1105, 310);
     glVertex2f(1110, 310);
     glVertex2f(1110, 335);
    glEnd();

    glBegin(GL_QUADS);
      glVertex2f(1117, 334);
     glVertex2f(1117, 310);
     glVertex2f(1122, 310);
     glVertex2f(1122, 334);
    glEnd();

    glBegin(GL_QUADS);
      glVertex2f(1130, 334);
     glVertex2f(1130, 310);
     glVertex2f(1135, 310);
     glVertex2f(1135, 334);
    glEnd();
glPushMatrix();
    glColor3f(1.000, 0.271, 0.000);
    glBegin(GL_QUADS);
     glVertex2f(1028, 376);
     glVertex2f(1018, 338);
     glVertex2f(1088, 338);
     glVertex2f(1078, 376);
    glEnd();
///cactus replacing
    glColor3f(0.698, 0.133, 0.133);
    glBegin(GL_QUADS);
     glVertex2f(1010, 338);
     glVertex2f(1010, 336);
     glVertex2f(1092, 336);
     glVertex2f(1092, 338);
    glEnd();


//glPushMatrix();
    glColor3f(	0.000, 0.392, 0.000);
   glTranslatef(1052,298,0);
   circle(30);
glColor3f(	0.000, 0.392, 0.000);
   glTranslatef(0,-20,0);
   circle(25);
glTranslatef(0,-13,0);
   circle(20);

glTranslatef(-1052,-265,0);
//glPopMatrix();
glColor3f(1.000, 0.271, 0.000);
    glBegin(GL_QUADS);
     glVertex2f(1010, 336);
     glVertex2f(1010, 324);
     glVertex2f(1092, 324);
     glVertex2f(1092, 336);
    glEnd();
    glColor3f(1.000, 1.271, 0.000);
    glBegin(GL_LINES);
     glVertex2f(1038, 320);
     glVertex2f(1028, 291);

    glVertex2f(1052, 320);
     glVertex2f(1068, 291);

    glVertex2f(1044, 300);
     glVertex2f(1017, 271);

      glVertex2f(1046, 290);
     glVertex2f(1035, 251);

    glVertex2f(1052, 270);
     glVertex2f(1052, 240);

    glVertex2f(1062, 270);
     glVertex2f(1072, 240);

     glVertex2f(1068, 280);
     glVertex2f(1088, 250);

     glEnd();
    //glFlush();
}
void bookself()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.55, 0.35, 0.0);
    glBegin(GL_QUADS);
     glVertex2f(20, 430);
     glVertex2f(20, 0);
     glVertex2f(360, 0);
     glVertex2f(360, 430);
    glEnd();

     glColor3f(0.4, 0.3, 0.0);
    glBegin(GL_QUADS);
     glVertex2f(47, 400);
     glVertex2f(47, 304);
     glVertex2f(336, 304);
     glVertex2f(336, 400);
    glEnd();

    glColor3f(0.4, 0.3, 0.0);
    glBegin(GL_QUADS);
     glVertex2f(47, 282);
     glVertex2f(47, 146);
     glVertex2f(336, 146);
     glVertex2f(336, 282);
    glEnd();

    glColor3f(0.4, 0.3, 0.0);
    glBegin(GL_QUADS);
     glVertex2f(47, 125);
     glVertex2f(47, 20);
     glVertex2f(336, 20);
     glVertex2f(336, 125);
    glEnd();
///danda

    glColor3f(0.55, 0.35, 0.0);
    glBegin(GL_QUADS);
     glVertex2f(152, 282);
     glVertex2f(152, 20);
     glVertex2f(170, 20);
     glVertex2f(170, 282);

//box
    glColor3f(0.824, 0.312, 0.118);
    glBegin(GL_QUADS);
     glVertex2f(62, 125);
     glVertex2f(62, 87);
     glVertex2f(136, 87);
     glVertex2f(136, 125);
    glEnd();


    glColor3f(0.724, 0.312, 0.118);
    glBegin(GL_QUADS);
     glVertex2f(54, 87);
     glVertex2f(54, 71);
     glVertex2f(144, 71);
     glVertex2f(144, 87);
    glEnd();

    glEnd();
    ///book1
    glColor3f(0.502, 0.502, 0.000);//olive
    glBegin(GL_QUADS);
     glVertex2f(302, 125);
     glVertex2f(302, 40);
     glVertex2f(332, 40);
     glVertex2f(332, 125);
    glEnd();
    //book2
    glColor3f(0.392, 0.584, 0.929);//CornlowerBlue
    glBegin(GL_QUADS);
     glVertex2f(260, 125);
     glVertex2f(270, 40);
     glVertex2f(300, 40);
     glVertex2f(290, 125);
    glEnd();
    //book3
    glColor3f(0.663, 0.663, 0.663);//ash
    glBegin(GL_QUADS);
     glVertex2f(225, 125);
     glVertex2f(235, 40);
     glVertex2f(265, 40);
     glVertex2f(255, 125);
    glEnd();

 //chikon book0
    glColor3f(1.000, 0.647, 0.000);//deep org
    glBegin(GL_QUADS);
     glVertex2f(140, 282);
     glVertex2f(140, 190);
     glVertex2f(150, 190);
     glVertex2f(150, 282);
    glEnd();
    //chikon book1
    glColor3f(1.000, 0.843, 0.000);//gold
    glBegin(GL_QUADS);
     glVertex2f(130, 282);
     glVertex2f(130, 190);
     glVertex2f(139, 190);
     glVertex2f(139, 282);
    glEnd();
    //chikon book2
    glColor3f(0.502, 0.502, 0.000);
    glBegin(GL_QUADS);
     glVertex2f(110, 282);
     glVertex2f(120, 190);
     glVertex2f(129, 190);
     glVertex2f(120, 282);
    glEnd();
    //chikon book3.1
    glColor3f(0.804, 0.361, 0.361);//maroon
    glBegin(GL_QUADS);
     glVertex2f(100, 282);
     glVertex2f(110, 190);
     glVertex2f(119, 190);
     glVertex2f(109, 282);
    glEnd();
    //chikon book3
    glColor3f(0.663, 0.663, 0.663);//ash
    glBegin(GL_QUADS);
     glVertex2f(90, 282);
     glVertex2f(100, 190);
     glVertex2f(109, 190);
     glVertex2f(99, 282);
    glEnd();
    //nich tolar books
    //mota book1
    glColor3f(0.412, 0.412, 0.41);//ash
    glBegin(GL_QUADS);
     glVertex2f(70, 400);
     glVertex2f(70, 370);
     glVertex2f(185, 370);
     glVertex2f(185, 400);
    glEnd();
    //mota book er fita
    glColor3f(1.000, 0.000, 0.000);//red
    glBegin(GL_QUADS);
     glVertex2f(152, 400);
     glVertex2f(152, 370);
     glVertex2f(168, 370);
     glVertex2f(168, 400);
    glEnd();
    //motar upor choto book
    glColor3f(1.000, 0.627, 0.478);//ash
    glBegin(GL_QUADS);
     glVertex2f(82, 369);
     glVertex2f(82, 355);
     glVertex2f(174, 355);
     glVertex2f(174, 369);
    glEnd();

    ///leaves
    glColor3f(0.000, 0.7, 0.000);
    glBegin(GL_TRIANGLES);
     glVertex2f(280, 224);
     glVertex2f(257, 183);
     glVertex2f(206, 170);
    glEnd();
    glBegin(GL_TRIANGLES);
     glVertex2f(275, 231);
     glVertex2f(271, 186);
     glVertex2f(301, 151);
    glEnd();
    glBegin(GL_TRIANGLES);
     glVertex2f(288, 188);
     glVertex2f(334, 163);
     glVertex2f(278, 220);
    glEnd();
    //traingle 2 ta
    ///fuldani
    glColor3f(1.000, 0.271, 0.000);
    glBegin(GL_QUADS);
     glVertex2f(263, 237);
     glVertex2f(251, 220);
     glVertex2f(297, 220);
     glVertex2f(285, 237);
    glEnd();
    //circle

    glTranslatef(273,253,0);
   circle(20);
   glTranslatef(-273,-253,0);


    glBegin(GL_QUADS);
     glVertex2f(252, 282);
     glVertex2f(264, 266);
     glVertex2f(282, 266);
     glVertex2f(295, 282);
    glEnd();


//glFlush();
}
void table()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.8,0.7,0.5); /// je point ta draw korbo setar color
     glBegin(GL_QUADS);
     glVertex2f(0, 660);
          glVertex2f(0, 430);
          glColor3f(0.971, 0.9, 0.729);
    glVertex2f(1660, 430);

      glVertex2f(1660, 660);


    glEnd();
   // glFlush();
}

void Left_hand()
{

      glColor3f(0.000, 0.545, 0.545);
    glBegin(GL_QUADS);
      glVertex2f(282, 660);
     glVertex2f(300, 603);
     glVertex2f(370, 606);
     glVertex2f(350, 660);
    glEnd();


    //hand

      glColor3f(0.961, 0.871, 0.702);
    glBegin(GL_QUADS);
      glVertex2f(298, 606);
     glVertex2f(320, 544);
     glVertex2f(388, 544);
     glVertex2f(366, 606);
    glEnd();
  //  finger1
    glBegin(GL_QUADS);
      glVertex2f(381, 558);//1
     glVertex2f(400, 510);//2
     glVertex2f(389, 504);//3
     glVertex2f(368, 545);//4
    glEnd();
glBegin(GL_QUADS);
      glVertex2f(393, 529);///1
     glVertex2f(408, 530);///2
     glVertex2f(420, 519);///3
     glVertex2f(388, 504);///4
    glEnd();
// finger 2
glBegin(GL_QUADS);
      glVertex2f(346, 548);
     glVertex2f(370, 502);
     glVertex2f(383, 503);
     glVertex2f(363, 550);
    glEnd();
glBegin(GL_QUADS);
      glVertex2f(365, 520);
     glVertex2f(370, 502);
     glVertex2f(386, 506);
     glVertex2f(386, 524);
    glEnd();
// finger 3
glBegin(GL_QUADS);

     glVertex2f(328, 544);
     glVertex2f(350, 506);
     glVertex2f(363, 510);
    glVertex2f(343, 546);
    glEnd();
glBegin(GL_QUADS);
      glVertex2f(342, 520);
    glVertex2f(352, 506);
     glVertex2f(360, 510);
     glVertex2f(370, 524);
    glEnd();
// finger 4 bura angul

    glBegin(GL_POLYGON);
    glVertex2f(370,587);
    glVertex2f(378,563);
     glVertex2f(393, 552);
     glVertex2f(413, 567);
     glVertex2f(402, 576);
     glVertex2f(394,568);
     glEnd();

   // glFlush();
}
void Right_hand()
{
     glColor3f(0.000, 0.545, 0.545);//0.961, 0.871, 0.702

    glBegin(GL_QUADS);
      glVertex2f(625, 660);
     glVertex2f(610, 606);
     glVertex2f(680, 603);
     glVertex2f(702, 660);
    glEnd();
//hand
      //glColor3f(1.000, 0.894, 0.710);
      glColor3f(0.961, 0.871, 0.702);
    glBegin(GL_QUADS);
       glVertex2f(614, 606);
     glVertex2f(596, 548);
     glVertex2f(660, 544);
     glVertex2f(680, 603);
    glEnd();
  //  finger1
    glBegin(GL_QUADS);
      glVertex2f(596, 554);//1
     glVertex2f(586, 525);//2
     glVertex2f(604, 525);//3
     glVertex2f(616, 554);//4
    glEnd();
glBegin(GL_QUADS);
      glVertex2f(572, 539);///1
     glVertex2f(566, 524);///2
     glVertex2f(596, 509);///3
     glVertex2f(602, 524);///4
    glEnd();
// finger 2
glBegin(GL_QUADS);
      glVertex2f(620, 548);
     glVertex2f(599, 512);
     glVertex2f(613, 507);
     glVertex2f(636, 548);
    glEnd();
glBegin(GL_QUADS);
      glVertex2f(620, 526);
     glVertex2f(599, 512);
     glVertex2f(600, 512);
     glVertex2f(600, 530);
    glEnd();
// finger 3
//glColor3f(1.000, 0.545, 0.545);
glBegin(GL_QUADS);

     glVertex2f(640, 548);
     glVertex2f(620, 514);
     glVertex2f(633, 510);
    glVertex2f(655, 548);
    glEnd();
glBegin(GL_QUADS);
      glVertex2f(645, 534);
    glVertex2f(620, 514);
    glVertex2f(615, 520);
    glVertex2f(615, 534);
    glEnd();
// finger 4 bura angul


      glBegin(GL_POLYGON);
    glVertex2f(613,602);//1
    glVertex2f(579, 578);//3
    glVertex2f(580,580);//2
     glVertex2f(567, 576);//4
     glVertex2f(586, 554);//5
     glVertex2f(602,566);//6
     glEnd();


   // glFlush();
}
void init()
{
    glClearColor(1.000, 0.937, 0.835,0.0);//(1.0,0.999,0.9,0.0);
    glMatrixMode(GL_PROJECTION);//no change
    glLoadIdentity();//no change
    ///glOrtho(0, 1160, 0, 660, 0.0, -1.0);
    glOrtho(0, 1160,660,0, 0.0, -1.0);


}

void update(int value){
    if(cposx1>-200)
    {
    cposx1--;
    }
    else cposx1=300;
    if(cposx2>-300)
    {
    cposx2--;
    }
    else cposx2=150;
    if(cposy>0) cposy--;
    else cposy=35;

    glutPostRedisplay();
    glutTimerFunc(100,update,0);
}
//void coffee_smoke(int value){
//
//    if(cposy>0) cposy--;
//    else cposy=40;
//
//    glutPostRedisplay();
//    glutTimerFunc(150,coffee_smoke,0);
//}
void cloud1()
{
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(850,60,0);
   circle(50);
   glTranslatef(50,0,0);
   circle(30);
   glTranslatef(-100,0,0);
    circle(30);
//glColor3f(1.0, 0.0, 1.0);
//glTranslatef(240,120,0);
//  circle(30);
//  glTranslatef(30,0,0);
//  circle(20);
//  glTranslatef(-60,0,0);
//  circle(20);
  glTranslatef(-800,-60,0);
   // glFlush();
}
void cloud2()
{
    glColor3f(1.0, 1.0, 1.0);
glTranslatef(1040,180,0);
  circle(30);
  glTranslatef(30,0,0);
  circle(20);
  glTranslatef(-60,0,0);
  circle(20);
  glTranslatef(-1010,-180,0);

   // glFlush();
}
void spe_key(int key, int x, int y)
{
///glutKeyboardFunc(handleKeypress)
	switch (key) {

		case GLUT_KEY_LEFT:
				tr -=5;
				tl-=1;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tr +=5;
				tl+=1;
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
				ty +=2;
				tly+=0.5;
				glutPostRedisplay();
				break;

		case GLUT_KEY_UP:
				ty -=2;
				tly-=0.5;
				glutPostRedisplay();
				break;

	  default:
			break;
	}
}


void keyboard(GLubyte key, int x, int y)   // For keyboard interactive
{
    switch ( key )
    {
    case 'h':
        r=0.0;
        g=0.0;
        b=0.0;
        tl += 10;
        sndPlaySound("cut.wav",SND_FILENAME|SND_ASYNC);
       glutPostRedisplay();
        break;

    case 'e':
        r1=0.0;
        g1=0.0;
        b1=0.0;
        tr += 10;
        sndPlaySound("cut.wav",SND_FILENAME|SND_ASYNC);
        glutPostRedisplay();
        break;

     case 'l':
        //yt -= 3.0;
        r2=0.0;
        g2=0.0;
        b2=0.0;
        tl-=10;
        sndPlaySound("cut.wav",SND_FILENAME|SND_ASYNC);
        glutPostRedisplay();
        break;

    case 'o':
        //yt += 3.0;
        r3=0.0;
        g3=0.0;
        b3=0.0;
        r4=0.0;
        g4=0.0;
        b4=0.0;
        tr-=10;
        sndPlaySound("cut.wav",SND_FILENAME|SND_ASYNC);
        glutPostRedisplay();
        break;
 case 'd':
        //yt -= 3.0;
        r=r1=r2=r3=r4=0.863;
        g=g1=g2=g3=g4=0.863;
        b=b1=b2=b3=b4=0.863;
        sndPlaySound("cut.wav",SND_FILENAME|SND_ASYNC);
        glutPostRedisplay();
        break;
 case 'a':
        tl-=5;
        tr-=1;
        glutPostRedisplay();
        break;
 case 's':
        tl+=5;
        tr+=1;
        glutPostRedisplay();
        break;
 case 'w':
        tly-=2;
        ty-=0.5;
        glutPostRedisplay();
        break;
 case 'z':
        tly+=2;
        ty+=0.5;
        glutPostRedisplay();
        break;
    default:
        break;
    }
}

void display () {
//Only hat kape picture boro korle
  table();
  mobile();
   bookself();
  laptop();
   window();

     glPushMatrix();
    glTranslatef(cposx1,0,0);
    cloud1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cposx2,0,0);
    cloud2();
    glPopMatrix();

    cup();

    page();

     glPushMatrix();
    glTranslatef(0,cposy,0);
    smoke_draw();
    //traianle();
    glPopMatrix();




glPushMatrix();
    glTranslatef(tl,tly,0);
    Left_hand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tr,ty,0);
    Right_hand();
    glPopMatrix();

    writing();

    window_kath();
glFlush();
}

void reshape ( int width, int height ) {

    /* define the viewport transformation */
    glViewport(0,0,width,height);

}

int main ( int argc, char * argv[] ) {

    /* initialize GLUT, using any commandline parameters passed to the
       program */
    glutInit(&argc,argv);

    /* setup the size, position, and display mode for new windows */
    glutInitWindowSize(1160,660);
    glutInitWindowPosition(100,-10);
    glutInitDisplayMode(GLUT_RGB);

    /* create and set up a window */
    glutCreateWindow("Geek's Life!");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutSpecialFunc(spe_key);///oke janano je eta keyboard
    glutTimerFunc(25,update,0);
    //glutTimerFunc(35,coffee_smoke,0);
    glutKeyboardFunc(keyboard);
    /* tell GLUT to wait for events */
    glutMainLoop();

}
