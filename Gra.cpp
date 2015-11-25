#include "Gra.h"

przedmiot przedmioty(int numer_przedmiotu){																	//spis przedmiotow

	przedmiot brak_przedmiotu;
	brak_przedmiotu.nazwa_przedmiotu = al_ustr_new("BRAK");
	brak_przedmiotu.opis_przedmiotu = al_ustr_new("BRAK");
	brak_przedmiotu.statystyki_przedmiotu.punkty_zycia[0] = NULL;
	brak_przedmiotu.statystyki_przedmiotu.punkty_zycia[1] = NULL;
	brak_przedmiotu.statystyki_przedmiotu.atak_fizyczny = NULL;
	brak_przedmiotu.statystyki_przedmiotu.atak_magiczny = NULL;
	brak_przedmiotu.statystyki_przedmiotu.obrona_fizyczna = NULL;
	brak_przedmiotu.statystyki_przedmiotu.obrona_magiczna = NULL;
	brak_przedmiotu.statystyki_przedmiotu.szybkosc = NULL;
	brak_przedmiotu.cena_przedmiotu = NULL;

	switch (numer_przedmiotu){
	case(0) :
		return brak_przedmiotu;
		break;
	}
}

umiejetnosc umiejetnosci(int numer_umiejetnosci){															//spis umiejetnosci

	umiejetnosc brak_umiejetnosci;
	brak_umiejetnosci.nazwa_umiejetnosci = al_ustr_new("BRAK");
	brak_umiejetnosci.opis_umiejetnosci = al_ustr_new("BRAK");
	brak_umiejetnosci.typ_umiejetnosci = NULL;
	brak_umiejetnosci.ilosc_celow = NULL;
	brak_umiejetnosci.fizyczne.obrazenia_bazowe = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.fizyczne.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.magiczne.obrazenia_bazowe = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.magiczne.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.nieuchronne.obrazenia_bazowe = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.nieuchronne.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.ilosc_uzyc[0] = NULL;
	brak_umiejetnosci.ilosc_uzyc[1] = NULL;
	
	umiejetnosc silny_cios=brak_umiejetnosci;
	silny_cios.nazwa_umiejetnosci = al_ustr_new("Silny cios");
	silny_cios.opis_umiejetnosci = al_ustr_new("Postac zadaje potezne uderzenie zdolne skruszyc zbroje. Umiejetnosc zadaje obrazenia fizyczne zalezne od ataku fizycznego rzucajacego oraz zmniejsza obrone fizyczna celu");
	silny_cios.typ_umiejetnosci = 1;
	silny_cios.ilosc_celow = 1;
	silny_cios.fizyczne.obrazenia_bazowe = 5;
	silny_cios.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 1.7;
	silny_cios.zmiana_obrony_fizycznej_celu = -5;

	switch (numer_umiejetnosci){
	case(0) :
		return brak_umiejetnosci;
		break;
	}
}

przeciwnik wrogowie(int numer_wroga){																			//spis przeciwnikow

	przeciwnik goblin;
	goblin.nazwa = al_ustr_new("Goblin");
	goblin.statystyki.punkty_zycia[0] = 7;
	goblin.statystyki.punkty_zycia[1] = 7;
	goblin.statystyki.atak_fizyczny = 3;
	goblin.statystyki.atak_magiczny = 0;
	goblin.statystyki.obrona_fizyczna = 2;
	goblin.statystyki.obrona_magiczna = 1;
	goblin.statystyki.szybkosc = 3;
	goblin.zloto = 5;
	for (int i = 0; i < 4; i++){
		goblin.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik goblin_wojownik;
	goblin_wojownik.nazwa = al_ustr_new("Goblin wojownik");
	goblin_wojownik.statystyki.punkty_zycia[0] = 12;
	goblin_wojownik.statystyki.punkty_zycia[1] = 12;
	goblin_wojownik.statystyki.atak_fizyczny = 5;
	goblin_wojownik.statystyki.atak_magiczny = 0;
	goblin_wojownik.statystyki.obrona_fizyczna = 3;
	goblin_wojownik.statystyki.obrona_magiczna = 2;
	goblin_wojownik.statystyki.szybkosc = 4;
	goblin_wojownik.zloto = 10;
	for (int i = 0; i < 4; i++){
		goblin_wojownik.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik goblin_mag;
	goblin_mag.nazwa = al_ustr_new("Goblin mag");
	goblin_mag.statystyki.punkty_zycia[0] = 10;
	goblin_mag.statystyki.punkty_zycia[1] = 10;
	goblin_mag.statystyki.atak_fizyczny = 1;
	goblin_mag.statystyki.atak_magiczny = 6;
	goblin_mag.statystyki.obrona_fizyczna = 1;
	goblin_mag.statystyki.obrona_magiczna = 4;
	goblin_mag.statystyki.szybkosc = 2;
	goblin_mag.zloto = 10;
	for (int i = 0; i < 4; i++){
		goblin_mag.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik krol_goblinow;
	krol_goblinow.nazwa = al_ustr_new("Krol goblinow");
	krol_goblinow.statystyki.punkty_zycia[0] = 40;
	krol_goblinow.statystyki.punkty_zycia[1] = 40;
	krol_goblinow.statystyki.atak_fizyczny = 25;
	krol_goblinow.statystyki.atak_magiczny = 16;
	krol_goblinow.statystyki.obrona_fizyczna = 21;
	krol_goblinow.statystyki.obrona_magiczna = 14;
	krol_goblinow.statystyki.szybkosc = 5;
	krol_goblinow.zloto = 50;
	for (int i = 0; i < 4; i++){
		krol_goblinow.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik elitarny_goblin;
	elitarny_goblin.nazwa = al_ustr_new("Elitarny goblin");
	elitarny_goblin.statystyki.punkty_zycia[0] = 35;
	elitarny_goblin.statystyki.punkty_zycia[1] = 35;
	elitarny_goblin.statystyki.atak_fizyczny = 20;
	elitarny_goblin.statystyki.atak_magiczny = 11;
	elitarny_goblin.statystyki.obrona_fizyczna = 21;
	elitarny_goblin.statystyki.obrona_magiczna = 14;
	elitarny_goblin.statystyki.szybkosc = 5;
	elitarny_goblin.zloto = 40;
	for (int i = 0; i < 4; i++){
		elitarny_goblin.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik ork;
	ork.nazwa = al_ustr_new("Ork");
	ork.statystyki.punkty_zycia[0] = 30;
	ork.statystyki.punkty_zycia[1] = 30;
	ork.statystyki.atak_fizyczny = 30;
	ork.statystyki.atak_magiczny = 5;
	ork.statystyki.obrona_fizyczna = 30;
	ork.statystyki.obrona_magiczna = 10;
	ork.statystyki.szybkosc = 6;
	ork.zloto = 60;
	for (int i = 0; i < 4; i++){
		ork.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik ork_wojownik;
	ork_wojownik.nazwa = al_ustr_new("Ork wojownik");
	ork_wojownik.statystyki.punkty_zycia[0] = 50;
	ork_wojownik.statystyki.punkty_zycia[1] = 50;
	ork_wojownik.statystyki.atak_fizyczny = 40;
	ork_wojownik.statystyki.atak_magiczny = 5;
	ork_wojownik.statystyki.obrona_fizyczna = 50;
	ork_wojownik.statystyki.obrona_magiczna = 20;
	ork_wojownik.statystyki.szybkosc = 4;
	ork_wojownik.zloto = 70;
	for (int i = 0; i < 4; i++){
		ork_wojownik.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik ork_szaman;
	ork_szaman.nazwa = al_ustr_new("Ork szaman");
	ork_szaman.statystyki.punkty_zycia[0] = 40;
	ork_szaman.statystyki.punkty_zycia[1] = 40;
	ork_szaman.statystyki.atak_fizyczny = 20;
	ork_szaman.statystyki.atak_magiczny = 25;
	ork_szaman.statystyki.obrona_fizyczna = 35;
	ork_szaman.statystyki.obrona_magiczna = 35;
	ork_szaman.statystyki.szybkosc = 3;
	ork_szaman.zloto = 70;
	for (int i = 0; i < 4; i++){
		ork_szaman.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik krol_orkow;
	krol_orkow.nazwa = al_ustr_new("Krol orkow");
	krol_orkow.statystyki.punkty_zycia[0] = 80;
	krol_orkow.statystyki.punkty_zycia[1] = 80;
	krol_orkow.statystyki.atak_fizyczny = 65;
	krol_orkow.statystyki.atak_magiczny = 30;
	krol_orkow.statystyki.obrona_fizyczna = 60;
	krol_orkow.statystyki.obrona_magiczna = 40;
	krol_orkow.statystyki.szybkosc = 9;
	krol_orkow.zloto = 100;
	for (int i = 0; i < 4; i++){
		krol_orkow.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik elitarny_ork;
	elitarny_ork.nazwa = al_ustr_new("Elitarny ork");
	elitarny_ork.statystyki.punkty_zycia[0] = 70;
	elitarny_ork.statystyki.punkty_zycia[1] = 70;
	elitarny_ork.statystyki.atak_fizyczny = 60;
	elitarny_ork.statystyki.atak_magiczny = 25;
	elitarny_ork.statystyki.obrona_fizyczna = 60;
	elitarny_ork.statystyki.obrona_magiczna = 40;
	elitarny_ork.statystyki.szybkosc = 9;
	elitarny_ork.zloto = 90;
	for (int i = 0; i < 4; i++){
		elitarny_ork.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik troll;
	troll.nazwa = al_ustr_new("Troll");
	troll.statystyki.punkty_zycia[0] = 150;
	troll.statystyki.punkty_zycia[1] = 150;
	troll.statystyki.atak_fizyczny = 120;
	troll.statystyki.atak_magiczny = 0;
	troll.statystyki.obrona_fizyczna = 100;
	troll.statystyki.obrona_magiczna = 20;
	troll.statystyki.szybkosc = 3;
	troll.zloto = 150;
	for (int i = 0; i < 4; i++){
		troll.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik pomniejszy_demon;
	pomniejszy_demon.nazwa = al_ustr_new("Pomniejszy demon");
	pomniejszy_demon.statystyki.punkty_zycia[0] = 150;
	pomniejszy_demon.statystyki.punkty_zycia[1] = 150;
	pomniejszy_demon.statystyki.atak_fizyczny = 100;
	pomniejszy_demon.statystyki.atak_magiczny = 70;
	pomniejszy_demon.statystyki.obrona_fizyczna = 80;
	pomniejszy_demon.statystyki.obrona_magiczna = 80;
	pomniejszy_demon.statystyki.szybkosc = 6;
	pomniejszy_demon.zloto = 200;
	for (int i = 0; i < 4; i++){
		pomniejszy_demon.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik demon;
	demon.nazwa = al_ustr_new("Demon");
	demon.statystyki.punkty_zycia[0] = 170;
	demon.statystyki.punkty_zycia[1] = 170;
	demon.statystyki.atak_fizyczny = 120;
	demon.statystyki.atak_magiczny = 120;
	demon.statystyki.obrona_fizyczna = 100;
	demon.statystyki.obrona_magiczna = 100;
	demon.statystyki.szybkosc = 7;
	demon.zloto = 250;
	for (int i = 0; i < 4; i++){
		demon.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik ksiaze_demonow;
	ksiaze_demonow.nazwa = al_ustr_new("Ksiaze demonow");
	ksiaze_demonow.statystyki.punkty_zycia[0] = 200;
	ksiaze_demonow.statystyki.punkty_zycia[1] = 200;
	ksiaze_demonow.statystyki.atak_fizyczny = 150;
	ksiaze_demonow.statystyki.atak_magiczny = 150;
	ksiaze_demonow.statystyki.obrona_fizyczna = 130;
	ksiaze_demonow.statystyki.obrona_magiczna = 100;
	ksiaze_demonow.statystyki.szybkosc = 7;
	ksiaze_demonow.zloto = 500;
	for (int i = 0; i < 4; i++){
		ksiaze_demonow.umiejetnosc[i] = umiejetnosci(0);
	}

	przeciwnik wladca_demonow;
	wladca_demonow.nazwa = al_ustr_new("Eladaca demonow");
	wladca_demonow.statystyki.punkty_zycia[0] = 300;
	wladca_demonow.statystyki.punkty_zycia[1] = 300;
	wladca_demonow.statystyki.atak_fizyczny = 220;
	wladca_demonow.statystyki.atak_magiczny = 220;
	wladca_demonow.statystyki.obrona_fizyczna = 180;
	wladca_demonow.statystyki.obrona_magiczna = 180;
	wladca_demonow.statystyki.szybkosc = 9;
	wladca_demonow.zloto = 1000;
	for (int i = 0; i < 4; i++){
		ksiaze_demonow.umiejetnosc[i] = umiejetnosci(0);
	}

	switch (numer_wroga)
	{
	case(0) :
		return goblin;
		break;
	case(1) :
		return goblin_wojownik;
		break;
	case(2) :
		return goblin_mag;
		break;
	case(3) :
		return krol_goblinow;
		break;
	case(4) :
		return elitarny_goblin;
		break;
	case(5) :
		return ork;
		break;
	case(6) :
		return ork_wojownik;
		break;
	case(7) :
		return ork_szaman;
		break;
	case(8) :
		return krol_orkow;
		break;
	case(9) :
		return elitarny_ork;
		break;
	case(10) :
		return troll;
		break;
	case(11) :
		return pomniejszy_demon;
		break;
	case(12) :
		return demon;
		break;
	case(13) :
		return ksiaze_demonow;
		break;
	case(14) :
		return wladca_demonow;
		break;
	}
}

void pokaz_statystyki_bohatera(ALLEGRO_FONT *czcionka, bohater postac, int x, int y){
	int odstep = 35;
	int odleglosc = 300;
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y, 0, "Klasa:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "Poziom:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, "Punkty zycia:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 3, 0, "Atak fizyczny:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 4, 0, "Atak magiczny:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 5, 0, "Obrona fizyczna:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 6, 0, "Obrona magiczna:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 7, 0, "Szybkosc:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 8, 0, "Przedmiot:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 9, 0, "Umiejetnosc:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 10, 0, "Umiejetnosc:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 11, 0, "Umiejetnosc:");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 12, 0, "Umiejetnosc:");
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y, ALLEGRO_ALIGN_RIGHT, postac.klasa);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep, ALLEGRO_ALIGN_RIGHT, "%i", postac.poziom);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 2, ALLEGRO_ALIGN_RIGHT, "%i/%i", postac.statystyki.punkty_zycia[0], postac.statystyki.punkty_zycia[1]);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 3, ALLEGRO_ALIGN_RIGHT, "%i", postac.statystyki.atak_fizyczny);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 4, ALLEGRO_ALIGN_RIGHT, "%i", postac.statystyki.atak_magiczny);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 5, ALLEGRO_ALIGN_RIGHT, "%i", postac.statystyki.obrona_fizyczna);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 6, ALLEGRO_ALIGN_RIGHT, "%i", postac.statystyki.obrona_magiczna);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 7, ALLEGRO_ALIGN_RIGHT, "%i", postac.statystyki.szybkosc);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 8, ALLEGRO_ALIGN_RIGHT, postac.przedmiot.nazwa_przedmiotu);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 9, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[0].nazwa_umiejetnosci);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 10, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[1].nazwa_umiejetnosci);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 11, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[2].nazwa_umiejetnosci);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 12, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[3].nazwa_umiejetnosci);
}

void poziom(bohater sojusznik[4]){
	for (int i = 0; i < 2; i++){
		sojusznik[0].statystyki.punkty_zycia[i] = 10 + 10 * sojusznik[0].poziom;
		sojusznik[1].statystyki.punkty_zycia[i] = 10 + 7 * sojusznik[1].poziom;
		sojusznik[2].statystyki.punkty_zycia[i] = 10 + 5 * sojusznik[2].poziom;
		sojusznik[3].statystyki.punkty_zycia[i] = 10 + 4 * sojusznik[3].poziom;
	}
	sojusznik[0].statystyki.atak_fizyczny = 4 * sojusznik[0].poziom;
	sojusznik[1].statystyki.atak_fizyczny = 5 * sojusznik[1].poziom;
	sojusznik[2].statystyki.atak_fizyczny = 1 * sojusznik[2].poziom;
	sojusznik[3].statystyki.atak_fizyczny = 3 * sojusznik[3].poziom;
	sojusznik[0].statystyki.atak_magiczny = 1 * sojusznik[0].poziom;
	sojusznik[1].statystyki.atak_magiczny = 3 * sojusznik[1].poziom;
	sojusznik[2].statystyki.atak_magiczny = 5 * sojusznik[2].poziom;
	sojusznik[3].statystyki.atak_magiczny = 4 * sojusznik[3].poziom;
	sojusznik[0].statystyki.obrona_fizyczna = 5 * sojusznik[0].poziom;
	sojusznik[1].statystyki.obrona_fizyczna = 3 * sojusznik[1].poziom;
	sojusznik[2].statystyki.obrona_fizyczna = 1 * sojusznik[2].poziom;
	sojusznik[3].statystyki.obrona_fizyczna = 4 * sojusznik[3].poziom;
	sojusznik[0].statystyki.obrona_magiczna = 2 * sojusznik[0].poziom;
	sojusznik[1].statystyki.obrona_magiczna = 3 * sojusznik[1].poziom;
	sojusznik[2].statystyki.obrona_magiczna = 5 * sojusznik[2].poziom;
	sojusznik[3].statystyki.obrona_magiczna = 4 * sojusznik[3].poziom;
}

void instalacja_bohaterow(bohater sojusznik[4]){
	sojusznik[0].klasa = al_ustr_new("Wojownik");
	sojusznik[1].klasa = al_ustr_new("Lotrzyk");
	sojusznik[2].klasa = al_ustr_new("Mag");
	sojusznik[3].klasa = al_ustr_new("Kaplan");
	sojusznik[0].poziom = 1;
	sojusznik[1].poziom = 1;
	sojusznik[2].poziom = 1;
	sojusznik[3].poziom = 1;
	poziom(sojusznik);
	sojusznik[0].statystyki.szybkosc = 4;
	sojusznik[1].statystyki.szybkosc = 8;
	sojusznik[2].statystyki.szybkosc = 5;
	sojusznik[3].statystyki.szybkosc = 3;

	for (int i = 0; i < 4; i++){
		sojusznik[i].przedmiot = przedmioty(0);
		for (int ii = 0; ii < 4; ii++){
			sojusznik[i].umiejetnosc[ii] = umiejetnosci(0);
		}
	}
}

void miasto(ALLEGRO_FONT *czcionka, int x, int y, int wybor_miasto){
	int odstep = 40;
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y, 0, "Sklep");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "Swiatynia");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, "Wyjdz z miasta");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x - 20, y + wybor_miasto * odstep, 0, ">");
}

void poczatek_gry(ALLEGRO_FONT *czcionka, int x, int y, int wybor_poczatek_gry){
	int odstep = 40;
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y, 0, "Miasto");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "1. Poziom");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, "Opcje");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 3, 0, "Powrot do menu glownego");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x - 20, y + wybor_poczatek_gry * odstep, 0, ">");
}

void menu_glowne(ALLEGRO_FONT *czcionka, int x, int y, int wybor_menu){
	int odstep = 40;
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y, 0, "Nowa gra");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "Wczytaj gre");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, "Wyjdz z gry");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x - 20, y + wybor_menu * odstep, 0, ">");
}

void opcje(ALLEGRO_FONT *czcionka, int x, int y, int wybor_opcje, bohater sojusznik[4]){
	int odstep = 40;
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x, y, 0, sojusznik[0].klasa);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x, y + odstep, 0, sojusznik[1].klasa);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, sojusznik[2].klasa);
	al_draw_ustr(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 3, 0, sojusznik[3].klasa);
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 4, 0, "Zapisz gre");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 5, 0, "Powrot do gry");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x - 20, y + wybor_opcje * odstep, 0, ">");
}
