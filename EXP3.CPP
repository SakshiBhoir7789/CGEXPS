#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int xc,yc, x,y, r,d;
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("******** BRESENHAMS CIRCLE DRAWING ALGORITHM********\n");
printf("Enter the centre co:");
scanf("%d%d",&xc,&yc);
printf("Enter the radius:");
scanf("%d",&r);
d=3-2*r;
x=0;
y=r;
while(x<=y)
{
putpixel(xc+x,yc+y,5);
putpixel(xc-x,yc-y,5);
putpixel(xc+x,yc-y,5);
putpixel(xc-x,yc+y,5);
putpixel(xc+y,yc+x,5);
putpixel(xc-y,yc+x,5);
putpixel(xc+y,yc-x,5);
putpixel(xc-y,yc-x,5);
if(d<0)
{
d=d+4*x+6;
}
