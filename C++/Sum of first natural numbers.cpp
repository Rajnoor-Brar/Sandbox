#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	float i, n, sum;

	cout << "Enter the count of first natural numbers to sum" << "\n";
	cin >> n;
	sum = 0;

	for (i = 1; i <= n; i++) {
		sum = sum + i;
	}

	cout << "The sum of first " << n << " numbers is " << sum;

	cout << "\n \n \n";
}
