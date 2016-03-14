#include <iostream>
using namespace std;
void run(int);

int main ()
{
	int n;

	cin >> n;
	run(n);
	cout << endl;
	return 0;
}

void run(int n)
{
	cout << n << " ";
	if (n == 1) return;
	if (n % 2 == 1) 
	{
		n = 3 * n + 1;
		run(n);
	}	else {
		n = n / 2;
		run(n);
	}
}
