#include <iostream>

using namespace std;

void funct() {
	int a, b, mx, mn, mxcount = 1, mncount = 1;
	cout << "Enter a number" << endl;
	cin >> b;
	mx = b;
	mn = mx;
	while (true) {
		cout << "Enter a number" << endl;
		cin >> a;
		if (a == mn) mncount++;
		if (a == mx) mxcount++;
 		if (a > mx && a!=0) {
			mx = a;
			mxcount = 1;
		}
		else if (a < mn && a!=0) {
			mn = a;
			mncount = 1;
		}
		b = a;

		if (a == 0) break;

	}
	cout << "Max : " << mx << " ocurred : " << mxcount << " times , Min : " << mn << " ocurred : " << mncount <<" times" << endl;



}

int main() {
	funct();
}