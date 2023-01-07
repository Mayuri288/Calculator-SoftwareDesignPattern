
#include "Execute.h"
#include <iostream>
using namespace std;
int main()
{
	string expression;
	//Continue until user quits
	while (true) {
		cout << "Enter Expression:  " << endl;
		getline(std::cin, expression, '\n');
		if (expression == "QUIT")
			break;
		Execute p(expression);
	
	} 

	return 0;
}
