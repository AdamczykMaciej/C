#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Color {
	char* name;
	int   red, green, blue;
public:
	Color(const char* n, int red, int green, int blue) : red(red), green(green), blue(blue) {};

	Color(const Color& k) {
		int length = strlen(k.name);
		name = new char[length + 1];
		for (int i = 0; i < length; i++) {
			name[i] = k.name[i];
		}
		red = k.red;
		green = k.green;
		blue = k.blue;
		
	}

	Color operator-() const {
		char * name2 = new char[strlen(name) + 2]; // pointer points to reference, so I have to create space in memory
		name2[0] = '!';
		for (int i = 1, j=0; i < strlen(name) + 1 ; j++, i++) {
			name2[i] = name[j];
		}
		Color* color = new Color(name2, 255-red,255-green, 255-blue);
		return *color;
	}

	Color operator+(const Color& k) const {
		char* namessum = new char[strlen(name)+strlen(k.name)+2];
		char tmp = '+';
		int len1 = strlen(name);
		for (int i = 0; i < len1+1; i++) {
			namessum[i] = name[i];
			if (i == len1) namessum[i] = '+';
		}
		for (int i = len1 + 1; i < strlen(name) + strlen(k.name) + 1; i++) {
			namessum[i] = name[i];
		}
	
		Color* color = new Color(namessum, (red + k.red)/2, (green + k.green)/2, (blue + k.blue)/2);
		return *color;
	}

	Color& operator=(const Color& k);
	~Color() {
		delete[] name;

	}

	friend ostream& operator<<(ostream&, const Color&);
};




int main(void) {
string s ="s";
string s2="s2";
string s3=s+s2;
	
	Color* p_back = new Color("Back", 255, 0, 0);
	Color back(*p_back);
	delete p_back;
	Color title = back = back;   // sic!
	back = -title + back;
	cout << back << endl;
	cout << title << endl;
}