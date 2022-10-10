#include "Functions.h"

int main() 
{
	int x  = getUserInput();
	string p = createPyramid(x);
	cout << p;
	return 0;
}
