#include <iostream>
using namespace std;

int isLeapYear(int year){
	if (year%4==0){
		cout<<"The given year is a leap year !! \n";
	}else if(year % 100==0){
		cout<<"The given year is a leap yeah \n";
	}else{
		cout<<"The given year is not a leap year !! \n";
	}
	return 0;
}

int main(){
	int year;
	cout<<"This code whill check if the year that you are providng is a leap year or not !!\n";
	cout << "Enter the year below please !! \n";
	cin>>year;
	
	isLeapYear(year);
}
