
#include <iostream>


class Segment {
	double A, B;
public:
	Segment(){}; //default constructor
	Segment(double A, double B) : A(A), B(B) { }
	double getA() {
		return A;
	}
	double getB() {
		return B;
	}
	Segment operator/(double d) {
		return Segment(A/d, B/d);
	}
	Segment operator-(double d) {
		return Segment(A - d, B - d);
	}
	Segment operator+(const Segment& s) {
		double a2;
		double b2;
		if (A <= s.A)
			a2 = A;
		else
			a2 = s.A;
		if (B >= s.B)
			b2 = B;
		else
			b2 = s.B;
		return Segment(a2, b2);
	}
	bool operator()(double d) {
		if (d >= A, d <= B) {
			return true;
		}
		return false;
	}
	
	friend Segment operator*(const Segment& s, double d); // I have access to fields (if friend)
	friend Segment operator+(const Segment&s, double d);
	friend std::ostream& operator<<(std::ostream& str, const Segment& s);
	
};

Segment operator*(const Segment& s, double d) {
	return Segment(s.A*d, s.B*d);
}
Segment operator*(double d, const Segment& s) {
	return s * d;
}

Segment operator+(const Segment& s, double d) {
	return Segment(s.A + d, s.B*d);
}

Segment operator+(double d, const Segment& s) {
	return s + d;
}
std::ostream& operator<<(std::ostream& str, const Segment& s) {
	return str << "[" << s.A << "," << s.B << "]";
}
struct Point{ int x, y;};
	struct Triangle{ Point *A, *B, *C;};

	struct A {
		A* pa;
		Point p;
		
		};
	struct Segm {
		double a,b;
		};
	const Segm& longer(const Segm* ps, const Segm& rs) {
	double pssum=0, psa=0, psb=0;
	double rssum=0, rsa=0, rsb=0;

	if(ps->a < 0) psa+=ps->a*(-1);
	else psa+=ps->a;
	if(ps->b < 0) psb+=ps->b*(-1);
	else psb+=ps->b;
	if(rs.a < 0) rsa+=rs.a*(-1);
	else rsa+=rs.a;
	if(rs.b < 0) rsb+=rs.b*(-1);
	else rsa+=rs.b;
	pssum=psa+psb;
	rssum=rsa+rsb;
	if(pssum<rssum) {
	std::cout << pssum<< std::endl;
	return *ps;
	}
	return rs; 

}
	struct Node {
		int data;
		Node* next;
};
	void fun(Node* head, int d) {
		
		if(head->next==0) head->data=d;
		else fun(head->next, d);
}
int main() {
	using std::cout; using std::endl;

	Segment seg{ 2,3 }, s = 1 + 2 * ((seg - 2) / 2 + seg) / 3;

	cout << s << endl << std::boolalpha;
	for (double x = 0.5; x < 4; x += 1)
		cout << "x=" << x << ": " << s(x) << endl;
	double a=((new Segment))->getA();
	cout<<a<<endl;

	int tab[] = {1,2,3,4,5}, *p=tab+1;
	cout<<*(p+1)<<endl;
	//8
	//int n=1, *pn=&n, &rn=*pn;
	//int fun(int&k);
	//*pn=fun(*pn);
	//9
	struct AClass{
	//illegal
	};
	//10
	;
	
	Point A={1,2}, B = {2,3};
	Triangle t ={&A, &B, new Point};
	t.A->x = t.B->y = 0;
	Segment k, *g;
	g=new Segment();
	Segm d7={-2,2};
	const Segm  *b7=&d7, c7={3,2};
	longer(b7, c7);

	Node n5, n6,n7;
	n5.data=5;
	n6.data=6;
	n7.data=7;
	n6.next=&n7;
	n5.next=&n6;
	fun(&n5,9);
	cout<<n7.data<<endl;
	

	
	
	
}
