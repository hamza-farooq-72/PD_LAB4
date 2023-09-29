#include<iostream>
using namespace std;

void Discount(string nam,float amt) ;


main()
{
string name ;
float amount ;
cout<<"Enter the country's name: ";
cin>> name ;
cout<<"Enter the ticket price in dollars: $";
cin>> amount ;
Discount(name,amount) ;

}


void Discount(string nam,float amt) 
{
if(nam=="Pakistan")
{
cout<<"Final ticket price after discount: $" << amt-(amt*0.95) ;
}
if(nam=="Ireland")
{
cout<<"Final ticket price after discount: $" << amt-(amt*0.90) ;
}
if(nam=="India")
{
cout<<"Final ticket price after discount: $" << amt-(amt*0.80) ;
}
if(nam=="England")
{
cout<<"Final ticket price after discount: $"  << amt-(amt*0.70) ;
}
if(nam=="Canada")
{
cout<<"Final ticket price after discount: $"  << amt-(amt*0.55) ;
}


}

