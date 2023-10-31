#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood_fill(int x,int y,int old,int new_col)
{
int current;
current=getpixel(x,y);
if(current==old)
{
delay(5);
putpixel(x,y,new_col);
flood_fill(x+1,y,old,new_col);
flood_fill(x,y+1,old,new_col);
flood_fill(x-1,y,old,new_col);
flood_fill(x,y-1,old,new_col);
flood_fill(x-1,y-1,old,new_col);
flood_fill(x-1,y+1,old,new_col);
flood_fill(x+1,y-1,old,new_col);
flood_fill(x+1,y+1,old,new_col);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
//RECTANGLE FUNCTION
rectangle(50,50,150,150);
//function calling
flood_fill(70,70,0,15);
getch();
closegraph();
}
