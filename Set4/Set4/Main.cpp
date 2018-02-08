
#include <iostream>
#include <string>
using namespace std;

size_t length(const char* cstr) {
	size_t count = 0;
	for (int i = 0;cstr[i] != '\0';i++)
		count++;

	return count;
}
bool isLetter(char c) {
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) return true;
	return false;
}

char* reverse(char* cstr) {
	int len = length(cstr);
	for (int i = 0;i < len / 2 ;i++) {
		char temp = cstr[length(cstr) - 1 - i];
		cstr[length(cstr) - 1 - i] = cstr[i];
		cstr[i] = temp;
	}
	return cstr;

}

size_t words(const char* cstr) {
	int len = length(cstr);
	int count = 0;
	for (int i = 0;i < len - 1;i++) {
		bool a, b;
		if (isLetter(cstr[i]) == true) a = true;
		else a = false;
		if (isLetter(cstr[i + 1]) == true) b = true;
		else b = false;//Hello
		if (a == true && b == false) count++;
	}
	return count;

}

size_t words2(const char* cstr) {
	int len = length(cstr);
	size_t count=0;
	for (int i = 0; i < len - 1;i++) {
		bool a, b, c;
		if (isLetter(cstr[i]) == true) a = true;
		else a = false;
		if (isLetter(cstr[i + 1]) == true) b = true;
		else b = false;
		if (i != len - 2) {
			if (isLetter(cstr[i + 2]) == true) c = true;
			else c = false;
		}
		if (a == false && b == true && c == true)
			count++;

	}
	return count;

}

char* concat(char* t, const char* s) {
	int j=0;
	int lens=length(s), lent=length(t);

	for (int i = lent;i <  lent + lens;i++,j++) { //unsigned, so >0 and greater range therefore
		
		t[i]=s[j];
}
return t;
}

int main() {
	using std::cout; using std::endl;
	char s1[] = "Alices in Wonderland";
	cout << "reverse: " << reverse(s1) << endl;
	cout << "length : " << length(s1) << endl;
	char s2[] = " ... for (int i = 0; i < n; ++i){...} ...";
	cout << "words : " << words(s2) << endl;
	cout << "words2 : " << words2(s2) << endl;
	char s3[100] = "Hello";
	cout << "concat : " << concat(concat(s3, ", world"), "!") << endl;
}