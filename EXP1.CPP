#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void draw(int x1,int y1,int x2,int y2);
int main (void)
{
int x1,y1,x2,y2;
int gdriver=DETECT,gmode,gerror;
printf("Enter starting point:\n");
scanf("%d %d",&x1,&y1);
printf("Enter ending point:\n");
scanf("%d %d",&x2,&y2);
clrscr();
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
draw(x1,y1,x2,y2);
getch();
return 0;
}
void draw(int x1, int y1, int x2,int y2)
{
float x,y,xinc,yinc,dx,dy;
int k,step;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
step=abs(dx);
else
step=abs(dy);
xinc=dx/step;
yinc=dy/step;
x=x1;
y=y1;
putpixel(abs(x),abs(y),111);
for(k=1; k<=step; k++)
{
x=x+xinc;
y=y+yinc;
putpixel(abs(x),abs(y),111);
}
}
