#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
float x1,y1,x2,y2,wx1,wy1,wx2,wy2,m;
int gd,gm;
void main()
{
clrscr();
cout<<"\nEnter the clip window co-ordinates:";
cin>>wx1>>wy1>>wx2>>wy2;
cout<<"\n Enter the line co-ordinates:";
cin>>x1>>y1>>x2>>y2;
m=(y2-y1)/(x2-x1);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"\n\n\t\t\t Before clipping:";
rectangle(wx1,wy1,wx2,wy2);
line(x1,y1,x2,y2);
getch();
closegraph();
if(x1<wx1)
{
y1=y1+(wx1-x1)*m;
x1=wx1;
}
if(x2>wx2)
{
y2=y2-(x2-wx2)*m;
x2=wx2;
}
if(y2>wy2)
{
x2=x2-((y2-wy2)/m);
y1=wy1;
}
if(y1<wy1)
{
x1=x1+(wy1-y1)/m;
y1=wy1;
}
if(x2<wx1)
{
y2=y2+(wx1-x2)*m;
x2=wx1;
}
if(x1>wx2)
{
y1=y1-(x1-wx2)*m;
x1=wx2;
}
if(y2<wy1)
{
x2=x2+((wy1-y2)/m);
y2=wy1;
}
if(y1>wy2)
{
x1=x1-((y1-wy2)/m);
y1=wy2;
}
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"\n\n\t\t\t After clipping:";
rectangle(wx1,wy1,wx2,wy2);
line(x1,y1,x2,y2);
getch();
}

