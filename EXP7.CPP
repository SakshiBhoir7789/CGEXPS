#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i, x, y, tx, ty, sx, sy, angle=10, xmax, ymax, xmid, ymid, op;
 int gd,gm;
 float p1[10]={50,50, 100,50,100,100, 50,100,50,50,};
 int pi[10];
 float b[3][3]={1,0,0,0,1,0,0,0,1};
 int c[1][1];
 float a[1][1];
 clrscr();
 printf("\nSelect the transformation: ");
 printf("\n1: Traslation");
 printf("\n2: Rotation");
 printf("\n3 Scaling");
 printf("\nEnter the option: ");
 scanf("%d",&op);
 switch(op)
   {
    case 1:
	   printf("\nEnter x traslation: ");
	   scanf("%d", &tx);
	   printf("\nEnter y traslation: ");
	   scanf("%d",&ty);
	   b[0][0] = 1;
	   b[0][1] = 0;
	   b[0][2] = 0;
	   b[1][0] = 0;
	   b[1][1] = 1;
	   b[1][2] = 0;
	   b[2][0] = tx;
	   b[2][1] = ty;
	   b[2][2] = 1;
	   break;
   case 2:
	  printf("\nEnter Rotation angle: ");
	  scanf("%d",&angle);
	  tx=x;
	  ty=y;
	  b[0][0] = cos(angle*3.142/180);
	  b[0][1] = sin(angle*3.142/180);
	  b[0][2] = 0;
	  b[1][0] = -sin(angle*3.142/180);
	  b[1][1] = cos(angle*3.142/180);
	  b[1][2] = 0;
	  b[2][0] = 0;
	  b[2][0] = 0;
	  b[2][1] = 1;
	  break;
   case 3:
	  printf("\nEnter x scaling: ");
	  scanf("%d",&sx);
	  printf("\\nEnter y scaling: ");
	  scanf("%d", &sy);
	  b[0][0] = sx;
	  b[0][1] = 0;
	  b[0][2] = 0;
	  b[1][0] = 0;
	  b[1][1] = sy;
	  b[1][2] = 0;
	  b[2][0] = 0;
	  b[2][1] = 0;
	  b[2][2] = 1;
	  break;
  }

detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); // Initialize graphics

xmax = getmaxx();    // Get maximum x coordinate
ymax = getmaxy();    // Get maximum y coordinate
xmid = xmax/2;       // Get the center x coordinate
ymid = ymax/2;       // Get the center y coordinate

setcolor(BLUE);
line(xmid,0,xmid,ymax);    // Draw x coordinate
line(0, ymid, xmax, ymid); // Draw x coordinate

setcolor(RED);
for (i=0; i<8;i=i+2)
 {
  line(p1[i]+xmid,ymid-p1[i+1],xmid+p1[i+2],ymid-p1[i+3]);
 }
for(i=0;i<9;i=i+2)
 {
  a[0][0] = p1[i];
  a[0][1] = p1[i+1];
  c[0][0] = a[0][0]*b[0][0]+a[0][1]*b[1][0]+b[2][0];
  c[0][1] = a[0][0]*b[0][1]+a[0][1]*b[1][1]+b[2][1];
  pi[i]=c[0][0];
  pi[i+1]=c[0][1];
 }
setcolor(GREEN);
for (i=0; i<8;i=i+2)
{
 line(xmid+pi[i],ymid-pi[i+1],xmid+pi[i+2],ymid-pi[i+3]);
}
getch();
closegraph();
return 0;
}
