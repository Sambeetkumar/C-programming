//line_translation
#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
	int gmode,gdriver=DETECT;
	int l[2][2],v[2]={10,15},i=0,j;
	initgraph(&gdriver,&gmode,(char*)"");
	cout<<"enter the initial and final coordinates of a line: ";
	
	while(i<2)
	{
		cout<<"x"<<i<<"and"<<"y"<<i<<" = ";
		j=0;
		cin>>l[i][j];
		cin>>l[i][j+1];
		i++;
	}
	line(l[0][0],l[0][1],l[1][0],l[1][1]);
	setcolor(WHITE);
	line(l[0][0]+v[0],l[0][1]+v[1],l[1][0]+v[0],l[1][1]+v[1]);
	getch();
	closegraph();
	return 0;
}
