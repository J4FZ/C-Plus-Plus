#include <iostream>

using namespace std;

int setup() {
	int noa;
	int noe;
	int noi;
	int noo;
	int nou;
	cout << "Enter a string :";
	cin >> string;

	if (string.find("a") != string::npos); {
	int noa = noa + 1;
	}
	if (string.find("e") != string::npos); {
	int noa = noe + 1;
	}
	if (string.find("i") != string::npos); {
	int noa = noi + 1;
	}
	if (string.find("o") != string::npos); {
	int noa = noo + 1;
	}
	if (string.find("u") != string::npos); {
	int noa = nou + 1;
	}
}

int main() {
int noa;
int noe;
int noi;
int noo;
int nou;

cout << "Number of a's = "<<noa;
cout << "Number of e's = "<<noe;
cout << "Number of i's = "<<noi;
cout << "Number of o's = "<<noo;
cout << "Number of u's = "<<nou;
}
