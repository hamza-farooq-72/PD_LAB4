#include<iostream>
using namespace std;

void comparetime(int h,int m) ;


main()
{

int hours, minutes;
cout<<"Enter the number of hours: ";
cin>> hours;

cout<<"Enter the number of minutes: ";
cin>> minutes ;

comparetime(hours,minutes) ;

}

void comparetime(int h,int m) 
{
int hoursToMinutes = h*60 ;

if(hoursToMinutes>m)
{
cout<< h ;
}
if(hoursToMinutes<m)
{
cout<< m ;
}


}

	