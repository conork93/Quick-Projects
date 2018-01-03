//Conor Kennedy
//1/3/2018

/*
Start with a number n > 1.
Find the number of steps it takes to reach one
using the following process: If n is even, divide
it by 2. If n is odd, multiply it by 3 and add 1.
*/


int collatz(int num) {
	int count = 0;

	//loop while not 1
	while (num != 1) {
		//divide by 2 if num is even
		if (num % 2 == 0) {
			num /= 2;
			count++;
		}
		//multiply by 3 and add 1
		else {
			num = (num * 3) + 1;
			count++;
		}
	}
	return count;

}

#include<iostream>
using namespace std;

int main() {

	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	cout << "It took " << collatz(num) << " steps to reach 1\n";

}
