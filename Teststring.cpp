#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter a string : ";
	// getline(cin, str1);  // read a line
    cin >> str1; 			// read a word
    cout << "You entered : " << str1 << endl;
    str2 = "Hello World";
    cout << str2 << endl;
    return 0;
}
