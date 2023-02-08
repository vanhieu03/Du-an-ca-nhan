#include<iostream>
#include<iomanip>
using namespace std;
class list
{
	int stt;
	char ds[20];
public:
	void tieude()
	{
		cout << "===========================" << endl;
		cout << "|" << left << setw(4) << "Stt" << "|" << left << setw(20) << "Danh sach" << "|"<< endl;
		cout << "===========================" << endl;
	}
	void nhap()
	{
		cout << "Nhap so thu tu: ";
		cin >> stt;
		cin.ignore();
		cout << "Nhap danh sach: ";
		cin.getline(ds, 20);
	}
	void xuat()
	{
		cout << "|" << left << setw(4) << stt << "|" << left << setw(20) << ds << "|" << endl;
		cout << "===========================" << endl;
	}
};
int main()
{
	list a[1000];
	list b;
	int n;
	cout << "Nhap so luong can them: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap list thu " << i + 1 << endl;
		a[i].nhap();
	}
	cout << endl;
	b.tieude();
	for (int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
	return 0;
}