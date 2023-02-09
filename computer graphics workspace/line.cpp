//bresenham line drawing
#include <iostream>
#include <graphics.h>

using namespace std;
void drawline(int x1, int y1, int x2, int y2)
{
	int dx,dy,x,y,p;
	dx = x2-x1;
	dy = y2-y1;
	x = x1;
	y = y1;
	p = 2*dy-dx;
	
	while(x<=x2)
	{
		if(p>=0)
		{
			putpixel(x,y,WHITE);
			p=p+2*(dy-dx);
			y++;
		}
		else{
			putpixel(x,y,WHITE);
			p = p+2*dy;
		}
		x++;
	}getch();
}
int main()
{
	int x1,x2,y1,y2,gm,gd=DETECT;
	initgraph(&gm,&gd,(char*)"");
	cout<<"Enter the coordinates of the first point : ";
	cin>>x1>>y1;
	cout<<"Enter the coordinates of the second point : ";
	cin>>x2>>y2;
	 
	drawline(x1,y1,x2,y2);
	return 0;
}
