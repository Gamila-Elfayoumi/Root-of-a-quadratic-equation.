#include <iostream>
using namespace std;
double rootquadraticequation(int, int,int,double);
int main()
{
	int A, B, C;
	double discriminant = 0;
	cout << "Enter the coefficient of a quadratic equation : \n";
    cin >> A >> B >> C;
	rootquadraticequation(A, B, C, discriminant);
	if (discriminant > 0) {
		cout << "The root of the equation is real"<<endl;
		cout << "X1 = " << (B + discriminant) / 2 * A<<endl;
		cout << "X2 = " << (B - discriminant) / 2 * A<<endl;
		}
	else if (discriminant < 0) {
		cout << "The root of the equation is imaginary\n";
		cout << "X1 = " << (B / A * 2) << "+" << discriminant << "i" << endl;
		cout << "X2 = " << (B / A * 2) << "-" << discriminant << "i" << endl;
	}
	else if (discriminant == 0) {
		cout << "The root of the equation is real and equal " << endl;
		cout << "X1 = X2 = " << (B + discriminant) / 2 * A << endl;
	}
	system("pause");
}
double rootquadraticequation(int A, int B, int C,double discriminant) {
	discriminant = B * B + 2 * A * C;
	return discriminant;
}