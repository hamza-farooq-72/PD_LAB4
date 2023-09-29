#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int, int);
void movePlayer(int, int) ;
 
main()
{
system("cls") ;
int x=5,y=2 ;
printmaze();
while(true)
{
movePlayer(x,y);
y = y+1 ;
if(y>=16)
{
y = 16-y ;
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