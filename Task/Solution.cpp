#include <iostream>
#include <string>
#include <cstring>


/*
 *
 * For dynamically allocated strings(type char* as arrayString), create a function 
 * replaceString that takes three parameters, each of type arrayString: source, target, 
 * and replaceText.
 * The function replaces every occurrence of target in source with replaceText.
 * For example, if source points to an array containing abcdabee, target points to
 * ab, and replaceText points to xyz, then when the function ends, source should
 * point to an array containing xyzcdxyzee.
 *
 */
using namespace std;
/// The main idea is to convert to strings to use strings' methods. Then free memory in source and assign it to its stringified copy. 
void replaceString(char* source, char* target, char* replaceText) {
 
 string source2(source); //converting to string to get substr, replace methods
 
 for (int i = 0; i<source2.length();i++) {
  if (source2.substr(i, strlen(&source2[0])) == target) {
   source2.replace(i, strlen(&source2[0]), replaceText);
  }
 }
 source=nullptr;
 delete[] source; // Before deleting it must be NULL
 
 source=new char[source2.length()];
 for (int i = 0; i < source2.length();i++) {
  if (i == source2.length() - 1)
   source[i+1] = '\0'; //inserting the last character
  source[i] = source2[i]; 
 }
 cout<<source<<endl; 
}
 
int main() {
 
 char * c= new char[100];
 c="abcdabee";
 char * c1 = "ab"; //it should be const, but we want so much to modify it
 char * c2 = "xyz";
 replaceString(c, c1, c2);
}