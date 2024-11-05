#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float a;
	int c, i, n, j;

	cout << "Enter the number to be checked for prime\n";
	cin >> n;
	c = 0;
	i = 1;

  int d[n];

	for (i = 1; i <= n; i++) {
		a = n % i;
		if (a == 0) {
			c++;
      d[c]=i;
    }
	}

	if (c == 2) {
		cout << "The number is, in fact, a Prime Number";
	}
	else {
		cout << "The number is actually not prime" << "\n" << "The factors are \n";
    for(j=1 ; j<=c ; j++){
      cout <<d[j] <<"\n";
    }
	}

}
