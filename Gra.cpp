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
	brak_umiejetnosci.leczenie_rzucajacego.obrazenia_bazowe = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_rzucajacego.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.leczenie_celu.obrazenia_bazowe = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.leczenie_celu.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.obrazenia_bazowe = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_maks_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_maks_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_obecnych_pz_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_obecnych_pz_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_fizycznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_fizycznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_magicznego_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_magicznego_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_fizycznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_fizycznej_celu = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_magicznej_rzucajacego = NULL;
	brak_umiejetnosci.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_magicznej_celu = NULL;
	brak_umiejetnosci.ilosc_uzyc[0] = NULL;
	brak_umiejetnosci.ilosc_uzyc[1] = NULL;

	umiejetnosc umiejetnosc = brak_umiejetnosci;

	switch (numer_umiejetnosci){
	case(0) :
		umiejetnosc = brak_umiejetnosci;
		break;
	case(1) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Silny cios");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac zadaje potezne uderzenie zdolne skruszyc zbroje");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.fizyczne.obrazenia_bazowe = 5;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 1.7;
		umiejetnosc.zmiana_obrony_fizycznej_celu.obrazenia_bazowe = -5;
		umiejetnosc.ilosc_uzyc[0] = 20;
		umiejetnosc.ilosc_uzyc[1] = 20;
		break;
	case(2) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Cios w plecy");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac zadaje cios w plecy");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.nieuchronne.obrazenia_bazowe = 5;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 1.7;
		umiejetnosc.fizyczne.przelicznik_z_obrony_fizycznej_celu = 0.5;
		umiejetnosc.ilosc_uzyc[0] = 20;
		umiejetnosc.ilosc_uzyc[1] = 20;
		break;
	case(3) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Magiczna strzala");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac przyzywa magiczna strzale, ktora uderza w przeciwnika");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.magiczne.obrazenia_bazowe = 5;
		umiejetnosc.magiczne.przelicznik_z_ataku_magicznego_rzucajacego = 2.0;
		umiejetnosc.ilosc_uzyc[0] = 20;
		umiejetnosc.ilosc_uzyc[1] = 20;
		break;
	case(4) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Leczenie");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac leczy swojego sojusznika");
		umiejetnosc.typ_umiejetnosci = 3;
		umiejetnosc.leczenie_celu.obrazenia_bazowe = 5;
		umiejetnosc.leczenie_celu.przelicznik_z_ataku_magicznego_rzucajacego = 0.5;
		umiejetnosc.ilosc_uzyc[0] = 20;
		umiejetnosc.ilosc_uzyc[1] = 20;
		break;
	case(5) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Czarna dziura");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac tworzy czarna dziure ktora zadaje obrazenia wszystkim na polu walki");
		umiejetnosc.typ_umiejetnosci = 5;
		umiejetnosc.magiczne.obrazenia_bazowe = 50;
		umiejetnosc.magiczne.przelicznik_z_ataku_magicznego_rzucajacego = 2.0;
		umiejetnosc.ilosc_uzyc[0] = 5;
		umiejetnosc.ilosc_uzyc[1] = 5;
		break;
	case(6) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Swiete porazenie");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac uzywa swietej mocy zeby zaatakowac przeciwnika");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.nieuchronne.obrazenia_bazowe = 10;
		umiejetnosc.nieuchronne.przelicznik_z_ataku_magicznego_rzucajacego = 0.7;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(7) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Na co komu obrona?");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac atakuje przeciwnika porzucajac obrone");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.fizyczne.obrazenia_bazowe = 40;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 1.5;
		umiejetnosc.fizyczne.przelicznik_z_ataku_magicznego_rzucajacego = 1.5;
		umiejetnosc.zmiana_ataku_fizycznego_rzucajacego.obrazenia_bazowe = 20;
		umiejetnosc.zmiana_ataku_magicznego_rzucajacego.obrazenia_bazowe = 20;
		umiejetnosc.zmiana_obrony_fizycznej_rzucajacego.obrazenia_bazowe = -20;
		umiejetnosc.zmiana_obrony_magicznej_rzucajacego.obrazenia_bazowe = -20;
		umiejetnosc.ilosc_uzyc[0] = 15;
		umiejetnosc.ilosc_uzyc[1] = 15;
		break;
	case(8) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Jestem wojownikiem!");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac atakuje okrzykiem przeciwnika zwiekszajac swoje statystyki");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.magiczne.obrazenia_bazowe = 20;
		umiejetnosc.magiczne.przelicznik_z_ataku_magicznego_rzucajacego = 1.5;
		umiejetnosc.zmiana_ataku_fizycznego_rzucajacego.obrazenia_bazowe = 10;
		umiejetnosc.zmiana_ataku_magicznego_rzucajacego.obrazenia_bazowe = 10;
		umiejetnosc.zmiana_obrony_fizycznej_rzucajacego.obrazenia_bazowe = 10;
		umiejetnosc.zmiana_obrony_magicznej_rzucajacego.obrazenia_bazowe = 10;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(9) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Super leczenie");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac uzywa calej swojej mocy zeby uleczyc sojusznikow");
		umiejetnosc.typ_umiejetnosci = 4;
		umiejetnosc.leczenie_celu.przelicznik_z_maks_pz_celu = 0.5;
		umiejetnosc.ilosc_uzyc[0] = 1;
		umiejetnosc.ilosc_uzyc[1] = 1;
		break;
	case(10) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Klatwa");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac przeklina wrogow");
		umiejetnosc.typ_umiejetnosci = 2;
		umiejetnosc.zmiana_ataku_fizycznego_celu.obrazenia_bazowe = -30;
		umiejetnosc.zmiana_ataku_magicznego_celu.obrazenia_bazowe = -30;
		umiejetnosc.zmiana_obrony_fizycznej_celu.obrazenia_bazowe = -30;
		umiejetnosc.zmiana_obrony_magicznej_celu.obrazenia_bazowe = -30;
		umiejetnosc.ilosc_uzyc[0] = 3;
		umiejetnosc.ilosc_uzyc[1] = 3;
		break;
	case(11) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Zakleta bron");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac zaklina magicznie swoja bron i atakuje wrogow");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.fizyczne.obrazenia_bazowe = 20;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 1.0;
		umiejetnosc.fizyczne.przelicznik_z_ataku_magicznego_rzucajacego = 1.0;
		umiejetnosc.magiczne.obrazenia_bazowe = 20;
		umiejetnosc.magiczne.przelicznik_z_ataku_magicznego_rzucajacego = 1.5;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(12) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Podaruj nam oczy");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac prosi mrocznego boga o oczy");
		umiejetnosc.typ_umiejetnosci = 5;
		umiejetnosc.zmiana_obrony_magicznej_celu.obrazenia_bazowe = -50;
		umiejetnosc.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_magicznej_rzucajacego = -0.3;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(13) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Zatrute ostrza");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac zatruwa swoja bron i atakuje przeciwnika");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.fizyczne.obrazenia_bazowe = 20;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 1.3;
		umiejetnosc.nieuchronne.obrazenia_bazowe = 5;
		umiejetnosc.nieuchronne.przelicznik_z_ataku_magicznego_rzucajacego = 0.4;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(14) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Wir ostrzy");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac atakuje wszystkich przeciwnikow");
		umiejetnosc.typ_umiejetnosci = 3;
		umiejetnosc.fizyczne.obrazenia_bazowe = 10;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 0.9;
		umiejetnosc.ilosc_uzyc[0] = 15;
		umiejetnosc.ilosc_uzyc[1] = 15;
		break;
	case(15) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Leczace uderzenie");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac atakuje przeciwnika i sie leczy");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.leczenie_rzucajacego.obrazenia_bazowe = 10;
		umiejetnosc.leczenie_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego = 0.4;
		umiejetnosc.fizyczne.obrazenia_bazowe = 10;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego = 1.1;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(16) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Magiczna fala");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac przyzwya magiczna fale atakujaca wszystkich przeciwnikow");
		umiejetnosc.typ_umiejetnosci = 2;
		umiejetnosc.magiczne.obrazenia_bazowe = 10;
		umiejetnosc.magiczne.przelicznik_z_ataku_magicznego_rzucajacego = 0.9;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(17) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Sam sie bijesz");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac wykorzystuje przeciwnika zeby sam sie zaatakowal");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.fizyczne.obrazenia_bazowe = 10;
		umiejetnosc.fizyczne.przelicznik_z_ataku_fizycznego_celu = 1.0;
		umiejetnosc.fizyczne.przelicznik_z_ataku_magicznego_celu = 1.0;
		umiejetnosc.ilosc_uzyc[0] = 15;
		umiejetnosc.ilosc_uzyc[1] = 15;
		break;
	case(18) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Magiczny wybuch");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac tworzy wybuch, ktory atakuje i zmniejsza obrone fizyczna przeciwnika");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.magiczne.obrazenia_bazowe = 10;
		umiejetnosc.magiczne.przelicznik_z_ataku_magicznego_rzucajacego = 1.0;
		umiejetnosc.zmiana_obrony_fizycznej_celu.obrazenia_bazowe = -15;
		umiejetnosc.ilosc_uzyc[0] = 15;
		umiejetnosc.ilosc_uzyc[1] = 15;
		break;
	case(19) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Masz niezla obrone");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac wykorzystuje obrone przeciwnika zeby go zaatakowac");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.fizyczne.obrazenia_bazowe = 10;
		umiejetnosc.fizyczne.przelicznik_z_obrony_fizycznej_celu = 0.8;
		umiejetnosc.fizyczne.przelicznik_z_obrony_magicznej_celu = 0.8;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(20) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Jestem niezwyciezony");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac atakuje przeciwnika swoim niezwyciezeniem");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.fizyczne.obrazenia_bazowe = 10;
		umiejetnosc.fizyczne.przelicznik_z_obecnych_pz_rzucajacego = 1.0;
		umiejetnosc.ilosc_uzyc[0] = 20;
		umiejetnosc.ilosc_uzyc[1] = 20;
		break;
	case(21) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Muhahaha");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac dostaje ataku szalenczego smiechu, ktory zmniejsza atak wszystkim na polu bitwy");
		umiejetnosc.typ_umiejetnosci = 5;
		umiejetnosc.zmiana_ataku_fizycznego_celu.obrazenia_bazowe = -50;
		umiejetnosc.zmiana_ataku_magicznego_celu.obrazenia_bazowe = -50;
		umiejetnosc.ilosc_uzyc[0] = 5;
		umiejetnosc.ilosc_uzyc[1] = 5;
		break;
	case(22) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Blogoslawienstwo");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac blogoslawi swoich sojusznikow");
		umiejetnosc.typ_umiejetnosci = 4;
		umiejetnosc.zmiana_ataku_fizycznego_celu.obrazenia_bazowe = 10;
		umiejetnosc.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_fizycznego_celu = 0.3;
		umiejetnosc.zmiana_ataku_magicznego_celu.obrazenia_bazowe = 10;
		umiejetnosc.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_magicznego_celu = 0.3;
		umiejetnosc.zmiana_obrony_fizycznej_celu.obrazenia_bazowe = 10;
		umiejetnosc.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_fizycznego_celu = 0.3;
		umiejetnosc.zmiana_obrony_magicznej_celu.obrazenia_bazowe = 10;
		umiejetnosc.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_magicznego_celu = 0.3;
		umiejetnosc.ilosc_uzyc[0] = 10;
		umiejetnosc.ilosc_uzyc[1] = 10;
		break;
	case(23) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Ale cios");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac atakuje wroga poteznym ciosem lecz zwieksza jego statystyki");
		umiejetnosc.typ_umiejetnosci = 1;
		umiejetnosc.nieuchronne.przelicznik_z_obecnych_pz_celu = 0.5;
		umiejetnosc.zmiana_ataku_fizycznego_celu.przelicznik_z_obecnych_pz_celu = 0.3;
		umiejetnosc.zmiana_ataku_magicznego_celu.przelicznik_z_obecnych_pz_celu = 0.3;
		umiejetnosc.zmiana_obrony_fizycznej_celu.przelicznik_z_obecnych_pz_celu = 0.3;
		umiejetnosc.zmiana_obrony_magicznej_celu.przelicznik_z_obecnych_pz_celu = 0.3;
		umiejetnosc.ilosc_uzyc[0] = 5;
		umiejetnosc.ilosc_uzyc[1] = 5;
		break;
	case(24) :
		umiejetnosc.nazwa_umiejetnosci = al_ustr_new("Berserker");
		umiejetnosc.opis_umiejetnosci = al_ustr_new("Postac atakuje wszystkich");
		umiejetnosc.typ_umiejetnosci = 5;
		umiejetnosc.fizyczne.przelicznik_z_maks_pz_rzucajacego = 1.0;
		umiejetnosc.ilosc_uzyc[0] = 5;
		umiejetnosc.ilosc_uzyc[1] = 5;
		break;
	}
	return umiejetnosc;
}

przeciwnik wrogowie(int numer_wroga){																			//spis przeciwnikow
	przeciwnik wrog;
	switch (numer_wroga)
	{
	case(0) :
		wrog.nazwa = al_ustr_new("Goblin");
		wrog.statystyki.punkty_zycia[0] = 7;
		wrog.statystyki.punkty_zycia[1] = 7;
		wrog.statystyki.atak_fizyczny = 3;
		wrog.statystyki.atak_magiczny = 0;
		wrog.statystyki.obrona_fizyczna = 2;
		wrog.statystyki.obrona_magiczna = 1;
		wrog.statystyki.szybkosc = 3;
		wrog.zloto = 5;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.zywy = true;
		break;
	case(1) :
		wrog.nazwa = al_ustr_new("Goblin wojownik");
		wrog.statystyki.punkty_zycia[0] = 12;
		wrog.statystyki.punkty_zycia[1] = 12;
		wrog.statystyki.atak_fizyczny = 5;
		wrog.statystyki.atak_magiczny = 0;
		wrog.statystyki.obrona_fizyczna = 3;
		wrog.statystyki.obrona_magiczna = 2;
		wrog.statystyki.szybkosc = 4;
		wrog.zloto = 10;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.umiejetnosc[1] = umiejetnosci(8);
		wrog.zywy = true;
		break;
	case(2) :
		wrog.nazwa = al_ustr_new("Goblin mag");
		wrog.statystyki.punkty_zycia[0] = 10;
		wrog.statystyki.punkty_zycia[1] = 10;
		wrog.statystyki.atak_fizyczny = 1;
		wrog.statystyki.atak_magiczny = 6;
		wrog.statystyki.obrona_fizyczna = 1;
		wrog.statystyki.obrona_magiczna = 4;
		wrog.statystyki.szybkosc = 2;
		wrog.zloto = 10;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(3);
		wrog.umiejetnosc[1] = umiejetnosci(4);
		wrog.zywy = true;
		break;
	case(3) :
		wrog.nazwa = al_ustr_new("Krol goblinow");
		wrog.statystyki.punkty_zycia[0] = 40;
		wrog.statystyki.punkty_zycia[1] = 40;
		wrog.statystyki.atak_fizyczny = 25;
		wrog.statystyki.atak_magiczny = 16;
		wrog.statystyki.obrona_fizyczna = 21;
		wrog.statystyki.obrona_magiczna = 14;
		wrog.statystyki.szybkosc = 5;
		wrog.zloto = 50;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.umiejetnosc[1] = umiejetnosci(2);
		wrog.umiejetnosc[2] = umiejetnosci(11);
		wrog.umiejetnosc[3] = umiejetnosci(14);
		wrog.zywy = true;
		break;
	case(4) :
		wrog.nazwa = al_ustr_new("Elitarny goblin");
		wrog.statystyki.punkty_zycia[0] = 35;
		wrog.statystyki.punkty_zycia[1] = 35;
		wrog.statystyki.atak_fizyczny = 20;
		wrog.statystyki.atak_magiczny = 11;
		wrog.statystyki.obrona_fizyczna = 21;
		wrog.statystyki.obrona_magiczna = 14;
		wrog.statystyki.szybkosc = 5;
		wrog.zloto = 40;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.umiejetnosc[1] = umiejetnosci(2);
		wrog.umiejetnosc[2] = umiejetnosci(11);
		wrog.umiejetnosc[3] = umiejetnosci(14);
		wrog.zywy = true;
		break;
	case(5) :
		wrog.nazwa = al_ustr_new("Ork");
		wrog.statystyki.punkty_zycia[0] = 30;
		wrog.statystyki.punkty_zycia[1] = 30;
		wrog.statystyki.atak_fizyczny = 30;
		wrog.statystyki.atak_magiczny = 5;
		wrog.statystyki.obrona_fizyczna = 30;
		wrog.statystyki.obrona_magiczna = 10;
		wrog.statystyki.szybkosc = 6;
		wrog.zloto = 60;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(7);
		wrog.umiejetnosc[1] = umiejetnosci(1);
		wrog.zywy = true;
		break;
	case(6) :
		wrog.nazwa = al_ustr_new("Ork wojownik");
		wrog.statystyki.punkty_zycia[0] = 50;
		wrog.statystyki.punkty_zycia[1] = 50;
		wrog.statystyki.atak_fizyczny = 40;
		wrog.statystyki.atak_magiczny = 5;
		wrog.statystyki.obrona_fizyczna = 50;
		wrog.statystyki.obrona_magiczna = 20;
		wrog.statystyki.szybkosc = 4;
		wrog.zloto = 70;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.umiejetnosc[1] = umiejetnosci(7);
		wrog.umiejetnosc[2] = umiejetnosci(8);
		wrog.umiejetnosc[3] = umiejetnosci(14);
		wrog.zywy = true;
		break;
	case(7) :
		wrog.nazwa = al_ustr_new("Ork szaman");
		wrog.statystyki.punkty_zycia[0] = 40;
		wrog.statystyki.punkty_zycia[1] = 40;
		wrog.statystyki.atak_fizyczny = 20;
		wrog.statystyki.atak_magiczny = 25;
		wrog.statystyki.obrona_fizyczna = 35;
		wrog.statystyki.obrona_magiczna = 35;
		wrog.statystyki.szybkosc = 3;
		wrog.zloto = 70;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(3);
		wrog.umiejetnosc[1] = umiejetnosci(16);
		wrog.umiejetnosc[2] = umiejetnosci(11);
		wrog.umiejetnosc[2] = umiejetnosci(12);
		wrog.zywy = true;
		break;
	case(8) :
		wrog.nazwa = al_ustr_new("Krol orkow");
		wrog.statystyki.punkty_zycia[0] = 80;
		wrog.statystyki.punkty_zycia[1] = 80;
		wrog.statystyki.atak_fizyczny = 65;
		wrog.statystyki.atak_magiczny = 30;
		wrog.statystyki.obrona_fizyczna = 60;
		wrog.statystyki.obrona_magiczna = 40;
		wrog.statystyki.szybkosc = 9;
		wrog.zloto = 100;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.umiejetnosc[1] = umiejetnosci(8);
		wrog.umiejetnosc[2] = umiejetnosci(9);
		wrog.umiejetnosc[3] = umiejetnosci(15);
		wrog.zywy = true;
		break;
	case(9) :
		wrog.nazwa = al_ustr_new("Elitarny ork");
		wrog.statystyki.punkty_zycia[0] = 70;
		wrog.statystyki.punkty_zycia[1] = 70;
		wrog.statystyki.atak_fizyczny = 60;
		wrog.statystyki.atak_magiczny = 25;
		wrog.statystyki.obrona_fizyczna = 60;
		wrog.statystyki.obrona_magiczna = 40;
		wrog.statystyki.szybkosc = 9;
		wrog.zloto = 90;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.umiejetnosc[1] = umiejetnosci(8);
		wrog.umiejetnosc[2] = umiejetnosci(9);
		wrog.umiejetnosc[3] = umiejetnosci(15);
		wrog.zywy = true;
		break;
	case(10) :
		wrog.nazwa = al_ustr_new("Szkielet");
		wrog.statystyki.punkty_zycia[0] = 80;
		wrog.statystyki.punkty_zycia[1] = 80;
		wrog.statystyki.atak_fizyczny = 65;
		wrog.statystyki.atak_magiczny = 15;
		wrog.statystyki.obrona_fizyczna = 50;
		wrog.statystyki.obrona_magiczna = 50;
		wrog.statystyki.szybkosc = 7;
		wrog.zloto = 100;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(13);
		wrog.zywy = true;
		break;
	case(11) :
		wrog.nazwa = al_ustr_new("Szkielet wojownik");
		wrog.statystyki.punkty_zycia[0] = 90;
		wrog.statystyki.punkty_zycia[1] = 90;
		wrog.statystyki.atak_fizyczny = 75;
		wrog.statystyki.atak_magiczny = 15;
		wrog.statystyki.obrona_fizyczna = 70;
		wrog.statystyki.obrona_magiczna = 40;
		wrog.statystyki.szybkosc = 6;
		wrog.zloto = 110;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(13);
		wrog.umiejetnosc[1] = umiejetnosci(8);
		wrog.umiejetnosc[2] = umiejetnosci(19);
		wrog.zywy = true;
		break;
	case(12) :
		wrog.nazwa = al_ustr_new("Szkielet mag");
		wrog.statystyki.punkty_zycia[0] = 60;
		wrog.statystyki.punkty_zycia[1] = 60;
		wrog.statystyki.atak_fizyczny = 15;
		wrog.statystyki.atak_magiczny = 95;
		wrog.statystyki.obrona_fizyczna = 30;
		wrog.statystyki.obrona_magiczna = 30;
		wrog.statystyki.szybkosc = 7;
		wrog.zloto = 120;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(16);
		wrog.umiejetnosc[1] = umiejetnosci(18);
		wrog.umiejetnosc[2] = umiejetnosci(4);
		wrog.zywy = true;
		break;
	case(13) :
		wrog.nazwa = al_ustr_new("Zombi");
		wrog.statystyki.punkty_zycia[0] = 110;
		wrog.statystyki.punkty_zycia[1] = 110;
		wrog.statystyki.atak_fizyczny = 65;
		wrog.statystyki.atak_magiczny = 15;
		wrog.statystyki.obrona_fizyczna = 80;
		wrog.statystyki.obrona_magiczna = 80;
		wrog.statystyki.szybkosc = 1;
		wrog.zloto = 120;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(10);
		wrog.umiejetnosc[1] = umiejetnosci(23);
		wrog.umiejetnosc[2] = umiejetnosci(17);
		wrog.zywy = true;
		break;
	case(14) :
		wrog.nazwa = al_ustr_new("Zombi");
		wrog.statystyki.punkty_zycia[0] = 100;
		wrog.statystyki.punkty_zycia[1] = 100;
		wrog.statystyki.atak_fizyczny = 15;
		wrog.statystyki.atak_magiczny = 125;
		wrog.statystyki.obrona_fizyczna = 60;
		wrog.statystyki.obrona_magiczna = 60;
		wrog.statystyki.szybkosc = 7;
		wrog.zloto = 200;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(18);
		wrog.umiejetnosc[1] = umiejetnosci(16);
		wrog.zywy = true;
		break;
	case(15) :
		wrog.nazwa = al_ustr_new("Krol-licz");
		wrog.statystyki.punkty_zycia[0] = 150;
		wrog.statystyki.punkty_zycia[1] = 150;
		wrog.statystyki.atak_fizyczny = 75;
		wrog.statystyki.atak_magiczny = 155;
		wrog.statystyki.obrona_fizyczna = 60;
		wrog.statystyki.obrona_magiczna = 150;
		wrog.statystyki.szybkosc = 6;
		wrog.zloto = 500;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(21);
		wrog.umiejetnosc[1] = umiejetnosci(18);
		wrog.umiejetnosc[2] = umiejetnosci(5);
		wrog.umiejetnosc[3] = umiejetnosci(16);
		wrog.zywy = true;
		break;
	case(16) :
		wrog.nazwa = al_ustr_new("Rycerz smierci");
		wrog.statystyki.punkty_zycia[0] = 150;
		wrog.statystyki.punkty_zycia[1] = 150;
		wrog.statystyki.atak_fizyczny = 105;
		wrog.statystyki.atak_magiczny = 65;
		wrog.statystyki.obrona_fizyczna = 150;
		wrog.statystyki.obrona_magiczna = 100;
		wrog.statystyki.szybkosc = 7;
		wrog.zloto = 400;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.umiejetnosc[1] = umiejetnosci(8);
		wrog.umiejetnosc[2] = umiejetnosci(14);
		wrog.zywy = true;
		break;
	case(17) :
		wrog.nazwa = al_ustr_new("Prastary licz");
		wrog.statystyki.punkty_zycia[0] = 130;
		wrog.statystyki.punkty_zycia[1] = 130;
		wrog.statystyki.atak_fizyczny = 50;
		wrog.statystyki.atak_magiczny = 125;
		wrog.statystyki.obrona_fizyczna = 70;
		wrog.statystyki.obrona_magiczna = 120;
		wrog.statystyki.szybkosc = 6;
		wrog.zloto = 400;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(21);
		wrog.umiejetnosc[1] = umiejetnosci(18);
		wrog.umiejetnosc[2] = umiejetnosci(5);
		wrog.umiejetnosc[3] = umiejetnosci(16);
		wrog.zywy = true;
		break;
	case(18) :
		wrog.nazwa = al_ustr_new("Wampir");
		wrog.statystyki.punkty_zycia[0] = 100;
		wrog.statystyki.punkty_zycia[1] = 100;
		wrog.statystyki.atak_fizyczny = 150;
		wrog.statystyki.atak_magiczny = 125;
		wrog.statystyki.obrona_fizyczna = 60;
		wrog.statystyki.obrona_magiczna = 60;
		wrog.statystyki.szybkosc = 8;
		wrog.zloto = 500;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(15);
		wrog.umiejetnosc[1] = umiejetnosci(11);
		wrog.umiejetnosc[2] = umiejetnosci(13);
		wrog.umiejetnosc[3] = umiejetnosci(17);
		wrog.zywy = true;
		break;
	case(19) :
		wrog.nazwa = al_ustr_new("Wladca nieumarlych");
		wrog.statystyki.punkty_zycia[0] = 170;
		wrog.statystyki.punkty_zycia[1] = 170;
		wrog.statystyki.atak_fizyczny = 150;
		wrog.statystyki.atak_magiczny = 125;
		wrog.statystyki.obrona_fizyczna = 100;
		wrog.statystyki.obrona_magiczna = 130;
		wrog.statystyki.szybkosc = 8;
		wrog.zloto = 600;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(15);
		wrog.umiejetnosc[1] = umiejetnosci(11);
		wrog.umiejetnosc[2] = umiejetnosci(5);
		wrog.umiejetnosc[3] = umiejetnosci(24);
		wrog.zywy = true;
		break;
	case(20) :
		wrog.nazwa = al_ustr_new("Troll");
		wrog.statystyki.punkty_zycia[0] = 150;
		wrog.statystyki.punkty_zycia[1] = 150;
		wrog.statystyki.atak_fizyczny = 120;
		wrog.statystyki.atak_magiczny = 0;
		wrog.statystyki.obrona_fizyczna = 100;
		wrog.statystyki.obrona_magiczna = 20;
		wrog.statystyki.szybkosc = 3;
		wrog.zloto = 150;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(1);
		wrog.zywy = true;
		break;
	case(21) :
		wrog.nazwa = al_ustr_new("Pomniejszy demon");
		wrog.statystyki.punkty_zycia[0] = 150;
		wrog.statystyki.punkty_zycia[1] = 150;
		wrog.statystyki.atak_fizyczny = 100;
		wrog.statystyki.atak_magiczny = 70;
		wrog.statystyki.obrona_fizyczna = 80;
		wrog.statystyki.obrona_magiczna = 80;
		wrog.statystyki.szybkosc = 6;
		wrog.zloto = 200;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(11);
		wrog.umiejetnosc[1] = umiejetnosci(13);
		wrog.umiejetnosc[2] = umiejetnosci(10);
		wrog.zywy = true;
		break;
	case(22) :
		wrog.nazwa = al_ustr_new("Demon");
		wrog.statystyki.punkty_zycia[0] = 170;
		wrog.statystyki.punkty_zycia[1] = 170;
		wrog.statystyki.atak_fizyczny = 120;
		wrog.statystyki.atak_magiczny = 120;
		wrog.statystyki.obrona_fizyczna = 100;
		wrog.statystyki.obrona_magiczna = 100;
		wrog.statystyki.szybkosc = 7;
		wrog.zloto = 250;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(11);
		wrog.umiejetnosc[1] = umiejetnosci(13);
		wrog.umiejetnosc[2] = umiejetnosci(10);
		wrog.umiejetnosc[3] = umiejetnosci(9);
		wrog.zywy = true;
		break;
	case(23) :
		wrog.nazwa = al_ustr_new("Ksiaze demonow");
		wrog.statystyki.punkty_zycia[0] = 200;
		wrog.statystyki.punkty_zycia[1] = 200;
		wrog.statystyki.atak_fizyczny = 150;
		wrog.statystyki.atak_magiczny = 150;
		wrog.statystyki.obrona_fizyczna = 130;
		wrog.statystyki.obrona_magiczna = 100;
		wrog.statystyki.szybkosc = 7;
		wrog.zloto = 500;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(9);
		wrog.umiejetnosc[1] = umiejetnosci(17);
		wrog.umiejetnosc[2] = umiejetnosci(18);
		wrog.umiejetnosc[3] = umiejetnosci(23);
		wrog.zywy = true;
		break;
	case(24) :
		wrog.nazwa = al_ustr_new("Wladaca demonow");
		wrog.statystyki.punkty_zycia[0] = 300;
		wrog.statystyki.punkty_zycia[1] = 300;
		wrog.statystyki.atak_fizyczny = 220;
		wrog.statystyki.atak_magiczny = 220;
		wrog.statystyki.obrona_fizyczna = 180;
		wrog.statystyki.obrona_magiczna = 180;
		wrog.statystyki.szybkosc = 9;
		wrog.zloto = 1000;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
		wrog.umiejetnosc[0] = umiejetnosci(9);
		wrog.umiejetnosc[1] = umiejetnosci(11);
		wrog.umiejetnosc[2] = umiejetnosci(5);
		wrog.umiejetnosc[3] = umiejetnosci(24);
		wrog.zywy = true;
		break;
	case(99) :
		wrog.nazwa = al_ustr_new("BRAK");
		wrog.statystyki.punkty_zycia[0] = NULL;
		wrog.statystyki.punkty_zycia[1] = NULL;
		wrog.statystyki.atak_fizyczny = NULL;
		wrog.statystyki.atak_magiczny = NULL;
		wrog.statystyki.obrona_fizyczna = NULL;
		wrog.statystyki.obrona_magiczna = NULL;
		wrog.statystyki.szybkosc = NULL;
		wrog.zloto = NULL;
		wrog.zywy = false;
		for (int i = 0; i < 4; i++){
			wrog.umiejetnosc[i] = umiejetnosci(0);
		}
	}
	return wrog;
}



void pokaz_statystyki_bohatera(ALLEGRO_FONT *czcionka, bohater postac, int x, int y, int odleglosc){
	int odstep = 35;
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

void poziomm(bohater sojusznik[4]){
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
	poziomm(sojusznik);
	sojusznik[0].statystyki.szybkosc = 4;
	sojusznik[1].statystyki.szybkosc = 8;
	sojusznik[2].statystyki.szybkosc = 5;
	sojusznik[3].statystyki.szybkosc = 3;

	for (int i = 0; i < 4; i++){
		sojusznik[i].przedmiot = przedmioty(0);
		sojusznik[i].zywy = true;
		for (int ii = 0; ii < 4; ii++){
			sojusznik[i].umiejetnosc[ii] = umiejetnosci(0);
		}
	}
	sojusznik[0].umiejetnosc[0] = umiejetnosci(1);
	sojusznik[1].umiejetnosc[0] = umiejetnosci(2);
	sojusznik[2].umiejetnosc[0] = umiejetnosci(3);
	sojusznik[3].umiejetnosc[0] = umiejetnosci(4);
}

void poziomy(int poziom, int podpoziom, przeciwnik wrog[8]){
	int i;
	for (i = 0; i < 8; i++){
		wrog[i] = wrogowie(99);
	}
	switch (poziom){
	case(1) :
		switch (podpoziom){
		case(1) :
			wrog[0] = wrogowie(0);
			wrog[1] = wrogowie(0);
			wrog[2] = wrogowie(0);
			wrog[3] = wrogowie(0);
			break;
		case(2) :
			wrog[0] = wrogowie(0);
			wrog[1] = wrogowie(0);
			wrog[2] = wrogowie(1);
			wrog[3] = wrogowie(0);
			wrog[4] = wrogowie(0);
			break;
		case(3) :
			wrog[0] = wrogowie(0);
			wrog[1] = wrogowie(1);
			wrog[2] = wrogowie(2);
			wrog[3] = wrogowie(1);
			wrog[4] = wrogowie(0);
			break;
		case(4) :
			wrog[0] = wrogowie(2);
			wrog[1] = wrogowie(1);
			wrog[2] = wrogowie(2);
			wrog[3] = wrogowie(1);
			wrog[4] = wrogowie(1);
			wrog[5] = wrogowie(0);
			wrog[6] = wrogowie(0);
			break;
		case(5) :
			wrog[0] = wrogowie(4);
			wrog[1] = wrogowie(2);
			wrog[2] = wrogowie(1);
			break;
		case(6) :
			wrog[0] = wrogowie(3);
			wrog[1] = wrogowie(4);
			wrog[2] = wrogowie(4);
			wrog[3] = wrogowie(2);
			wrog[4] = wrogowie(2);
			wrog[5] = wrogowie(1);
			wrog[6] = wrogowie(1);
			wrog[7] = wrogowie(1);
			break;
		case(7) :
			wrog[0] = wrogowie(4);
			wrog[1] = wrogowie(4);
			wrog[2] = wrogowie(4);
			wrog[3] = wrogowie(4);
			break;
		case(8) :
			wrog[0] = wrogowie(5);
			wrog[1] = wrogowie(5);
			wrog[2] = wrogowie(5);
			wrog[3] = wrogowie(5);
			wrog[4] = wrogowie(5);
			wrog[5] = wrogowie(5);
			wrog[6] = wrogowie(5);
			wrog[7] = wrogowie(5);
			break;
		case(9) :
			wrog[0] = wrogowie(6);
			wrog[1] = wrogowie(6);
			wrog[2] = wrogowie(7);
			wrog[3] = wrogowie(5);
			wrog[4] = wrogowie(5);
			wrog[5] = wrogowie(5);
			wrog[6] = wrogowie(5);
			wrog[7] = wrogowie(5);
			break;
		case(10) :
			wrog[0] = wrogowie(6);
			wrog[1] = wrogowie(6);
			wrog[2] = wrogowie(7);
			wrog[3] = wrogowie(7);
			wrog[4] = wrogowie(6);
			wrog[5] = wrogowie(6);
			wrog[6] = wrogowie(8);
			wrog[7] = wrogowie(9);
			break;
	}
			break;
	case(2) :
		switch (podpoziom){
		case(1) :
			wrog[0] = wrogowie(10);
			wrog[1] = wrogowie(10);
			wrog[2] = wrogowie(10);
			wrog[3] = wrogowie(10);
			wrog[4] = wrogowie(10);
			wrog[5] = wrogowie(10);
			wrog[6] = wrogowie(10);
			wrog[7] = wrogowie(10);
			break;
		case(2) :
			wrog[0] = wrogowie(11);
			wrog[1] = wrogowie(11);
			wrog[2] = wrogowie(12);
			wrog[3] = wrogowie(10);
			wrog[4] = wrogowie(10);
			wrog[5] = wrogowie(10);
			wrog[6] = wrogowie(10);
			wrog[7] = wrogowie(10);
			break;
		case(3) :
			wrog[0] = wrogowie(11);
			wrog[1] = wrogowie(11);
			wrog[2] = wrogowie(12);
			wrog[3] = wrogowie(11);
			wrog[4] = wrogowie(11);
			wrog[5] = wrogowie(12);
			wrog[6] = wrogowie(11);
			wrog[7] = wrogowie(11);
			break;
		case(4) :
			wrog[0] = wrogowie(13);
			wrog[1] = wrogowie(11);
			wrog[2] = wrogowie(12);
			wrog[3] = wrogowie(13);
			wrog[4] = wrogowie(11);
			wrog[5] = wrogowie(12);
			wrog[6] = wrogowie(13);
			wrog[7] = wrogowie(11);
			break;
		case(5) :
			wrog[0] = wrogowie(13);
			wrog[1] = wrogowie(14);
			wrog[2] = wrogowie(12);
			wrog[3] = wrogowie(13);
			wrog[4] = wrogowie(14);
			wrog[5] = wrogowie(12);
			wrog[6] = wrogowie(13);
			wrog[7] = wrogowie(14);
			break;
		case(6) :
			wrog[0] = wrogowie(15);
			wrog[1] = wrogowie(13);
			wrog[2] = wrogowie(13);
			wrog[3] = wrogowie(13);
			wrog[4] = wrogowie(14);
			wrog[5] = wrogowie(13);
			wrog[6] = wrogowie(13);
			wrog[7] = wrogowie(14);
			break;
		case(7) :
			wrog[0] = wrogowie(14);
			wrog[1] = wrogowie(14);
			wrog[2] = wrogowie(16);
			wrog[3] = wrogowie(16);
			wrog[4] = wrogowie(16);
			wrog[5] = wrogowie(16);
			wrog[6] = wrogowie(14);
			wrog[7] = wrogowie(14);
			break;
		case(8) :
			wrog[0] = wrogowie(17);
			wrog[1] = wrogowie(17);
			wrog[2] = wrogowie(16);
			wrog[3] = wrogowie(16);
			wrog[4] = wrogowie(16);
			wrog[5] = wrogowie(16);
			wrog[6] = wrogowie(17);
			wrog[7] = wrogowie(17);
			break;
		case(9) :
			wrog[0] = wrogowie(18);
			wrog[1] = wrogowie(18);
			wrog[2] = wrogowie(16);
			wrog[3] = wrogowie(16);
			wrog[4] = wrogowie(16);
			wrog[5] = wrogowie(16);
			wrog[6] = wrogowie(17);
			wrog[7] = wrogowie(17);
			break;
		case(10) :
			wrog[0] = wrogowie(19);
			wrog[1] = wrogowie(18);
			wrog[2] = wrogowie(18);
			wrog[3] = wrogowie(18);
			wrog[4] = wrogowie(16);
			wrog[5] = wrogowie(16);
			wrog[6] = wrogowie(17);
			wrog[7] = wrogowie(17);
			break;
	}
			break;
	case(3) :
		switch (podpoziom){
		case(1) :
			wrog[0] = wrogowie(20);
			wrog[1] = wrogowie(20);
			wrog[2] = wrogowie(20);
			break;
		case(2) :
			wrog[0] = wrogowie(20);
			wrog[1] = wrogowie(20);
			wrog[2] = wrogowie(20);
			wrog[3] = wrogowie(20);
			wrog[4] = wrogowie(20);
			wrog[5] = wrogowie(20);
			break;
		case(3) :
			wrog[0] = wrogowie(20);
			wrog[1] = wrogowie(20);
			wrog[2] = wrogowie(20);
			wrog[3] = wrogowie(21);
			wrog[4] = wrogowie(20);
			wrog[5] = wrogowie(20);
			break;
		case(4) :
			wrog[0] = wrogowie(21);
			wrog[1] = wrogowie(21);
			wrog[2] = wrogowie(21);
			break;
		case(5) :
			wrog[0] = wrogowie(21);
			wrog[1] = wrogowie(21);
			wrog[2] = wrogowie(21);
			wrog[3] = wrogowie(21);
			wrog[4] = wrogowie(22);
			wrog[5] = wrogowie(22);
			break;
		case(6) :
			wrog[0] = wrogowie(21);
			wrog[1] = wrogowie(21);
			wrog[2] = wrogowie(21);
			wrog[3] = wrogowie(21);
			wrog[4] = wrogowie(22);
			wrog[5] = wrogowie(22);
			wrog[6] = wrogowie(22);
			wrog[7] = wrogowie(22);
			break;
		case(7) :
			wrog[0] = wrogowie(22);
			wrog[1] = wrogowie(22);
			wrog[2] = wrogowie(22);
			wrog[3] = wrogowie(22);
			wrog[4] = wrogowie(22);
			wrog[5] = wrogowie(22);
			wrog[6] = wrogowie(22);
			wrog[7] = wrogowie(22);
			break;
		case(8) :
			wrog[0] = wrogowie(23);
			wrog[1] = wrogowie(22);
			wrog[2] = wrogowie(22);
			wrog[3] = wrogowie(22);
			wrog[4] = wrogowie(22);
			wrog[5] = wrogowie(22);
			wrog[6] = wrogowie(22);
			wrog[7] = wrogowie(22);
			break;
		case(9) :
			wrog[0] = wrogowie(23);
			wrog[1] = wrogowie(23);
			wrog[2] = wrogowie(23);
			wrog[3] = wrogowie(23);
			wrog[4] = wrogowie(22);
			wrog[5] = wrogowie(22);
			wrog[6] = wrogowie(22);
			wrog[7] = wrogowie(22);
			break;
		case(10) :
			wrog[0] = wrogowie(23);
			wrog[1] = wrogowie(23);
			wrog[2] = wrogowie(23);
			wrog[3] = wrogowie(23);
			wrog[4] = wrogowie(23);
			wrog[5] = wrogowie(23);
			wrog[6] = wrogowie(23);
			wrog[7] = wrogowie(24);
			break;
	}
			break;
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
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y, ALLEGRO_ALIGN_CENTRE, "Nowa gra");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep, ALLEGRO_ALIGN_CENTRE, "Wczytaj gre");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 2, ALLEGRO_ALIGN_CENTRE, "Wyjdz z gry");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x - 80, y + wybor_menu * odstep, 0, ">");
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

statystyki uzycie_umiejetnosci_na_cele(umiejetnosc uzyta, statystyki rzucajacego, statystyki celu){
	int fizyczne = uzyta.fizyczne.obrazenia_bazowe + uzyta.fizyczne.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.fizyczne.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.fizyczne.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.fizyczne.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.fizyczne.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.fizyczne.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.fizyczne.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.fizyczne.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.fizyczne.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.fizyczne.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.fizyczne.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.fizyczne.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna - celu.obrona_fizyczna;
	int magiczne = uzyta.magiczne.obrazenia_bazowe + uzyta.magiczne.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.magiczne.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.magiczne.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.magiczne.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.magiczne.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.magiczne.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.magiczne.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.magiczne.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.magiczne.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.magiczne.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.magiczne.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.magiczne.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna - celu.obrona_magiczna;
	int nieuchronne = uzyta.nieuchronne.obrazenia_bazowe + uzyta.nieuchronne.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.nieuchronne.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.nieuchronne.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.nieuchronne.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.nieuchronne.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.nieuchronne.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.nieuchronne.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.nieuchronne.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.nieuchronne.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.nieuchronne.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.nieuchronne.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.nieuchronne.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int leczenie_celu = uzyta.leczenie_celu.obrazenia_bazowe + uzyta.leczenie_celu.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.leczenie_celu.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.leczenie_celu.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.leczenie_celu.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.leczenie_celu.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.leczenie_celu.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.leczenie_celu.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.leczenie_celu.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.leczenie_celu.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.leczenie_celu.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.leczenie_celu.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.leczenie_celu.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_ataku_fizycznego_celu = uzyta.zmiana_ataku_fizycznego_celu.obrazenia_bazowe + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_ataku_fizycznego_celu.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_ataku_magicznego_celu = uzyta.zmiana_ataku_magicznego_celu.obrazenia_bazowe + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_ataku_magicznego_celu.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_obrony_fizycznej_celu = uzyta.zmiana_obrony_fizycznej_celu.obrazenia_bazowe + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_obrony_fizycznej_celu.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_obrony_magicznej_celu = uzyta.zmiana_obrony_magicznej_celu.obrazenia_bazowe + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_obrony_magicznej_celu.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	if (fizyczne < 0){
		fizyczne = 0;
	}
	if (magiczne < 0){
		magiczne = 0;
	}
	celu.punkty_zycia[0] -= fizyczne + magiczne + nieuchronne;
	celu.punkty_zycia[0] += leczenie_celu;
	celu.atak_fizyczny += zmiana_ataku_fizycznego_celu;
	celu.atak_magiczny += zmiana_ataku_magicznego_celu;
	celu.obrona_fizyczna += zmiana_obrony_fizycznej_celu;
	celu.obrona_magiczna += zmiana_obrony_magicznej_celu;
	if (celu.punkty_zycia[0] > celu.punkty_zycia[1]){
		celu.punkty_zycia[0] = celu.punkty_zycia[1];
	}
	return celu;
}

statystyki uzycie_umiejetnosci_na_siebie(umiejetnosc uzyta, statystyki rzucajacego, statystyki celu){
	int leczenie_rzucajacego = uzyta.leczenie_rzucajacego.obrazenia_bazowe + uzyta.leczenie_rzucajacego.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.leczenie_rzucajacego.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.leczenie_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.leczenie_rzucajacego.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.leczenie_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.leczenie_rzucajacego.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.leczenie_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.leczenie_rzucajacego.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.leczenie_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.leczenie_rzucajacego.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.leczenie_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.leczenie_rzucajacego.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_ataku_fizycznego_rzucajacego = uzyta.zmiana_ataku_fizycznego_rzucajacego.obrazenia_bazowe + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_ataku_fizycznego_rzucajacego.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_ataku_magicznego_rzucajacego = uzyta.zmiana_ataku_magicznego_rzucajacego.obrazenia_bazowe + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_ataku_magicznego_rzucajacego.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_obrony_fizycznej_rzucajacego = uzyta.zmiana_obrony_fizycznej_rzucajacego.obrazenia_bazowe + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_obrony_fizycznej_rzucajacego.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	int zmiana_obrony_magicznej_rzucajacego = uzyta.zmiana_obrony_magicznej_rzucajacego.obrazenia_bazowe + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_maks_pz_rzucajacego*rzucajacego.punkty_zycia[1] + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_maks_pz_celu*celu.punkty_zycia[1] + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obecnych_pz_rzucajacego*rzucajacego.punkty_zycia[0] + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obecnych_pz_celu*celu.punkty_zycia[0] + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_fizycznego_rzucajacego*rzucajacego.atak_fizyczny + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_fizycznego_celu*celu.atak_fizyczny + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_magicznego_rzucajacego*rzucajacego.atak_magiczny + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_ataku_magicznego_celu*celu.atak_magiczny + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_fizycznej_rzucajacego*rzucajacego.obrona_fizyczna + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_fizycznej_celu*celu.obrona_fizyczna + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_magicznej_rzucajacego*rzucajacego.obrona_magiczna + uzyta.zmiana_obrony_magicznej_rzucajacego.przelicznik_z_obrony_magicznej_celu*celu.obrona_magiczna;
	rzucajacego.punkty_zycia[0] += leczenie_rzucajacego;
	rzucajacego.atak_fizyczny += zmiana_ataku_fizycznego_rzucajacego;
	rzucajacego.atak_magiczny += zmiana_ataku_magicznego_rzucajacego;
	rzucajacego.obrona_fizyczna += zmiana_obrony_fizycznej_rzucajacego;
	rzucajacego.obrona_magiczna += zmiana_obrony_magicznej_rzucajacego;
	if (rzucajacego.punkty_zycia[0] > rzucajacego.punkty_zycia[1]){
		rzucajacego.punkty_zycia[0] = rzucajacego.punkty_zycia[1];
	}
	return rzucajacego;
}

void wyswietlanie_podczas_walki(ALLEGRO_FONT* zywy, ALLEGRO_FONT* martwy, bohater sojusznik[4], przeciwnik *wrog, int ilosc_wrogow){
	int odstep = 35;
	int x = 40;
	int y = 15;
	int i;
	for (i = 0; i < 4; i++){
		if (sojusznik[i].zywy){
			al_draw_ustr(zywy, al_map_rgb(255, 205, 20), x, y + odstep * 2*i, 0, sojusznik[i].klasa);
			al_draw_textf(zywy, al_map_rgb(255, 205, 20), x, y + odstep + odstep * 2 * i, 0, "Punkty zycia: %i/%i", sojusznik[i].statystyki.punkty_zycia[0], sojusznik[i].statystyki.punkty_zycia[1]);
		}
		else{
			al_draw_ustr(martwy, al_map_rgb(40, 80, 80), x, y + odstep * 2*i, 0, sojusznik[i].klasa);
			al_draw_textf(martwy, al_map_rgb(40, 80, 80), x, y + odstep + odstep * 2 * i, 0, "Punkty zycia: %i/%i", sojusznik[i].statystyki.punkty_zycia[0], sojusznik[i].statystyki.punkty_zycia[1]);
		}
	}
	for (i = 0; i < ilosc_wrogow; i++){
		if (wrog[i].zywy){
			al_draw_ustr(zywy, al_map_rgb(255, 205, 20), 800 - x, y + odstep * 2* i, ALLEGRO_ALIGN_RIGHT, wrog[i].nazwa);
			al_draw_textf(zywy, al_map_rgb(255, 205, 20), 800 - x, y + odstep + odstep * 2 * i, ALLEGRO_ALIGN_RIGHT, "Punkty zycia: %i/%i", wrog[i].statystyki.punkty_zycia[0], wrog[i].statystyki.punkty_zycia[1]);
		}
		else{
			al_draw_ustr(martwy, al_map_rgb(40, 80, 80), 800 - x, y + odstep * 2 * i, ALLEGRO_ALIGN_RIGHT, wrog[i].nazwa);
			al_draw_textf(martwy, al_map_rgb(40, 80, 80), 800 - x, y + odstep + odstep * 2 * i, ALLEGRO_ALIGN_RIGHT, "Punkty zycia: %i/%i", wrog[i].statystyki.punkty_zycia[0], wrog[i].statystyki.punkty_zycia[1]);
		}
	}
}

void wyswietlanie_podczas_walki2(ALLEGRO_FONT* czcionka, bohater sojusznik, int wybor){
	int odstep = 35;
	int x = 40;
	int y = 295;
	al_draw_ustr(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 0, 0, sojusznik.klasa);
	al_draw_textf(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 1, 0, "Zwykly atak");
	al_draw_textf(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 2, 0, "Umiejetnosc");
	al_draw_textf(czcionka, al_map_rgb(204, 0, 0), x-20, y + odstep * (wybor+1), 0, ">");
}

void wyswietlanie_podczas_walki3(ALLEGRO_FONT* czcionka, bohater sojusznik, int wybor){
	int odstep = 35;
	int x = 40;
	int y = 295;
	al_draw_ustr(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 0, 0, sojusznik.klasa);
	al_draw_ustr(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 1, 0, sojusznik.umiejetnosc[0].nazwa_umiejetnosci);
	al_draw_ustr(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 2, 0, sojusznik.umiejetnosc[1].nazwa_umiejetnosci);
	al_draw_ustr(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 3, 0, sojusznik.umiejetnosc[2].nazwa_umiejetnosci);
	al_draw_ustr(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 4, 0, sojusznik.umiejetnosc[3].nazwa_umiejetnosci);
	al_draw_textf(czcionka, al_map_rgb(204, 0, 0), x, y + odstep * 5, 0, "POWROT");
	al_draw_textf(czcionka, al_map_rgb(204, 0, 0), x - 20, y + odstep * (wybor + 1), 0, ">");
}

void Po_wygranej(ALLEGRO_FONT *czcionka, int x, int y, int wybor_po_wygranej){
	int odstep = 40;
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y, 0, "Nastepna walka");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "Uzyj przedmiotu");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, "Ucieczka");
	al_draw_textf(czcionka, al_map_rgb(255, 205, 20), x - 20, y + wybor_po_wygranej * odstep, 0, ">");
}

void zerowanie_statystyk(bohater sojusznik[4]){
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