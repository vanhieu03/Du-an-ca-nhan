#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class BKB
{
	int nguoichoi, may;
public:
	void menu()
	{
		cout << "*==========TRO CHOI BUA KEO BAO==========*" << endl;
		cout << "| 1.Bua                                  |" << endl;
		cout << "| 2.Keo                                  |" << endl;
		cout << "| 3.Bao                                  |" << endl;
		cout << "*========================================*" << endl;
	}
	void nhap()
	{
		cout << "Moi chon: ";
		cin >> nguoichoi;
		srand(time(0));
		may = rand() % 3 + 1;
	}

	void sosanh()
	{
		if (nguoichoi == 1)
		{
			if(may==2)
			{
				cout << "Nguoi choi chon: bua" << endl;
				cout << "May chon: keo" << endl;
				cout << "Nguoi choi thang" << endl;
			}
			else if (may == 3)
			{
				cout << "Nguoi choi chon: bua" << endl;
				cout << "May chon: bao" << endl;
				cout << "May thang" << endl;
			}
		}
		else if (nguoichoi == 2)
		{
			if (may == 1)
			{
				cout << "Nguoi choi chon: keo" << endl;
				cout << "May chon: bua" << endl;
				cout << "May thang" << endl;
			}
			else if (may == 3)
			{
				cout << "Nguoi choi chon: keo" << endl;
				cout << "May chon: bao" << endl;
				cout << "Nguoi choi thang" << endl;
			}
		}
		else if (nguoichoi == 3)
		{
			if (may == 1)
			{
				cout << "Nguoi choi chon: bao" << endl;
				cout << "May chon: bua" << endl;
				cout << "Nguoi choi thang" << endl;
			}
			else if (may == 2)
			{
				cout << "Nguoi choi chon: bao" << endl;
				cout << "May chon: keo" << endl;
				cout << "May thang" << endl;
			}
		}
	}
};
int main()
{
	BKB a;
	a.menu();
	a.nhap();
	a.sosanh();
	return 0;
}