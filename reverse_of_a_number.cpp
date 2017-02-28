#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;
int main(){
	int number;
	int reverse,temp;
	cin>>number;
	while(number!=0){
		reverse=reverse*10;
		reverse=reverse+number%10;
		number=number/10;
	}
	cout<<endl<<reverse;
	return 0;
}
