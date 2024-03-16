#include <iostream>
using namespace std;

int addition(int a , int b){
	int sum = a + b;
	return sum;
}

int main(){
	int num1 , num2;
	cout<<"please enter two numbers !! \n";
	cin>>num1;
	cin>>num2;

	int sum = addition(num1,num2);

	cout<<"The sum of both the numbers is :- "<<sum;

	return 0;
}
