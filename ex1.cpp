#include <iostream>
using namespace std;

int main() {
	int filesizes[]={43,22,190,67,34,73};
	int maxvalue=0;
	for (int i = 0; i < 6; i++) {

	if(filesizes[i] > maxvalue)
	{
		maxvalue = filesizes[i];
	}
	}

	int maxvalue;
	cout << "The biggest file size is: "<<maxvalue;
}
