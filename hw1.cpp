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
	// ��,��,��,����ð� �Է¹ޱ�

	a_s = time % 60;
	a_m = time / 60;
	a_h = time / 3600;
	h_2 = h;
	m_2 = m;
	s_2 = s;
	a_h = h_2 + a_h;
	a_m = m_2 + a_m;
	a_s = s_2 + a_s;
	// ��,��,�� ���� �� ���ϱ�

	a_s = a_s % 60;
	a_m = a_m + a_s / 60;
	a_m = a_m % 60;
	a_h = a_h + a_m / 60;
	a_h = a_h % 24;
	// �հ�� ��,��,�� �����ϱ�


	cout << h << ":" << m << ":" << s << " after " << time << " seconds will be " << a_h << ":" << a_m << ":" << a_s << ".\n";
	// ��� ���

	return 0;

}