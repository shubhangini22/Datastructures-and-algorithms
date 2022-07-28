// Simple solution to calculate square without
// using * and pow()
#include <iostream>
using namespace std;

int square(int num)
{
	// handle negative input
	if (num < 0)
		num = -num;

	// Initialize power of 2 and result
	int power = 0, result = 0;
	int temp = num;

	while (temp) {
		if (temp & 1) {
			// result=result+(num*(2^power))
			result += (num << power);
		}
		power++;

		// temp=temp/2
		temp = temp >> 1;
	}

	return result;
}

// Driver code
int main()
{
	// Function calls
	for (int n = 10; n <= 15; ++n)
		cout << "n = " << n << ", n^2 = " << square(n)
			<< endl;
	return 0;
}

// This code is contributed by Aditya Verma
