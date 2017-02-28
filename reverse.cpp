#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main() {
	// your code goes here
	char input[100];
	cin>>input;
	int len=strlen(input);
	for(int i=len-1;i>=0;i--)
	cout<<input[i];
	return 0;
}