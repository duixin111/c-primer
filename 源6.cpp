#include <iostream>
#include <memory>
using namespace std;
class A{
	int i;
	static int count;
public:
	A(int n = 0) : i(n) { count++; }
	void show() { cout << count << "_" << i << "#"; }
};
int A::count = 0;
int main() {
	shared_ptr<A>sp1(new A(2));
	shared_ptr<A> sp2(sp1);
	sp1->show();
	sp2->show();
	sp1.reset(new A(3));
	sp1->show();
	system("PAUSE");

	return 0;
}
