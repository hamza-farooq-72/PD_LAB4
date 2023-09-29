#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int, int);
void movePlayer(int, int) ;
 
main()
{
system("cls") ;
int x=5,y=5 ;
printmaze();
while(true)
{
movePlayer(x,y);
x = x+1 ;
if(x>=50)
{
x = 5 ;
}
}

}

void movePlayer(int x, int y) 
{
gotoxy(x,y);

cout<<"p";
Sleep(200) ;
gotoxy(x,y);
cout<<" ";
}


void printmaze()
{
cout<<"  ########################################################   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  #                                                      #   "<<endl;
cout<<"  ########################################################   "<<endl;
}




void gotoxy(int x,int y)
{
COORD coordinates ;
coordinates.X = x ;
coordinates.Y = y ;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates) ;


}