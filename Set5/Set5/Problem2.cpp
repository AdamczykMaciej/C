#include <iostream> 
#include <cmath>

using namespace std;

double f1(double x) {

	return x / 4;
}
double f2(double x) {

	return -2 * x;
}

using D2D = double(*)(double); // equivalent to typedef (different syntax)

D2D maxfun(D2D funs[], int size, double a, double b, double* pmax) {
	/* it finds the maximum of a function , and returns a pointer
	 to a function for which the maximum is the largest*/

	static const double eps = 1e-4;
	double ymax = funs[0](a);
	*pmax = a;
	int imax = 0;


	for (int i = 0; i != size; i++) {
		for (double x = a; x <= b; x += eps) {
			if (funs[i](x) > ymax) {
				ymax = funs[i](x);
				*pmax = x;
				imax = i;
			}
		}

		


	}
	return funs[imax];
}
int main() {

	double xmax;
	D2D funs[] = { f1,sin,f2 };
	D2D pf = maxfun(funs, 3, 0, 3, &xmax);
	cout << "xmax = " << xmax << "; f(xmax) = " << pf(xmax) << endl;

}