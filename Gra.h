#include <allegro5\allegro.h>
#include <allegro5\allegro_native_dialog.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <allegro5\allegro_primitives.h>

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
	int ilosc_celow;
	obrazenia fizyczne;
	obrazenia magiczne;
	obrazenia nieuchronne;
	int leczenie_rzucajacego;
	int leczenie_celu;
	int zmiana_ataku_fizycznego_rzucajacego;
	int zmiana_ataku_fizycznego_celu;
	int zmiana_ataku_magicznego_rzucajacego;
	int zmiana_ataku_magicznego_celu;
	int zmiana_obrony_fizycznej_rzucajacego;
	int zmiana_obrony_fizycznej_celu;
	int zmiana_obrony_magicznej_rzucajacego;
	int zmiana_obrony_magicznej_celu;
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
};

struct przeciwnik
{
	ALLEGRO_USTR *  nazwa;
	statystyki statystyki;
	int zloto;
	umiejetnosc umiejetnosc[4];
};

przedmiot przedmioty(int numer_przedmiotu);

umiejetnosc umiejetnosci(int numer_umiejetnosci);

przeciwnik wrogowie(int numer_wroga);

void pokaz_statystyki_bohatera(ALLEGRO_FONT *czciaka, bohater postac, int x, int y);

void poziom(bohater sojusznik[4]);

void instalacja_bohaterow(bohater sojusznik[4]);

void miasto(ALLEGRO_FONT *czciaka, int x, int y, int wybor_miasto);

void poczatek_gry(ALLEGRO_FONT *czciaka, int x, int y, int wybor_poczatek_gry);

void menu_glowne(ALLEGRO_FONT *czciaka, int x, int y, int wybor_menu);

void opcje(ALLEGRO_FONT *czciaka, int x, int y, int wybor_opcje, bohater sojusznik[4]);

