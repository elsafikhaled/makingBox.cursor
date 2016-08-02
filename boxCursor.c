
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<windows.h>

 COORD coord={0,0};
 void gotoxy(int x,int y)
 {
	 COORD coord;
	 coord.X=x;
	 coord.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 }

 void Box()
 {
	 char cursor;
	 gotoxy(8,1);
	 printf("%c",201);
	 for(cursor=9;cursor<51;cursor++)
	 {
		 gotoxy(cursor,1);
		 printf("%c",205);
	 }
	 gotoxy(51,1);
	 printf("%c",187);
	 for(cursor=15;cursor>1;cursor--)
	 {
		 gotoxy(51,cursor);
		 printf("%c",186);
	 }
	 gotoxy(51,16);
	 printf("%c",188);
	 for(cursor=50;cursor>8;cursor--)
	 {
		 gotoxy(cursor,16);
		 printf("%c",205);
	 }
	 gotoxy(8,16);
	 printf("%c",200);
	 for(cursor=15;cursor>1;cursor--)
	 {
		 gotoxy(8,cursor);
		 printf("%c",186);
	 }




 }

 void mainMenu()
 {
	 char num;
	 gotoxy(23,3);
	 printf(" Welcome user ");
	 gotoxy(25,4);
	 printf("calculator");
	 gotoxy(10,8);
	 printf("1-Addition");
	 gotoxy(10,9);
	 printf("2-Multiplication");
	 gotoxy(10,10);
	 printf("3-Division");
	 gotoxy(10,11);
	 printf("4-Subtraction");
	 gotoxy(10,12);
	 printf("5-Exit");
	 gotoxy(10,14);
	 printf("ENTER THE NUMBER OF THE OPERATION:  ");
	 scanf("%d",&num);
 }

 int main(void)
 {
	 Box();
	 mainMenu();
     gotoxy(9,17);




 }

