#include <iostream>
  using namespace std;

  void F1(int* n) { // a pointer to an integer (wants an address)
	  cout << *n << endl;
 }
  void F2(int& n) { // a reference to an integer (wants a variable), it is another name of a variable here of type int
	  cout << n << endl;
}

  int main() {
  int* p,*p2, k; //uninitialized int p, won't works
  // *p=2;	// our p doesn't store any address ( we don't know address of 2)
  // p=k // doesn't work, because we are putting actually a value to a pointer 
  p=&k; // putting address to a pointer, initializng a pointer; when initializing, we have to put address, not essentially
		// a value ( but then the result will be awkward) to a pointer; it will work
  // F1(&p); // won't work, because p is already a pointer, so we don't specify the address
	 F1(p);	// p is an address to a value ,where pointer points to
//	 F1(&p); //won't work , our function wants address of an int, not a pointer
	 F1(&k); // ok, because a pointer stores an address, pointer wants an address!
 //	 F1(*p); // won't work, because in F1 we want address to an int, pointer, not a value of a pointer ('p' is a pointer to an integer)
	
 //	----------------------------------
  int a=2;
 //	 F2(*a); // 'a' is only an integer, not a pointer
	
	 F2(a); // will work, but awkward result, because value of 'a' not specified
 // F2(&a); // won't work, because initial value of a reference MUST be a specified value! We can't have a reference to the address of an int. We want a reference to an int.
	 
// ------------CONSTANT----------------

	const int b=0; // constant MUST be a specified value, and can't be changed
//	const int bb; bb=0; // won't work. constant must be specified instantly. (unless it is a pointer)
//	b=2; //this won't work	

// ------------ADDRESS-----------------

// an ADDRESS ISN'T an INTEGER!

// ------------ARRAYS, ADDRESS, POINTERS TO ARRAYS------------------

	int tab[] = {1,2,3,4,5}, *r = &tab[0]; // works, we put an address of an int of 'tab' array to a pointer
//	int *q = &tab; // won't work, because an array doesn't possess its own address
	int *q = tab; // works, because we put the value of this array, which is the address of tab[0]. This value consists of the first element (index 0) of the array. Here '1';
	cout << q << endl; // address to tab[0]
	cout << &tab[0] << endl; // address to tab[0]
	cout << tab << endl; // address to tab[0]
	cout << *tab << endl;

// --------------------------------------

 int tab2[] = {1,2,3,4,5}, *t = &tab[1];
 cout << t[2] << " " << *(t+3) << " " << t[4] << endl;
int bb=0;
int& aa =bb;


 //What will it print on our screen? IMPORTANT
 //Pointers are somehow also arrays. In the sense, that we can specify their index. And the object under the index refers to concrete data in memory.
 // So our t[0]=2. We don't write *t[0], because here we are tranforming our pointer into an array, and as we know the syntax of arrays is different.
 // t[0] gives us a value, we can't point with arrays. We can get index by adding &t[0]. Alone 't' will give us address. Because a pointer stores address of
 // ascribed variable, to the pointer.
 // Then we know that the t[2]=4 , and t[4] is out of bound, is something strange.


 const int *pp, kp=7; // in pointers we also have to initialize pointers to constant types. But we don't have to do that instantly. We can do that in next lines, but then it is compulsory!!!
	//const int is different from int
 pp= &kp;
 cout << *pp << endl;	  
}