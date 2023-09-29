#include<iostream>
using namespace std;

void pet(int holidays) ;

main()
{

int holiD ;
cout<<"Holidays: ";
cin>> holiD ;

pet(holiD) ;

}

void pet(int holidays) 
{
int workingDmin, holiDmin, Totalmins , difftoNorm;

workingDmin=  (365-holidays)*63 ;
holiDmin =  holidays*127;
Totalmins=  workingDmin+holiDmin ; 

if(Totalmins<30000)
{
difftoNorm= (30000-Totalmins)/60 ;
int remMins ;
remMins=difftoNorm%60 ;

cout<<"Tom sleeps well" <<endl ;
cout<<difftoNorm <<" hours and " <<remMins <<" minutes less for play"  ;

}

if(Totalmins>30000)
{
int difftoNorm1 = (Totalmins-3000)/60 ;
int remMins1;
remMins1 =difftoNorm1%60;

cout<<"Tom will run away" <<endl ;
cout<<difftoNorm1  <<" hours and "<<remMins1  <<" minutes for play"  ;

}

}