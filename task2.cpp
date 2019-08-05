#include <iostream>
#include <ctime>
using namespace std;


int main() {

	int filesizes[3];
	int amount;
	int total;
	int average;

	srand((unsigned)time(0));

	    for(int i=0; i<3; i++){
	        filesizes[i] = (rand()%100)+1;

	    }
	amount = 3;
	total = filesizes[0]+filesizes[1]+filesizes[2];
	average = total / amount;
cout << "Amount of files: "<<amount<<endl;
cout << "Total storage required: "<<(total)<<"MB"<<endl;
cout << "Average file size: "<<(average)<<"MB"<<endl;
}
