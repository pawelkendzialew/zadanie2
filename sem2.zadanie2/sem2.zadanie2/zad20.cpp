#ifndef MOJE_FUNKJCE_HPP
#define MOJE_FUNKJCE_HPP
#include <iostream>
#include <cstring>

using namespace std;
constexpr size_t ROZMIAR_TXT = 200;
using text = char[ROZMIAR_TXT + 1];
using sztukiZlota = int;

enum class TypRzadkosci
{
	popspolita,
	niecodzienna,
	rzadka,
	unikatowa
};

struct Przedmiot
{
	text nazwa;
	sztukiZlota wartosc;
	TypRzadkosci rzadkosc;
};

Przedmiot wypelnijPrzedmiot(const char* nazwa, sztukiZlota wartosc, TypRzadkosci typ);

void (*efektMagiczny1)(int);

void (*efektMagiczny2)(int);

#endif

void efektMagiczny1(int mana)
{
char *efekt1 = {"Ognista flara"};
char *efekt2 = {"Ognista kula"};
char *efekt3 = {"Ogniste tornado"};
}
void efektMagiczny2(int mana)
{
char *efekt1 = {"Ognista flara"};
char *efekt2 = {"Ognista kula"};
char *efekt3 = {"Ogniste tornado"};
}

Przedmiot wypelnijPrzedmiot(const char* nazwa, sztukiZlota wartosc, TypRzadkosci typ)
{
	Przedmiot nowy;
	strncpy(nowy.nazwa, nazwa, ROZMIAR_TXT);
	nowy.nazwa[ROZMIAR_TXT] = '\0';
	nowy.wartosc = wartosc;
	nowy.rzadkosc = typ;
	return nowy;
}

ostream& operator<<(ostream &str, const Przedmiot& p)
{
	static const char* NAZWY_TYPOW_RZADKOSCI[] = { "Pospolity","Niecodzienny","Rzadki","Unikatowy" };
	str << "\"" << p.nazwa << "\"" << " [" << p.wartosc << "]" << " {"
		<< NAZWY_TYPOW_RZADKOSCI[ (int) p.rzadkosc] << "}";
	return str;
}


int main()
{
	Przedmiot wisiorek = wypelnijPrzedmiot("Amulet zaliczenia warunkowego ;)", 100, TypRzadkosci::unikatowa);
	cout << wisiorek << endl;
	return 0;
}
