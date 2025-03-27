#include "logic.h"

string s = "";


long long factorial(int number) {
	s += "   ";
	cout << s << "start function with number = " << number << endl;


	if (number < 0) {
		return -1;
	}

	if (number <= 1) {
		cout << s << "End function with number " << number <<
			"end result = " << endl;
		return 1;
	}


	int result = number * factorial(--number);



	
	cout << s << "End function with number " << number <<
		"end result = " << result << endl;
	s.resize(s.length() - 3);

	return result;
}
