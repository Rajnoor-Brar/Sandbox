#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int i, n;
	cout << "Enter the number for divisor extraction\n";
	cin >> n;
	cout << "\n";

	if (n>=0){
	    cout<<"1";
		for (i = 2; i <= n; i++) {
			if (n % i == 0) {
				cout << ", " << i;
			}
		}
	}

	else if (n<0){
		n=-1*n;
		cout<<"-1";

		for (i = 1; i <= n; i++) {
			if (n % i == 0) {
				cout << " ," << i;
			}
		}
	}

	return 0;
}
