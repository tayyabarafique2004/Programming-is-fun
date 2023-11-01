/*
#include<iostream>
using namespace std;
int main ()
{
	int a, b, ans;
	char op;
	char d;
	cout << "enter first number=";
	cin >> a;
	cout << "enter second number=";
	cin >> b;
	cout << "enter the operator (+,-,*,/)=";
	cin >> op;

	do
	{
		switch (op)
		{
		case'+':
		{
			cout << a << "+" << b << endl << "answer =" << a + b;
			cout << endl;
			break;
		}
		case'-':
		{

			cout << a << "-" << b << endl << "answer =" << a - b;
			cout << endl;
			break;

		}
		case '*':
		{

			cout << a << "*" << b << endl << "answer =" << a * b;
			cout << endl;
			break;
		}
		case'/':
		{
			cout << a << "/" << b << endl << "answer =" << a / b;
			cout << endl;
			break;
		}
		default:
		{
			cout << "invalid operator";
			cout << endl;
		}



		}
		cout << "enter y to continue and n to quit";
		cin >> d;
	}
		while (d == 'y');


		return 0;

	
}
int main ()
{
	int n = 7, c = 1, res;
	do {

		res = 7 * c;
		cout << res;
		cout << "  ";
		c = c + 1;
		

	} while (c <= 14);

	return 0;



}

int main()
{
	int n;
	cout << "enter a number=";
	cin >> n;
	int a, i = 1;
	int ans = 0;
	while (n != 0)
	{

		ans = n % 8;
		a = a + (ans * i);
		n = n / 8;
		i = i * 10;
	}
	cout << a;
	return 0;
}



#include<iostream>
using namespace std;
int main()
{

	int n = 20;
	do {


		cout << n << endl;
		n = n - 1;
	}

		while (n >= 1);

	return 0;



	int main()
{
	int f = 1, n, c = 1;
	cout << "enter the number ="<<endl;
	cin >> n;
	do {

		f = f * c;
		c = c + 1;


	} while (c <= n);
	cout << "factorial of " << n << "=" << f;
	return 0;
}



Code:
int main()
{
	int num = 1;
	int i = 0;
	do {

		num = num * 2;
		cout << num<<"  ";
		i++;

	} while (i <= 8);

	return 0;

}*/



