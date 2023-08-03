#include <iostream>
using namespace std;
int Maximum(int x, int y)  // pass by value
{
	// Write your code here.
	return max(x,y);
}
void Swap(int &x, int &y) // pass by reference
{
	// Write your code here.
	return swap(x,y);
}
int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}