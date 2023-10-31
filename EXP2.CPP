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
void draw(int x1,int y1,int x2,int y2)
{
       float x,y,dx,dy;
       int e,k,a;
       dx=x2-x1;
       dy=y2-y1;
       e=2*dy-dx;
       x=x1;
        y=y1;
        putpixel((x),(y),111);
        for(k =x1;k<=x2;k++)
                {
                     if(e<0)
                              {
                                   a=e+2*dy;
                                    e=a;
                                 }
                        else
                                  {
                                     a=e+2*(dy-dx);
                                         e=a;
                                      }
                        x++;
                         if(e>0)
                           y++;
                           putpixel((x),(y),111);
                          }
}
