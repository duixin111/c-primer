#include<iostream>
#include<string>

using namespace std;
void f4(){
throw string("@");
}
void f3() {
	try {
		f4();
	}
	catch (string) {
		cout << "&" << endl;
	}
}

void f2() {
	try
	{
		f3();
}
	catch (string)
	{ cout << "*" << endl;}
		

}

void f1() {
	try {
		f2();
	}
	catch (string) {
		cout << "#" << endl;
	}
}

int main() {
f1();
//system( pause');
return 0;
}

