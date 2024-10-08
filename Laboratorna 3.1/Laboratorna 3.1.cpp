// Lab_03_1.cpp
// < Ãàéçëåð Áîãäàí  >
// Ëàáîðàòîðíà ðîáîòà ¹ 3.1
// Ðîçãàëóæåííÿ, çàäàíå ôîðìóëîþ: ôóíêö³ÿ îäí³º¿ çì³ííî¿.
// Âàð³àíò 2

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	double x; // âõ³äíèé ïàðàìåòð
	double y; // ðåçóëüòàò îá÷èñëåííÿ âèðàçó
	double A; // ïðîì³æíèé ðåçóëüòàò - ôóíêö³îíàëüíî ñòàëà ÷àñòèíà âèðàçó
	double B; // ïðîì³æíèé ðåçóëüòàò - ôóíêö³îíàëüíî çì³ííà ÷àñòèíà âèðàçó
	cout << "x = "; cin >> x;

	A = (1 / x) + 4;
	// спосіб 1: розгалуження в скороченій формі
	if (x < 1)
		B = 0.65 * x + 8;
	if (1 <= x && x < 5)
		B = atan((x + 6.1) / 2) + exp(x);
	if (x >= 5)
		B = sqrt(1 + sqrt(x));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 1)
		B = 0.65 * x + 8;
	else
		if (x >= 5)
			B = sqrt(1 + sqrt(x));
		else
			B = atan((x + 6.1) / 2) + exp(x);
	
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
