#include <iostream>
#include <string>

class klient 
{
	protected:
	string imie;
	string nazwisko;
	string nr_tel;
	string email;
	string kraj;
	string nr_lotu;
	bool bagaz;
	bool priority;
	int nr_miejsca;
	
	public:
	void wczytaj_dane();
	void dodaj_bagaz();
	void wybierz_miejsce();
	void dodaj_priority();
	void spr_platnosc();	//Sprawdza, czy dokonano platnosc 
}

class lot 
{
	private:
	int ilosc_miejsc; //tyle ile samolot moze pomiescic
	int wolne_miejsca;
	string nr_lotu;
	string odlot;
	string przylot;
	double cena_podst;
	string data;
	
	protected:
	double cena_koncowa;
	
	public:
	double oblicz_cene();
	void zajmij_miejsce();
	
}

class platnosc 
{
	private:
	string nr_platnosci;
	protected:
	bool status; //czy zostala zrealizowana
	
	public:
	void zaplac();
}

class admin 
{
	const string login;

	public:
	void zaloguj();
	void dodaj_lot();
	void usun_lot();
	void anuluj_rezerwacje();
}	


	