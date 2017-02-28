#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
	int number;
	cin>>number;
	cout<<endl;
	long long answer=1;
	if(number==0)
		answer=1;
	if(number==1)
		answer=1;
	for(int i=2;i<=number;i++)
		answer*=i;
	cout<<answer;
}
