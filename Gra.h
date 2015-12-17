#include <allegro5\allegro.h>
#include <allegro5\allegro_native_dialog.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <allegro5\allegro_primitives.h>
#include <iostream>

struct statystyki
{
	int punkty_zycia[2];
	int atak_fizyczny;
	int atak_magiczny;
	int obrona_fizyczna;
	int obrona_magiczna;
	int szybkosc;
};

struct obrazenia{
	int obrazenia_bazowe;
	double przelicznik_z_maks_pz_rzucajacego;
	double przelicznik_z_maks_pz_celu;
	double przelicznik_z_obecnych_pz_rzucajacego;
	double przelicznik_z_obecnych_pz_celu;
	double przelicznik_z_ataku_fizycznego_rzucajacego;
	double przelicznik_z_ataku_fizycznego_celu;
	double przelicznik_z_ataku_magicznego_rzucajacego;
	double przelicznik_z_ataku_magicznego_celu;
	double przelicznik_z_obrony_fizycznej_rzucajacego;
	double przelicznik_z_obrony_fizycznej_celu;
	double przelicznik_z_obrony_magicznej_rzucajacego;
	double przelicznik_z_obrony_magicznej_celu;
};

struct umiejetnosc
{
	ALLEGRO_USTR *  nazwa_umiejetnosci;
	ALLEGRO_USTR *  opis_umiejetnosci;
	int typ_umiejetnosci;
	obrazenia fizyczne;
	obrazenia magiczne;
	obrazenia nieuchronne;
	obrazenia leczenie_rzucajacego;
	obrazenia leczenie_celu;
	obrazenia zmiana_ataku_fizycznego_rzucajacego;
	obrazenia zmiana_ataku_fizycznego_celu;
	obrazenia zmiana_ataku_magicznego_rzucajacego;
	obrazenia zmiana_ataku_magicznego_celu;
	obrazenia zmiana_obrony_fizycznej_rzucajacego;
	obrazenia zmiana_obrony_fizycznej_celu;
	obrazenia zmiana_obrony_magicznej_rzucajacego;
	obrazenia zmiana_obrony_magicznej_celu;
	int ilosc_uzyc[2];
};

struct przedmiot{
	ALLEGRO_USTR *  nazwa_przedmiotu;
	ALLEGRO_USTR *  opis_przedmiotu;
	statystyki statystyki_przedmiotu;
	int cena_przedmiotu;
};

struct bohater
{
	ALLEGRO_USTR *  klasa;
	int poziom;
	statystyki statystyki;
	przedmiot przedmiot;
	umiejetnosc umiejetnosc[4];
	bool ruch;
	bool zywy;
};

struct przeciwnik
{
	ALLEGRO_USTR *  nazwa;
	statystyki statystyki;
	int zloto;
	umiejetnosc umiejetnosc[4];
	bool ruch;
	bool zywy;
};

przedmiot przedmioty(int numer_przedmiotu);

umiejetnosc umiejetnosci(int numer_umiejetnosci);

przeciwnik wrogowie(int numer_wroga);

void pokaz_statystyki_bohatera(ALLEGRO_FONT *czciaka, bohater postac, int x, int y, int odleglosc);

void poziomm(bohater sojusznik[4]);

void instalacja_bohaterow(bohater sojusznik[4]);

void poziomy(int poziom, int podpoziom, przeciwnik wrog[8]);

void miasto(ALLEGRO_FONT *czciaka, int x, int y, int wybor_miasto);

void poczatek_gry(ALLEGRO_FONT *czciaka, int x, int y, int wybor_poczatek_gry, int zloto);

void menu_glowne(ALLEGRO_FONT *czciaka, int x, int y, int wybor_menu);

void opcje(ALLEGRO_FONT *czciaka, int x, int y, int wybor_opcje, bohater sojusznik[4]);

statystyki uzycie_umiejetnosci_na_cele(umiejetnosc uzyta, statystyki rzucajacego, statystyki celu);

statystyki uzycie_umiejetnosci_na_siebie(umiejetnosc uzyta, statystyki rzucajacego, statystyki celu);

void wyswietlanie_podczas_walki(ALLEGRO_FONT* zywy, ALLEGRO_FONT* martwy, bohater sojusznik[4], przeciwnik *wrog, int ilosc_wrogow);

void wyswietlanie_podczas_walki2(ALLEGRO_FONT* czcionka, bohater sojusznik, int wybor);

void wyswietlanie_podczas_walki3(ALLEGRO_FONT* czcionka, bohater sojusznik, int wybor);

void Po_wygranej(ALLEGRO_FONT *czcionka, int x, int y, int wybor_po_wygranej);

void zerowanie_statystyk(bohater sojusznik[4]);