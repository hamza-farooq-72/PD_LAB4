#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int, int) ;
 
main()
{
system("cls") ;
int x=79	, y=22 ;
gotoxy(x,y) ;
cout<< "HAMZA BUTT" ;
gotoxy(x,y) ;
x=100 , y= 50 ;

}



void gotoxy(int x,int y)
{
COORD coordinates ;
coordinates.X = x ;
coordinates.Y = y ;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates) ;


}