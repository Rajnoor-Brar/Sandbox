#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float c, a, b;
	int i, n;

	cout << "Enter the number to be checked for prime\n";
	cin >> n;
	c = 0;

	if(n<0){
		cout<<"Number is negative. Below is analysis of absolute value"<<"\n";
		n=abs(n);
	}

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {c++;}
	}

	if (c == 2) {cout << "The number is, in fact, a Prime Number";}
	else {		 cout << "The number is actually not prime";}

	return 0;
}
