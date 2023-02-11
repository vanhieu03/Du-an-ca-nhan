#include<iostream>
#include<iomanip>
using namespace std;
class TDLIST
{
	int stt;
	char ds[20];
public:
	void menu()
	{
		cout << "Moi chon tinh nang: " << endl;
		cout << "0.Thoat" << endl;
		cout << "1.Them" << endl;
		cout << "2.Xoa" << endl;
		cout << "3.Sua" << endl;
	}
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
	void xoa(TDLIST a[],int &n)
	{
		int vtx;
		cout << "Nhap vi tri xoa: ";
		cin >> vtx;
		for (int i = vtx; i < n; i++)
		{
			a[i - 1] = a[i];
		}
		n--;
	}
	void sua(TDLIST a[],int n)
	{
		int vts;
		cout << "Nhap vi tri sua: ";
		cin >> vts;
		for (int i = vts; i < n; i++)
		{
			a[i - 1].nhap();
		}
	}

};
int main()
{
	TDLIST a[1000];
	TDLIST b;
	int n, lc;
	b.menu();
    nhaplai:
	cout << "Moi nhap lua chon: ";
	cin >> lc;
	switch (lc)
	{
	case 0:
		return 0;
		break;
	case 1:
		cout << "Nhap so luong can them: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << ". " << endl;
			a[i].nhap();
		}
		cout << endl;
		b.tieude();
		for (int i = 0; i < n; i++)
		{
			a[i].xuat();
		}
		goto nhaplai;
		break;
	case 2:
		b.xoa(a, n);
		b.tieude();
		for (int i = 0; i < n; i++)
		{
			a[i].xuat();
		}
		goto nhaplai;
		break;
	case 3:
		b.sua(a, n);
		b.tieude();
		for (int i = 0; i < n; i++)
		{
			a[i].xuat();
		}
		goto nhaplai;
		break;
	}
	return 0;
}