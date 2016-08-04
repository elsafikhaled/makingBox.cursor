

/* libraries*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<windows.h>

/* global declaration */
int num1,num2,result=0;
int num;

/* x-axis y-axis coordination function  */
 COORD coord={0,0};
 void gotoxy(int x,int y)
 {
	 COORD coord;
	 coord.X=x;
	 coord.Y=y;
         SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 }

 /* function declarations */
  void Box();
  void mainMenu();
  void Addition();
  void Multiplication();
  void Subtraction();
  void Division();
  void Exit();
  void Error();
  void ReturnMenu();

/* main function */
 int main(void)
 {
	 mainMenu();
         gotoxy(9,17);

 }


 /* Making box around text*/
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

 /* main menu contain all operations on operators*/
  void mainMenu()
 {
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
         Box();
	 gotoxy(10,14);
         printf("ENTER THE NUMBER OF THE OPERATION:  ");
         scanf("%d",&num);


     switch(num)
	   {
		 case 1:
		 Addition();break;
		 case 2:
		 Multiplication();break;
		 case 3:
		 Division();break;
		 case 4:
		 Subtraction();break;
		 case 5:
		 Exit();break;
		 default :
		 Error();break;

	   }

 }


 void Addition()
{  system("cls");
   Box();
   gotoxy(24,3);
   printf("%c",35);
   gotoxy(25,3);
   printf("Addition");
   gotoxy(12,5);
   printf("Enter the 1'st number(integer): ");
   scanf("%d",&num1);
   gotoxy(12,7);
   printf("Enter the 2'nd number(integer): ");
   scanf("%d",&num2);
   result=num1+num2;
   gotoxy(12,10);
   printf("result :%d",result);
   ReturnMenu();
}

void Multiplication()
{
   system("cls");
   Box();
   gotoxy(24,3);
   printf("%c",35);
   gotoxy(25,3);
   printf("Multiplication");
   gotoxy(12,5);
   printf("Enter the 1'st number(integer): ");
   scanf("%d",&num1);
   gotoxy(12,7);
   printf("Enter the 2'nd number(integer): ");
   scanf("%d",&num2);
   result=num1*num2;
   gotoxy(12,10);
   printf("result :%d",result);
   ReturnMenu();
}

void Division()
{
   system("cls");
   Box();
   gotoxy(24,3);
   printf("%c",35);
   gotoxy(25,3);
   printf("Division");
   gotoxy(12,5);
   printf("Enter the 1'st number(integer): ");
   scanf("%d",&num1);
   gotoxy(12,7);
   printf("Enter the 2'nd number(integer): ");
   scanf("%d",&num2);
   result=num1/num2;
   gotoxy(12,10);
   printf("result :%d",result);
   ReturnMenu();
}

void Subtraction()
{
   system("cls");
   Box();
   gotoxy(24,3);
   printf("%c",35);
   gotoxy(25,3);
   printf("Subtraction");
   gotoxy(12,5);
   printf("Enter the 1'st number(integer): ");
   scanf("%d",&num1);
   gotoxy(12,7);
   printf("Enter the 2'nd number(integer): ");
   scanf("%d",&num2);
   result=num1-num2;
   gotoxy(12,10);
   printf("result :%d",result);
    ReturnMenu();
}
void Exit()
{  char ch ;
   system("cls");
   Box();
   gotoxy(24,3);
   printf("%c",35);
   gotoxy(25,3);
   printf("Exit");
   gotoxy(12,5);
   printf("DO You want to exit (Y/N)? ");
   sleep(2);
   ch=(getche());
   if(ch=='y'||ch=='Y')
   {
	 system("cls");

     gotoxy(25,6);
     printf("Loading.............");
     Sleep(2000);
     exit(0);
   }
   else { system("cls");mainMenu();}
}


 void Error()
 {
   system("cls");
   Box();
   gotoxy(24,3);
   printf("%c",35);
   gotoxy(25,3);
   printf("ERROR");
   gotoxy(12,5);
   printf("Enter the right number: \n ");
   gotoxy(16,9);
   printf("1/2/3/4/5 \n ");
   gotoxy(12,13);
   printf("Return to mainMenu........ !!");
   sleep(3);
   system("cls");
   mainMenu();
 }

void ReturnMenu()
{
   char ch;
   gotoxy(11,14);
   printf("Return to Menu (Y/N)? ");
   sleep(2);
   ch=(getche());
   if(ch=='y'||ch=='Y')
   {
	 system("cls");
     Box();
     gotoxy(25,6);
     printf("Loading.............");
     Sleep(2000);
     system("cls");
     mainMenu();
   }
   else
   {
     system("cls");
     gotoxy(25,6);
     printf("Loading.............");
     Sleep(2000);
     exit(0);
   }


}
