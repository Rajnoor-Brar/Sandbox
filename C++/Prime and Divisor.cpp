#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int i, n, c;
	cout << "Enter the number to check for being Prime\n";
	cin >> n;	cout << "\n";	c=0;
	float list[abs(n)];

	for (i = 1; i <= abs(n); i++) {
		if (abs(n) % i == 0) {
			c++;
      list[c]=i;
    }
	}

	if(c==2){
		if(n>0){
			cout<<"Number is Prime";
		}

		else if(n<0){
			cout<<"Number is Negative, but its Absolute Value is prime";
		}
	}

	else{
		cout<<"Number is not prime. Below are its divisors:\n";

		if (n>0){
			cout<<"1";
		}
		else if (n<0){
			cout<<"-1, 1";
		}

		for (i = 2; i <= c; i++) {
			cout << ", " << list[i];
		}
	}
	return 0;
}
