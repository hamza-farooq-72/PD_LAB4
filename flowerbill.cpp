#include<iostream>
using namespace std;

void flowerShop(int redRose,int whiteRose,int tulip) ;


main()
{

int redR,whiteR,tul;
cout<<"Red Rose: ";
cin>> redR;
cout<<"White Rose: ";
cin>> whiteR;
cout<<"Tulips: ";
cin>> tul ;
flowerShop(redR,whiteR,tul) ;

}


void flowerShop(int redRose,int whiteRose,int tulip)
{
float billofRR;
int oneRR= 2 ;
billofRR = oneRR*redRose  ;

float billofWR;
float oneWR= 4.10 ;
billofWR = oneWR*whiteRose ;

float billofT;
float oneT= 2.50 ;
billofT = oneT*tulip  ;

float Total= billofRR+billofWR+billofT ;

cout<<"Original Price: $"  <<Total  <<endl;
if(Total>200)
{
cout<<"Price after Discount: $" << Total-(Total*20/100) <<endl;
}
if(Total<=200)
{
cout<<"No discount applied." ;

}



}

