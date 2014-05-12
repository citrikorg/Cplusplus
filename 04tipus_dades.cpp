#include <iostream>
using namespace std;

int main()
{
	//Char
	char a = 'a'; // Mida de 1 byte, com a minim.
	cout << "Un char: ";
	cout << a;
	cout << "\t\t\tMida: ";
	cout << sizeof(char) << "B" << endl; //Mida en Bytes
	char16_t b; //Per a UTF16
	char32_t c; //Per a UTF32
	wchar_t d = 'b'; //El mes llarg possible
	cout << "Un wchar_t: ";
	cout << d;
	cout << "\t\t\tMida: ";
	cout << sizeof(wchar_t) << "B" << endl;

	int p = 929; //El mes llarg possible
        cout << "Un int: ";
        cout << p;
        cout << "\t\t\tMida: ";
        cout << sizeof(int) << "B" << endl;

	
	//Integer signed
	signed char e = 'z'; //Igual mesura que char
	cout << "Unsigned char ";
	cout << e;
	cout << "\t\t\tMida: ";
	cout << sizeof(signed char) << "B" << endl;
	signed short int f = 10; //No mes petit de char, almenys 16b
	cout << "Signed short int: ";
	cout << f;
	cout << "\t\tMida: ";
	cout << sizeof(signed short int) << "B" << endl;
	signed int g = 131073; //No mes petit que short, almenys 16b
	cout << "Signed int: ";
	cout << g;
	cout << "\t\tMida: ";
	cout << sizeof(signed int) << "B" << endl;
	signed long int h = 300; //No mes petit que int, almenys 32b
	cout << "Signed Long int: ";
        cout << h;
	cout << "\t\tMida: ";
	cout << sizeof(signed long int) << "B" << endl;


	signed long long int i = 500; //No mes petit que long, almenys 64b.
	cout << "Signed long long int: ";
	cout << g;
	cout << "\tMida: ";
	cout << sizeof(signed long long int) << "B" << endl;

	//Integer unsigned, la mateixa mida que signed
	unsigned char j; //No es pot assignar?
	cout << "Unsigned char: ";
	cout << j;
	cout << "\t\t\tMida: ";
	cout << sizeof(unsigned char) << "B" << endl;

	//...
	
	//Floating point
	float k = 3.14;
	cout << "Float: ";
	cout << k;
	cout << "\t\t\tMida: ";
	cout << sizeof(float) << "B" << endl;

	double l = 4.54;
	cout << "Double: ";
	cout << l;
	cout << "\t\t\tMida: ";
	cout << sizeof(double) << "B" << endl;

	long double m = 10.765;
	cout << "Long Double: ";
        cout << m;
        cout << "\t\tMida: ";
        cout << sizeof(long double) << "B" << endl;


	//Boolean
	bool n =false;
	cout << "Un boolea: ";
	if ( n )
	{ 
	  cout << "True";
	  cout << "\t\tMida: ";
	  cout << sizeof(bool) << "B" << endl;
	}
	if ( !n )
	{
	  cout << "False";
	  cout << "\t\tMida: ";
	  cout << sizeof(bool) << "B" << endl;
	}

	//Void
	//
	//Null pointer
	//decltype(nullptr) ee;

	return(0);

}
