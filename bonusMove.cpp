#include<iostream>
using namespace std;

void bonusMove(int p1, int p2) ;


main()
{

int player1, player2 ;
cout<<"Enter your position: ";
cin>> player1 ;

cout<<"Enter your friend's position: ";
cin>> player2 ;

bonusMove(player1, player2) ;

}


void bonusMove(int p1, int p2) 
{
if(p2-p1<=6)
{
cout<<"true" ;
}

if(p2-p1>6)
{
cout<<"false" ;
}


}

	