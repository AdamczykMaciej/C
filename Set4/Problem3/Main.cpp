#include <iostream>
// ...
bool checkpass(const char* pass) {
	int countChar = 0;
	bool bChar = false, bDig = false, bUchar = false, bLchar = false, bNonAlphaNumeric = false;
	for (int i = 0;pass[i] != '\0';i++) {
		countChar++;
		if (pass[i] >= '0' && pass[i] <= '9' ) bDig = true;
		if (pass[i] >= 'A' && pass[i] <= 'Z' ) bUchar = true;
		if (pass[i] >= 'a' && pass[i] <= 'z') bLchar = true;
		if (!((pass[i] >= '0' && pass[i] <= '9') && (pass[i] >= 'A' && pass[i] <= 'Z') && (pass[i] >= 'a' && pass[i] <= 'z'))) bNonAlphaNumeric = true;

	}
	if (countChar>8) bChar = true;

	if ( bChar == true && bDig == true && bUchar == true && bLchar == true && bNonAlphaNumeric == true) return true;
	else return false;
}


int main() {
	using std::cout; using std::endl;
	const char* passes[] =
	{
		"AbcDe93", "A1b:A1b>", "Ab:Acb<",
		"abc123><", "Zorro@123", nullptr
	};
	for (int i = 0; passes[i] != nullptr; ++i) {
		cout << "checking " << passes[i] << endl;
		if (checkpass(passes[i])) cout << "OK" << endl;
		cout << endl;
	}
}