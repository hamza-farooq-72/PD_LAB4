#include<iostream>
using namespace std;

void CheckSpeed(int speed) ;


main()
{

int Speed ;
int amount ;
cout<<"Speed: ";
cin>> Speed ;

CheckSpeed(Speed) ;

}

void CheckSpeed(int speed) 
{
if(speed>100)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!" ;
}

if(speed<=100)
{
cout<<"Perfect! You're going good." ;
}


}

	