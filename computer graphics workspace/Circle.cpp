//midpoint circle drawing
#include <iostream>
#include <graphics.h>

using namespace std;
int main()
{
	int x = 0,y,r,xc,yc,d,gm,gd=DETECT;
	initgraph(&gm,&gd,(char*)"");
	cout<<"\nEnter the coordinates of the center :";
	cin>>xc>>yc;
	cout<<"\nEnter the radius of the circle :";
	cin>>r;
	
	y=r;
	d=1-r;
	putpixel(xc,yc,BLUE);
	while(x<=y)
	{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
	    putpixel(xc-x,yc-y,WHITE);
	    putpixel(xc+y,yc+x,WHITE);
	    putpixel(xc-y,yc+x,WHITE);
	    putpixel(xc+y,yc-x,WHITE);
	    putpixel(xc-y,yc-x,WHITE);
	    if(d<0)
	    {
	    	d=d+2*x+1;
		}
		else{
			d=d+2*(x-y)+1;
			y--;
		}x++;
	}
	getch();
	closegraph();
}
