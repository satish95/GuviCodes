#include<iostream>
using namespace std;

int main(){
	int number;
	cin>>number;
	if(number>0)
		cout<<"Positive";
	else if(number<0)
		cout<<"negative";
	else
		cout<<"Zero";
	return 0;
}