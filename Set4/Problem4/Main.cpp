#include <iostream>

int length(const char a[]);


int simil(const char a[], const char b[]) {
	int lena = length(a);
	int lenb = length(b);
	int count = 0;
	int result = 0;
	int mxresult = 0;
	/*  if two sequences are equal. When a sequence of repetitions, then the result increases by n^2, where
	n is the number of chars in a sequence. For example, for sequences ACGTC and AGGTG it will be 5: one point for A at the
	first position and four for a two-character subsequence GT at positions 3-4.
	*/
	if (lena == lenb) {
		for (int i = 0;i < lena;i++) {
			if (a[i] == b[i]) count++;
			else {
				result += count*count;
				count = 0;
			}
		}
		result += count*count;
	}
	/* Checking which sequence is greater, and then assigning proper indexes (i,j). K< lena - lenb +1 - is the number of loops needed
	to check each subsequence. I have to reset "result" every time, because I want to find the largest result.
	*/
	else {
		if (lena > lenb) {
			for (int k = 0;k < lena - lenb + 1;k++) {
				result = 0;
				for (int i = 0, j = k;i < lenb;i++, j++)
				{
					
					if (b[i] == a[j]) count++;
					else {
						result += count*count;
						count = 0;
					}
					if ((b[j] == a[i]) && (i == lenb - 1)) { /* there migh occur a situation, when result count won't
					reset (when a correct subsequence at the end, last letters, characters). The else won't work, so 
					I need to handle it.
					*/
						result += count*count;
						count = 0;
					}
					if (result > mxresult) mxresult = result;
				}
			}
		}
		else if (lenb > lena) {
			for (int k = 0;k < lenb - lena + 1;k++) {
				result = 0;
				for (int i = 0, j = k;i < lena;i++, j++) {
					if (b[j] == a[i]) count++;
					else {
						result += count*count;
						count = 0;
					}
					if ((b[j] == a[i]) && (i == lena - 1)) {
						result += count*count;
						count = 0;
					}
					if (result > mxresult) mxresult = result;
				}
			}
		}
		return mxresult;
	}

}
int length(const char a[]) {
	int count = 0;
	for (int i = 0; a[i] != '\0';i++) {
		count++;
	}
	return count;
}

int main() {
	char a[] = "AACTACGTC",
		b[] = "ACGTA";
	std::cout << a << " and " << b << " -> "
		<< simil(a, b) << std::endl;
	char c[] = "GCGC",
		d[] = "AGGGCA";
	std::cout << c << " and " << d << " -> "
		<< simil(c, d) << std::endl;
}