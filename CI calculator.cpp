#include <iostream>
#include<conio.h>
#include<math.h>
#include<string.h>

int main(){
int choice,n;
float time, p, r;
double amount;

std::cout<<"Enter your choice: (0/1) "<<"\n";
std::cin>>choice;

if(choice==0){
std::cout<<"Enter principal amount: "<<"\n";
std::cin>>p;
std::cout<<"Enter rate of interest: "<<"\n";
std::cin>>r;
std::cout<<"Enter time: "<<"\n";
std::cin>>time;
amount = p*r*time/100;
std::cout<<"Your Simple Interest Amount is: "<<amount<<"\n";
}
else if(choice==1){
std::cout<<"Enter principal amount: "<<"\n";
std::cin>>p;
std::cout<<"Enter rate of interest: "<<"\n";
std::cin>>r;
std::cout<<"Enter time: "<<"\n";
std::cin>>time;
std::cout<<"Enter number of times interest applied per time period: "<<"\n";
std::cin>>n;
amount = p*pow((1+(r/n)),n*time);
std::cout<<"Your Compound Interest Amount is: "<<amount<<"\n";
}
else{
std::cout<<"Invalid Input"<<"\n";
}
return 0;
}
