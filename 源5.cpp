
#include <iostream>
using namespace std;
class Clock
{
public:
	Clock(int NewH = 0, int NewM = 0, int NewS = 0)
	{
		Hour = NewH; Minute = NewM; Second = NewS;
	}
	void ShowTime()
	{
		cout << Hour << ":" << Minute << ":" << Second;
	}
	Clock operator ++();
private:
	int Hour, Minute, Second;
};
Clock Clock::operator ++()
{ Second ++;
if (Second >= 60)
{
	Second = Second-60;
	Minute++;
	if (Minute >= 60)
	{
		Minute= Minute - 60;
	Hour++;
		Hour=Hour%24;
}}
return *this;}
int main()
{Clock c1;
(++c1).ShowTime();
	return 0; }
