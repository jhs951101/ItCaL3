#include <iostream>

using namespace std;

int main(){

	double a, b, c, answer1, answer2;

	cout << "To complete two solutions of ax^2 + bx^ + c = 0\n";
	cout << "a (!=0) ? ";
	cin >> a;
	cout << "b ? ";
	cin >> b;
	cout << "c ? ";
	cin >> c;
	// a,b,c�� �Է¹ޱ�

	answer1 = (-b+sqrt(b*b-4*a*c)) / (2*a) ;
	answer2 = (-b-sqrt(b*b-4*a*c)) / (2*a) ;
	// �� ���ϱ�

	cout << "solution 1 = " << answer1 << "\n";
	cout << "solution 2 = " << answer2 << "\n";
	// �� ���

	return 0;

}