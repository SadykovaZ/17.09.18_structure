#include"stdafx.h"
#include<iostream>
#include<string>
#include<ctime>
#include<conio.h>
using namespace std;
// структуры
//struct student
//{
//	string fname; //28 байтов
//	string group;
//	int grades[3];
//
//	bool otli4nik()
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			if (grades[i] < 90)
//				return false;
//		}
//		return true;
//	}
//} s, R; //переменные типа студент

//void otli4niki(student* ss, int n)
//{
//	//bool f;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (ss[i].otli4nik() == true)
//			cout << "Otlichnik = " << ss[i].fname << ss[i].group << endl;
//		/*
//		f = true;
//		for (int j = 0; j < 3; j++)
//		{
//			if (ss[i].grades[j] < 90)
//			{
//				f = false;
//				break;
//			}
//		}
//		if (f)
//			cout << "Otlichnik = " << ss[i].fname << ss[i].group << endl;*/
//	}
//}

//void dvoe4niki(student* ss, int n)
//{
//	double average = 0;
//	int sum = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum += ss[i].grades[j];
//
//		}
//		average = sum / 3;
//		if (average < 50)
//			cout << "Dvoechnik = " << ss[i].fname << ss[i].group << endl;
//	}
//
//}
//функция структуры
struct ticket
{
	string name;
	string time;
	string date;
	double price;
	void enter_ticket()
	{
		cin >> name >> time >> date >> price;
	}
	void print()
	{
		cout << name << " " << time << " " << date << " " << price << endl;
	}

	void print_by_date(string cmp_date)
	{
		if (cmp_date == date)
			print();
	}


	bool cmp_by_price(double cmp_price)
	{

		return (price < cmp_price);
	}
};
struct RAM
{
	string firm;
	int ch;
	int v;
	void enter_RAM()
	{
		cin >> firm >> ch >> v;
	}
	void print()
	{
		cout << firm << " " << ch << " " << v << endl;
	}
	bool cmp_by_ch(double cmp_ch)
	{

		return (ch > cmp_ch);
	}
	bool cmp_by_v(double cmp_v)
	{

		return (v > cmp_v);
	}
};
void fill(ticket* tt, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> tt[i].name >> tt[i].time >> tt[i].date >> tt[i].price;
	}
}
void print(ticket* tt, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << tt[i].name << " " << tt[i].time << " " << tt[i].date << " " << tt[i].price << endl;
	}
}
void out_date(ticket* tt, int n)
{
	string date;
	cin >> date;
	for (int i = 0; i < n; i++)
	{
		if (date == tt[i].date)
			cout << tt[i].name << " " << tt[i].time << " " << tt[i].date << " " << tt[i].price << endl;
	}
}
void out_price(ticket* tt, int n)
{
	int price = 0;
	cin >> price;
	for (int i = 0; i < n; i++)
	{
		if (tt[i].price <= price)
			cout << tt[i].name << " " << tt[i].time << " " << tt[i].date << " " << tt[i].price << endl;
	}
}

struct example
{
	int a;

	double d;
	char b;
	int z;
};

struct date
{
	int day, month, year;
	void enter_date()
	{
		char c;
		cin >> day >>c>> month >>c>> year;
	}
	bool cmp_date(date d)
	{
		return (d.day == day && d.month == month && d.year == year);
	}

	void print()
	{
		cout << day << '.' << month << '.' << year;
	}

};
struct student
{
	string fname;
	int group;
	date entering_date;
	void enter_student()
	{
		cin >> fname >> group;
		entering_date.enter_date();
	}

	void print()
	{
		cout << fname << " " << group << " ";
		entering_date.print();
		cout << endl;
	}
};
void main()
{
	int n, choice;

	student* ss;
	date d;
	cin >> n;

	ss = new student[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << i + 1 << " the student " << endl;
		ss[i].enter_student();
	}
	cout << "Enter date to compare with: " << endl;
	d.enter_date();
	for (int i = 0; i < n; i++)
	{
		if (ss[i].entering_date.cmp_date(d))
			ss[i].print();
	}
	delete[] ss;
	//cout << sizeof(example) << endl;
	//ticket* tt;
	////ticket x[4] = { {"A","12:00","25.08.2018",2000},{ "B","13:00","21.08.2018",1000 },{ "C","23:00","21.08.2018",5000 },{ "D","18:00","30.08.2018",1500 } };
	//int n=4;
	//cin >> n;

	//tt = new ticket[n];
	////tt = x;
	//
	//int z=0;
	//cout << "Choose options: 0 - fill and print, \n 1 - print tickets on specific date, \n 2 - Print ticekt not higher than specific price, \n 3 - Print, \n 4 - Exit" << endl;
	//
	//while (z < 4)
	//{
	//	cin >> z;
	//	switch (z)
	//	{
	//	case 0:
	//	{
	//		fill(tt, n);
	//		print(tt, n);
	//	}
	//	break;
	//	case 1: out_date(tt, n);
	//		break;
	//	case 2: out_price(tt, n);
	//		break;
	//	case 3: print(tt, n);
	//		break;
	//	
	//	default:
	//		break;
	//	}
	//}

	/*int n, choice;
	string c_date;
	double c_price;
	bool f = true;
	ticket* t;
	cin >> n;
	t = new ticket[n];
	for (int i = 0; i < n; i++)
	{
		t[i].enter_ticket();
	}
	while (true)
	{
		cout << "Enter 1 - to print date" << endl;
		cout << "Enter 2 - to print by price" << endl;
		cout << "Enter 3 - to print all" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cin >> c_date;
			for (int i = 0; i < n; i++)
			{
				t[i].print_by_date(c_date);
			}
			break;
		case 2: cin >> c_price;
			for (int i = 0; i < n; i++)
			{
				if (t[i].cmp_by_price(c_price) == true)
					t[i].print();
			}
			break;
		case 3:
			for (int i = 0; i < n; i++)
			{
				t[i].print();
			}
			break;
		default:
			f = false;
			break;
		}
		if (!f) break;
	}
	delete[] t;
*/
	/*int n, choice;
	int c_ch;
	int c_v;
	bool f = true;
	RAM* r;
	cin >> n;
	r = new RAM[n];
	for (int i = 0; i < n; i++)
	{
		r[i].enter_RAM();
	}
	while (true)
	{
		cout << "Enter 1 - to print by frequency" << endl;
		cout << "Enter 2 - to print by volume" << endl;
		cout << "Enter 3 - to print all" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cin >> c_ch;
			for (int i = 0; i < n; i++)
			{
				if (r[i].cmp_by_ch(c_ch) == true)
					r[i].print();
			}
			break;
		case 2: cin >> c_v;
			for (int i = 0; i < n; i++)
			{
				if (r[i].cmp_by_v(c_v) == true)
					r[i].print();
			}
			break;
		case 3:
			for (int i = 0; i < n; i++)
			{
				r[i].print();
			}
			break;
		default:
			f = false;
			break;
		}
		if (!f) break;
	}
	delete[] r;
*/
	//delete[]tt;

	/*student *ss;
	int n;
	cin >> n;
	ss = new student[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ss[i].fname >> ss[i].group;
		for (int j = 0; j < 3; j++)
		{
			cin >> ss[i].grades[j];
		}
	}
	otli4niki(ss, n);*/
	//dvoe4niki(ss, n);







	//student s1 = { "","",0,{0,0} };
	//ss[0].name = "Zhanar";
	//ss[0].fname = "Sadykova";
	//ss[0].age = 18;

	//ss[0].grades[0] = 100;
	//ss[0].grades[1] = 98;

	//s1 = ss[0];
	//cin >> ss[1].name;//ввод данных
	//cout << s1.name << " " << s1.fname << " " << s1.age << " " << s1.grades[0] << " " << s1.grades[1] << endl;
	////s1.age = 20;
	system("pause");
}