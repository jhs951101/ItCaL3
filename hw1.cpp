#include <iostream>

using namespace std;

int main(){

	int h, m, s, h_2, m_2, s_2, time, a_h, a_m, a_s;

	cout << "Enter an hour (0..23) : ";
	cin >> h;
	cout << "Enter an minute (0..59) : ";
	cin >> m;
	cout << "Enter an second (0..59) : ";
	cin >> s;
	cout << "Enter a lapse time in seconds: ";
	cin >> time;
	// 시,분,초,경과시간 입력받기

	a_s = time % 60;
	a_m = time / 60;
	a_h = time / 3600;
	h_2 = h;
	m_2 = m;
	s_2 = s;
	a_h = h_2 + a_h;
	a_m = m_2 + a_m;
	a_s = s_2 + a_s;
	// 시,분,초 정리 후 합하기

	a_s = a_s % 60;
	a_m = a_m + a_s / 60;
	a_m = a_m % 60;
	a_h = a_h + a_m / 60;
	a_h = a_h % 24;
	// 합계된 시,분,초 정리하기


	cout << h << ":" << m << ":" << s << " after " << time << " seconds will be " << a_h << ":" << a_m << ":" << a_s << ".\n";
	// 결과 출력

	return 0;

}