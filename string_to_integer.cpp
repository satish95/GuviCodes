#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	char input[100];
	cin>>input;
	cout<<endl;
	for(int i=0;i<strlen(input);i++)
	cout<<(int)input[i]<<" ";
	return 0;
}
