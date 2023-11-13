// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool soHoanThien(int n)
{
	
	if((int)sqrt(n) == sqrt(n))
		return true;
	return false;

bool soChinhPhuong(int n)
{
	int s =0;
	for(int i =1; i< n; i++)
	{
		if(n%i ==0)
			s++;
	}
	if(s== n)
		return true;
	return false;

}
int main()
{
	int n;
    cout << "Nhap mot so nguyen";
	cin >> n;

	if(soHoanThien(n))
	{
		cout << "N la so hoan thien";
	}else{
		cout << "N khong la so hoan thien";
	}

	if(soChinhPhuong(n))
	{
		cout << "N la so chinh phuong";
	}else{
		cout << "N khong la so chinh phuong";
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
