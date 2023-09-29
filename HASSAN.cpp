#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int, int);
void wordH() ;
void wordA() ;
void wordSs() ;
void wordS() ;
void wordAa() ;
void wordN() ;
 
main()
{
system("cls") ;
int x,y  ;
x=50,y=12 ;
gotoxy(x,y);
wordH() ;
x=50  , y=13  ;
gotoxy(x,y);
wordA() ;
x=50  , y=14  ;
gotoxy(x,y);
wordSs() ;
x=50  , y=15  ;
gotoxy(x,y);
wordS() ;
x=50  , y=16  ;
gotoxy(x,y);
wordAa() ;
x=50  , y=17  ;
gotoxy(x,y);
wordN() ;


}

	
void wordH() 
{
cout<<"H" <<endl ;
}
void wordA() 
{
cout<<"A" <<endl ;
}

void wordSs() 
{
cout<<"S" <<endl ;
}

void wordS() 
{
cout<<"S" <<endl ;
}

void wordAa() 
{
cout<<"A" <<endl ;
}


void wordN() 
{
cout<<"N" <<endl ;
}



void gotoxy(int x,int y)
{
COORD coordinates ;
coordinates.X = x ;
coordinates.Y = y ;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates) ;


}