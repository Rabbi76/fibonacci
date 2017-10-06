#include<iostream>
using namespace std;

int main() {
	int max = 4000000;

	int sum = 0;
	int a = 1;
	int b = 1;

	while (b<max) {
		//cout << "a: " << a << " b: " << b << "\n";
		a += b;
		b += a;

		if ((a % 2 == 0) && (a < max))
		{
			sum += a;
		}

		else if ((b % 2 == 0) && (b < max))
		{
			sum += b;

		}

	}

	cout << "The sum of even valued terms in Fibonacci sequence is : " << sum << "\n";
	return 0;
}
