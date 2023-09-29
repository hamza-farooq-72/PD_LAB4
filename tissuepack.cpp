#include<iostream>
using namespace std;

void tpChecker(int peop, int rolls) ;


main()
{

int memb,roll ;
cout<<"Number of people in the household: ";
cin>> memb;
cout<<"Number of rolls of TP: ";
cin>> roll;

tpChecker(memb,roll) ;

}

void tpChecker(int peop, int rolls) 
{
int oneroll = 500 ;
int onepersonusePerday = 57 ;
int totaluse = peop*onepersonusePerday ;
int totalrollsheets = oneroll*rolls ;
int howmanyDays = totalrollsheets/totaluse ;

if(howmanyDays<=5) 
{
cout<<"Your TP will only a  /	4TH;I
L
/11 \.,,.  M    last " << howmanyDays <<" days, buy more!"  ;             
}

if(howmanyDays>5) 
{
cout<<"Your TP will last " << howmanyDays <<" days, no need to panic!"  ;             
}


}

	