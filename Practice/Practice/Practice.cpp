// Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void displayName(std::string name) {
	std::cout << name << std::endl;
}

void displayAge(int age) {
	std::cout << age << std::endl;
}

int sum(int a, int b) {
	return a + b;
}

std::string concatenateStrings(std::string s1, std::string s2) {
	std::cout<< s1 << " " << s2 << std::endl;
	return s1 +" "+ s2;
}

bool biggerThanHundred(int a, int b, int c) {
	a*=2;
	return (a+b+c>100);
}

int main()
{
	std::string name;
	int age;
	std::cout << "Enter Your age: " ;
	std::cin >> age;
	std::cout << "Now enter Your full name: " ;
	std::cin.get();
	std::getline(std::cin, name);
	std::cout << "Hi!" << " My name is " << name << " and " << "I like programming,\nand I am " << age << " years old." << std::endl;
    displayName(name);
	displayAge(age);
	std::cout << concatenateStrings("Maciek", "Adamczyk") << std::endl;
	std::cout << "File:     " << __FILE__ << std::endl
		 << "Date:     " << __DATE__ << std::endl
		 << "Line:     " << __LINE__ << std::endl
		 << "Time:     " << __TIME__ << std::endl;
	int tab2[] = { 1,2,3,4,5 }, *t = &tab2[1];
	std::cout << t[2] << " " << *(t + 3) << " " << t[4] << std::endl;
	int bb = 0;
	int& aa = bb;

	// 0 == false !
	int tab[] = { 2, -4, -3, 0, 3 }, k = -1;
	while (tab[++k])
		std::cout << tab[k] << std::endl;    // now k = 3
	enum days {mon, tue, wed, thur, fri, sat, sun};
	days myDay = mon;
	std::cout << myDay << std::endl;
	int n1=0;
	int *p1=&n1;
	std::cout << *p1 << " " << p1 << " " << &p1 << std::endl;
	//p1 - the address of n1
	//&p1 - the address of p1
	//p1 stores the address of n1 and its value
	std::cout << sizeof(tab)/sizeof(int) << std::endl;
	int a=90, b=5, c=10;
	biggerThanHundred(a,b,c);
	std::cout<<a<<std::endl;

	return 0;

}

