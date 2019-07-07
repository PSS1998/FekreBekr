#include "graphic2.h"
#include "graphics.h"
#define BLACK 0
#define WHITE 15
int graphic2(int position, int number, int input1, int input2, int input3, int input4, int opportunity){
int q=7;
int w=7;
int e=7;
int r=7;
	if(position==1){/*sets the colors of guide pins*/
		q=BLACK;
	}
	else if(position==2){
		q=BLACK;
		w=BLACK;
	}
	else if(position==3){
		q=BLACK;
		w=BLACK;
		e=BLACK;
	}
	else if(position==4){
		q=BLACK;
		w=BLACK;
		e=BLACK;
		r=BLACK;
	}
	if(number==1){
		r=WHITE;
	}
	else if(number==2){
		r=WHITE;
		e=WHITE;
	}
	else if(number==3){
		r=WHITE;
		e=WHITE;
		w=WHITE;
	}
	else if(number==4){
		r=WHITE;
		e=WHITE;
		w=WHITE;
		q=WHITE;
	}

	setcolor(1);
	line(260, 0, 260, 900);
	
	setcolor(1);/*input circle*/
	circle(50, 50+opportunity*50, 20);
	setfillstyle(1, input1);
	floodfill(50, 50+opportunity*50, 1);
	
	setcolor(1);
	circle(100, 50+opportunity*50, 20);
	setfillstyle(1, input2);
	floodfill(100, 50+opportunity*50, 1);
	
	setcolor(1);
	circle(150, 50+opportunity*50, 20);
	setfillstyle(1, input3);
	floodfill(150, 50+opportunity*50, 1);
	
	setcolor(1);
	circle(200, 50+opportunity*50, 20);
	setfillstyle(1, input4);
	floodfill(200, 50+opportunity*50, 1);
	
	/*--------------*/

		
	setcolor(1);/*guidence circles*/
	circle(300, 45+opportunity*50, 5);
	setfillstyle(1, q);
	floodfill(300, 45+opportunity*50, 1);
	
	setcolor(1);
	circle(310, 45+opportunity*50, 5);
	setfillstyle(1, w);
	floodfill(310, 45+opportunity*50, 1);

	setcolor(1);
	circle(310, 55+opportunity*50, 5);	
	setfillstyle(1, e);
	floodfill(310, 55+opportunity*50, 1);
	
	setcolor(1);
	circle(300, 55+opportunity*50, 5);
	setfillstyle(1, r);
	floodfill(300, 55+opportunity*50, 1);
	
	

	delay(1500);

q=7;
w=7;
e=7;
r=7;
return 0;
}