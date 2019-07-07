#include "graphic1.h"
#include "graphic4.h"
#include "graphic2.h"
#include "graphic3.h"
#include "random.h"
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define BLACK 0
#define WHITE 15
int main ()
{
int input_done1=0;/*a varible to show which input number analyze is done*/
int input_done2=0;
int input_done3=0;
int input_done4=0;
int random_done1=0;/*a varible to show which random number analyze is done*/
int random_done2=0;
int random_done3=0;
int random_done4=0;
int random1;
int random2;
int random3;
int random4;
int input1;
int input2;
int input3;
int input4;
int position = 0;
int input;
int number=0;/*similar numbers*/
int opportunity;
graphic1();/*clears window*/
int q=7;/*color of guide pins*/
int w=7;
int e=7;
int r=7;
	printf("Welcome to Fekr_e_Bekr Gamne\n");
/*Generates random numbers*/
	random1 = random();
	random2 = random();
	random3 = random();
	random4 = random();
/*------------*/
for (opportunity=1; opportunity<=10; opportunity++){
/*-------*/
	printf("Enter a number with 4 digits between 1 & 6 : ");
	scanf("%d", &input);
/*-------*/
	input4 = input%10;/*seperating each digit of input*/
	input3 = (input%100-input4)/10;
	input2 = (input%1000-input4-input3)/100;
	input1 = (input%10000-input4-input3-input2)/1000;
/*-------*/
	if(input>6666||input<1111||input1>6||input1<1||input2>6||input2<1||input3>6||input3<1||input4>6||input4<1){/*checks if the input is correct*/ 
		printf("Entered number is wrong!Please try again.\n");
		opportunity--;
		continue;
	}
	/*-------*/
	if(input1 == random1 && input2 == random2 && input3 == random3 && input4 == random4){/*cheks if the game has ended*/
	printf("congratulations, you have won!");
	graphic4();
	break;
}
/*-------*/
	if(input1 == random1)
	{
      	position = position+1;/*adding one to position variable to count them*/
	input_done1 = 1;/*if input is used in position or number then input_done would be 1*/
        random_done1=1;/*if random is used in position or number then random_done would be 1*/
	}
	if(input2 == random2)
	{
      	position = position+1;
	input_done2 = 1;
        random_done2=1;
	}
	if(input3 == random3)
	{
      	position = position+1;
	input_done3 = 1;
        random_done3=1;
	}
	if(input4 == random4)
	{
      	position = position+1;
	input_done4 = 1;
        random_done4=1;
	}
/*........*/
     	if(input_done1 != 1)
	{
	if(input1==random2 && random_done2!=1)
		{
		number++;/*adding one to number variable to count them*/
		input_done1=1;
  random_done2=1;
           } else{ if(input1==random3 && random_done3!=1){
                number++;
                input_done1=1;
                random_done3=1;
               } else {if(input1==random4 && random_done4!=1){
                    number++;
                    input_done1=1;
                    random_done4=1;
                }
            }
		}
	}
               	
/*=======*/
		if(input_done2 != 1)
	{
	if(input2==random1 && random_done1!=1)
		{
		number++;
		input_done2=1;
  random_done1=1;
           } else {if(input2==random3 && random_done3!=1){
                number++;
                input_done2=1;
                random_done3=1;
              }  else {if(input2==random4 && random_done4!=1){
                    number++;
                    input_done2=1;
                    random_done4=1;
                }
            }
		}
	}
            
/*=======*/
		if(input_done3 != 1)
	{
	if(input3==random1 && random_done1!=1)
		{
		number++;
		input_done3=1;
  random_done1=1;
          }  else {if(input3==random2 && random_done2!=1){
                number++;
                input_done3=1;
                random_done2=1;
               } else {if(input3==random4 && random_done4!=1){
                    number++;
                    input_done3=1;
                    random_done4=1;
                }
            }
		}
	}
            
/*.......*/
	if(input_done4 != 1)
	{
	if(input4==random1 && random_done1!=1)
		{
		number++;
		input_done4=1;
  random_done1=1;
           } else {if(input4==random2 && random_done2!=1){
                number++;
                input_done4=1;
                random_done2=1;
               } else {if(input4==random3 && random_done3!=1){
                    number++;
                    input_done4=1;
                    random_done3=1;
                }
            }
		}
	}
graphic2(position, number, input1, input2, input3, input4, opportunity);
	printf("\n number : %d\n-------	*",number);
	printf("\n position : %d\n-------	*",position);
	number=0;
	position=0;
	input_done1=0;
	input_done2=0;
	input_done3=0;
	input_done4=0;
	random_done1=0;
	random_done2=0;
	random_done3=0;
	random_done4=0;
	}
	printf("\nThe random number is : %d%d%d%d\n",random1,random2,random3,random4);
	graphic3(random1, random2, random3, random4);
}