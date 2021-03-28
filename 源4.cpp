
#include<iostream>
using namespace std;
class P {
public:
	P(int xx = 0) : X(xx) {}
	void f() {
		cout << X;
	}

	~P() { cout << "#"; }
private:
	int X;
};

int main() {
P* q1 = new P(3);
P* q2 = new P[3];
q1->f();
delete q1;
q2->f();
delete []q2;
system("pause");
return 0;
}
