#include <iostream>
using namespace std;
int main ()
{	int paraffin, vs, op, amount, ab;
	double petrol, diesel, litres, balance, buy;
	while (ab<10000000){
		cout<<"_______WELCOME TO TOTAL PETROL STATION__________ \n";
	cout<<"PETROL 3,854 \n";
	petrol = 3854;
	cout<<"DIESEL 3,450 \n";
	diesel = 3450; 
	cout<<"PARAFFIN 3,210 \n";
	paraffin= 3210;
	cout<<"VECHICLE SERVICING 15,000 \n";
	vs = 15000;
	cout<<"Enter option \n";
	cout<<"1. Petrol \n2. Diesel \n3. Paraffin \n4. Vechicle servicing. \n";
	cin>>op;
	if (op==1){
		cout<<"PETROL \n";
		cout<<"ENTER AMOUNT PAID  \n";
		cin>>amount;
		cout<<"HOW MUCH FUEL DO YOU WANNA BUY? \n";
		cin>>buy;
		cout<<"NO. of litres =  \n";
		litres = buy / petrol;
		cout<<litres<<endl;
		balance = amount - buy;
		cout<<"YOUR BALANCE IS  \n";
		cout<<balance<<endl;
	
	}
	else if  (op==2){
		cout<<"DIESEL \n";
		cout<<"ENTER AMOUNT PAID  \n";
		cin>>amount;
		cout<<"HOW MUCH FUEL DO YOU WANNA BUY? \n";
		cin>>buy;
		cout<<"NO. of litres =  \n";
		litres = buy/diesel;
		cout<<litres<<endl;
		balance = amount - buy;
		cout<<"YOUR BALANCE IS  \n";
		cout<<balance<<endl;
	
	}
	else if (op==3){
		cout<<"PARAFFIN \n";
		cout<<"ENTER AMOUNT PAID  \n";
		cin>>amount;
		cout<<"HOW MUCH FUEL DO YOU WANNA BUY? \n";
		cin>>buy;
		cout<<"NO. of litres =  \n";
		litres = buy/paraffin;
		cout<<litres<<endl;
		balance = amount - buy;
		cout<<"YOUR BALANCE IS  \n";
		cout<<balance<<endl;
	
	}
	else if (op==4){
		cout<<"VECHICLE SERVICING \n";
		cout<<"ENTER AMOUNT PAID  \n";
		cin>>amount;
		balance = amount - vs;
		cout<<"YOUR BALANCE IS  \n";
		cout<<balance<<endl;
	
	}
} 
}
