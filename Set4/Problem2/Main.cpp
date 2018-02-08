#include <iostream>
#include <string>
using namespace std;
int length(char* ch) {
	int count = 0;
	for (int i = 0;ch[i] != '\0';i++) {
		count++;
	}
	return count;
}
void clean(char* n) {
	int len = length(n);
	if (n[len - 1] == ' ') n[len - 1] = '\0'; // if my last char = ' ' then I replace it with '\0'
	if (n[0] == ' ') n[0] = '\0';

	for (int i = -1, j=0;i!= len;i++, j++) { 

	if(n[i]==' '&& n[i+1]==' ') j-- ; // here I am erasing all double, triple etc. whitespaces by changing index (shortening the cstring)
	n[j]=n[i+1];
	}
	
	
		
}



int main() {
	char n1[] = "a bc def    ghijk";
	cout << "Before: >" << n1 << "<" << endl;
	clean(n1);
	cout << " After: >" << n1 << "<" << endl;
	char n2[] = " a   bc def    ghijk ";
	cout << "Before: >" << n2 << "<" << endl;
	clean(n2);
	cout << " After: >" << n2 << "<" << endl;
	char n3[] = " ";
	cout << "Before: >" << n3 << "<" << endl;
	clean(n3);
	cout << " After:>" << n3 << "<" << endl;
}