# include <iostream>
# include <string> //to use strings




bool isPrime(int n) {
	if (n == 0 || n == 1) return false;
	for (int i = 2;i < n;i++) {
		if (n%i == 0) return false;
	}
	return true;
}

void printDivisors(int n) {
	std::string s="1";
	for (int i = 2;i < n;i++) {
		if (n%i==0) s+=+", "+std::to_string(i); // string can be modified only by adding a new string
		}
	
	std::cout << s+", "+std::to_string(n) << std::endl;
}

int numDivisor(int n) {
	int num=2;
	for (int i = 2;i < n;i++) {
		if (n%i == 0)num++;
	}
	return num;


}

int gdc(int m, int n) {
	while (m!=n) {
		if(m>n)m=m-n;
		else n=n-m;
	}
	return m;

}

int phi(int n) {
	int count=0;
	for (int i = 1;i < n;i++) {
		if(gdc(i,n)==1) count++;
	}
	return count;

}


int main() {
	std::cout << isPrime(1) << std::endl;
	printDivisors(9);
	std::cout << numDivisor(12) << std::endl;
	std::cout << gdc(4,8) << std::endl;
	std::cout << phi(10) << std::endl;


	


}