#include "graphic2.h"
#include "graphics.h"
int graphic3(int random1, int random2, int random3, int random4){

	
	clearviewport();

	setcolor(1);/*random number circles*/
	circle(50, 50, 20);
	setfillstyle(1, random1);
	floodfill(50, 50, 1);
	
	setcolor(1);
	circle(100, 50, 20);
	setfillstyle(1, random2);
	floodfill(100, 50, 1);
	
	setcolor(1);
	circle(150, 50, 20);
	setfillstyle(1, random3);
	floodfill(150, 50, 1);
	
	setcolor(1);
	circle(200, 50, 20);
	setfillstyle(1, random4);
	floodfill(200, 50, 1);


	delay(10000);
	return 0;
}