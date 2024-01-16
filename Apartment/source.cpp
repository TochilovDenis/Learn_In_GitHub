#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>

using namespace std;

struct Apartment {
	int m_AmountOfRooms{ 0 }; // ���������� ������
	double m_Meterage{ 0 };	 // ������
	int m_NumberOfApartment{ 0 }; // ����� ��������
	int m_AmountOfResidents{ 0 }; // ���������� �������
	bool m_Balcony{ false }; // ������� �������

	// setter - ������������� �������� ��������� ����������
	void AmountOfRooms(int value) { m_AmountOfRooms = value; } 
	void Meterage(double value) { m_Meterage = value; }
	void NumberOfApartment(int value) { m_NumberOfApartment = value; }
	void AmountOfResidents(int value) { m_AmountOfResidents = value; }
	void Balcony(bool value) { m_Balcony = value; }

	// getter - ���������� ��� ��������� ����������
	int AmountOfRooms() const { return m_AmountOfRooms; } 
	double Meterage() const { return m_Meterage; }
	int NumberOfApartment() const { return m_NumberOfApartment; }
	int AmountOfResidents() const { return m_AmountOfResidents; }
	bool Balcony() const { return m_Balcony; }

	string GetApartmenttString() const {
		return "���������� ������: " + to_string(AmountOfRooms()) +
			" | ������: " + ValueString(Meterage()) +
			" ��.� | ����� ��������: " + to_string(NumberOfApartment()) +
			" | ���������� �������: " + to_string(AmountOfResidents()) +
			" | ������� �������: " + (Balcony() ? "��" : "���");
	}

	string ValueString(double value) const {
		ostringstream ss;
		ss << value;
		return ss.str();
	}
	
	void PrintApartment() const {
		cout << GetApartmenttString();
	}
};

void ConsoleSetup(int);

int main() {
	ConsoleSetup(1251);
	Apartment a;
	a = { 1, 42.2, 154, 1, false };
	a.PrintApartment();

	return 0;
}

void ConsoleSetup(int mode) {
	SetConsoleCP(mode);
	SetConsoleOutputCP(mode);
}