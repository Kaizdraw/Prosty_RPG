#include <allegro5\allegro.h>
#include <allegro5\allegro_native_dialog.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <allegro5\allegro_primitives.h>

struct umiejetnosc
{
	ALLEGRO_USTR *  nazwa_umiejetnosci;
	ALLEGRO_USTR *  opis_umiejetnosci;
	int typ_umiejetnosci;
	int ilosc_celow;
	int obrazenia_bazowe;
	double przelicznik;
	int ilosc_uzyc[2];
};

struct przedmiot{
	ALLEGRO_USTR *  nazwa_przedmiotu;
	ALLEGRO_USTR *  opis_przedmiotu;
	int typ_przedmiotu;
	int moc_przediomtu;
};

struct bohater
{
	ALLEGRO_USTR *  klasa;
	int poziom;
	int punkty_zycia[2];
	int atak_fizyczny;
	int atak_magiczny;
	int obrona_fizyczna;
	int obrona_magiczna;
	int szybkosc;
	przedmiot przedmiot;
	umiejetnosc umiejetnosc[4];
};

przedmiot przedmioty(int numer_przedmioru){																	//spis przedmiotow

	przedmiot brak_przedmiotu;
	brak_przedmiotu.nazwa_przedmiotu = al_ustr_new("BRAK");
	brak_przedmiotu.opis_przedmiotu = al_ustr_new("BRAK");
	brak_przedmiotu.typ_przedmiotu = NULL;
	brak_przedmiotu.moc_przediomtu = NULL;

	switch (numer_przedmioru){
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
	brak_umiejetnosci.obrazenia_bazowe = NULL;
	brak_umiejetnosci.przelicznik = NULL;
	brak_umiejetnosci.ilosc_uzyc[0] = NULL;
	brak_umiejetnosci.ilosc_uzyc[1] = NULL;

	switch (numer_umiejetnosci){
	case(0) :
		return brak_umiejetnosci;
		break;
	}
}

void pokaz_statystyki_bohatera(ALLEGRO_FONT *czciaka, bohater postac, int x, int y){
	int odstep = 35;
	int odleglosc = 300;
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y, 0, "Klasa:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "Poziom:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, "Punkty zycia:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 3, 0, "Atak fizyczny:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 4, 0, "Atak magiczny:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 5, 0, "Obrona fizyczna:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 6, 0, "Obrona magiczna:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 7, 0, "Szybkosc:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 8, 0, "Przedmiot:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 9, 0, "Umiejetnosc:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 10, 0, "Umiejetnosc:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 11, 0, "Umiejetnosc:");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 12, 0, "Umiejetnosc:");
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y, ALLEGRO_ALIGN_RIGHT, postac.klasa);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep, ALLEGRO_ALIGN_RIGHT, "%i", postac.poziom);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 2, ALLEGRO_ALIGN_RIGHT, "%i/%i", postac.punkty_zycia[0],postac.punkty_zycia[1]);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 3, ALLEGRO_ALIGN_RIGHT, "%i", postac.atak_fizyczny);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 4, ALLEGRO_ALIGN_RIGHT, "%i", postac.atak_magiczny);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 5, ALLEGRO_ALIGN_RIGHT, "%i", postac.obrona_fizyczna);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 6, ALLEGRO_ALIGN_RIGHT, "%i", postac.obrona_magiczna);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 7, ALLEGRO_ALIGN_RIGHT, "%i", postac.szybkosc);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 8, ALLEGRO_ALIGN_RIGHT, postac.przedmiot.nazwa_przedmiotu);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 9, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[0].nazwa_umiejetnosci);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 10, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[1].nazwa_umiejetnosci);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 11, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[2].nazwa_umiejetnosci);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x + odleglosc, y + odstep * 12, ALLEGRO_ALIGN_RIGHT, postac.umiejetnosc[3].nazwa_umiejetnosci);
}

void poziom(bohater sojusznik[4]){
	for (int i = 0; i < 2; i++){
		sojusznik[0].punkty_zycia[i] = 10 + 10 * sojusznik[0].poziom;
		sojusznik[1].punkty_zycia[i] = 10 + 7 * sojusznik[1].poziom;
		sojusznik[2].punkty_zycia[i] = 10 + 5 * sojusznik[2].poziom;
		sojusznik[3].punkty_zycia[i] = 10 + 4 * sojusznik[3].poziom;
	}
	sojusznik[0].atak_fizyczny = 4 * sojusznik[0].poziom;
	sojusznik[1].atak_fizyczny = 5 * sojusznik[1].poziom;
	sojusznik[2].atak_fizyczny = 1 * sojusznik[2].poziom;
	sojusznik[3].atak_fizyczny = 3 * sojusznik[3].poziom;
	sojusznik[0].atak_magiczny = 1 * sojusznik[0].poziom;
	sojusznik[1].atak_magiczny = 3 * sojusznik[1].poziom;
	sojusznik[2].atak_magiczny = 5 * sojusznik[2].poziom;
	sojusznik[3].atak_magiczny = 4 * sojusznik[3].poziom;
	sojusznik[0].obrona_fizyczna = 5 * sojusznik[0].poziom;
	sojusznik[1].obrona_fizyczna = 3 * sojusznik[1].poziom;
	sojusznik[2].obrona_fizyczna = 1 * sojusznik[2].poziom;
	sojusznik[3].obrona_fizyczna = 4 * sojusznik[3].poziom;
	sojusznik[0].obrona_magiczna = 2 * sojusznik[0].poziom;
	sojusznik[1].obrona_magiczna = 3 * sojusznik[1].poziom;
	sojusznik[2].obrona_magiczna = 5 * sojusznik[2].poziom;
	sojusznik[3].obrona_magiczna = 4 * sojusznik[3].poziom;
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
	sojusznik[0].szybkosc = 4;
	sojusznik[1].szybkosc = 8;
	sojusznik[2].szybkosc = 5;
	sojusznik[3].szybkosc = 3;

	for (int i = 0; i < 4; i++){
		sojusznik[i].przedmiot = przedmioty(0);
		for (int ii = 0; ii < 4; ii++){
			sojusznik[i].umiejetnosc[ii] = umiejetnosci(0);
		}
	}
}

void miasto(ALLEGRO_FONT *czciaka, int x, int y,int wybor_miasto){
	int odstep = 40;
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y, 0, "Sklep");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "Swiatynia");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep*2, 0, "Wyjdz z miasta");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x - 20, y + wybor_miasto * odstep, 0, ">");
}

void poczatek_gry(ALLEGRO_FONT *czciaka, int x, int y, int wybor_poczatek_gry){
	int odstep = 40;
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y, 0, "Miasto");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "1. Poziom");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep*2, 0, "Opcje");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep*3, 0, "Powrot do menu glownego");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x - 20, y + wybor_poczatek_gry * odstep, 0, ">");
}

void menu_glowne(ALLEGRO_FONT *czciaka, int x, int y, int wybor_menu){
	int odstep = 40;
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y, 0, "Nowa gra");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep, 0, "Wczytaj gre");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep*2, 0, "Wyjdz z gry");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x - 20, y + wybor_menu * odstep, 0, ">");
}

void opcje(ALLEGRO_FONT *czciaka, int x, int y, int wybor_opcje, bohater sojusznik[4]){
	int odstep = 40;
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x, y, 0, sojusznik[0].klasa);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x, y + odstep, 0, sojusznik[1].klasa);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 2, 0, sojusznik[2].klasa);
	al_draw_ustr(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 3, 0, sojusznik[3].klasa);
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 4, 0, "Zapisz gre");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x, y + odstep * 5, 0, "Powrot do gry");
	al_draw_textf(czciaka, al_map_rgb(255, 205, 20), x - 20, y + wybor_opcje * odstep, 0, ">");
}

int main(void){
	int FPS = 60;
	int szerokoœæ = 800;
	int wysokosc = 600;
	bool redraw = true;
	int i, ii, menu_x=100, menu_y=100;
	bool koniec = false, powrot_do_menu_glownego = false, wyjscie_z_miasta=false,wyjscie_z_swiatyni=false,wyjscie_z_opcji=false;
	int wybor_menu = 0, wybor_poczatek_gry = 0, wybor_miasto = 0, wybor_opcje=0;

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;

	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL,
			"failed to initialize allegro!", NULL, NULL);
		return -1;
	}

	display = al_create_display(szerokoœæ, wysokosc);

	if (!display)
	{
		al_show_native_message_box(NULL, NULL, NULL,
			"failed to initialize display!", NULL, NULL);
		return -1;
	}

	timer = al_create_timer(1.0 / FPS);
	al_init_primitives_addon();
	al_install_keyboard();

	event_queue = al_create_event_queue();
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();
	al_start_timer(timer);
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_FONT *font24 = al_load_font("BuxtonSketch.TTF", 30, 0);
	ALLEGRO_FONT *czciaka_do_statystyk = al_load_font("BuxtonSketch.TTF", 15, 0);

	bohater sojusznik[4];
	instalacja_bohaterow(sojusznik);

	while (!koniec)
	{

		al_flip_display();																							//Menu g³ówne
		al_clear_to_color(al_map_rgb(0, 0, 0));
		menu_glowne(font24, menu_x, menu_y, wybor_menu);
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);
		if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
			switch (ev.keyboard.keycode){
			case(ALLEGRO_KEY_UP) :
				wybor_menu -= 1;
				break;
			case(ALLEGRO_KEY_DOWN) :
				wybor_menu += 1;
				break;

			}
		}
		wybor_menu = (wybor_menu + 3) % 3;
		if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
			switch (wybor_menu){
			case(0) :																								//Pocz¹tek gry
				while (!powrot_do_menu_glownego){
				ALLEGRO_EVENT ev;
				al_wait_for_event(event_queue, &ev);
				al_clear_to_color(al_map_rgb(0, 0, 0));
				poczatek_gry(font24, menu_x, menu_y, wybor_poczatek_gry);
				al_flip_display();

				if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
					switch (ev.keyboard.keycode){
					case(ALLEGRO_KEY_UP) :
						wybor_poczatek_gry -= 1;
						break;
					case(ALLEGRO_KEY_DOWN) :
						wybor_poczatek_gry += 1;
						break;
					}
				}
				wybor_poczatek_gry = (wybor_poczatek_gry + 4) % 4;
				if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
					switch (wybor_poczatek_gry){
					case(0) :																							//Miasto
						while (!wyjscie_z_miasta){
						ALLEGRO_EVENT ev;
						al_wait_for_event(event_queue, &ev);
						al_clear_to_color(al_map_rgb(0, 0, 0));
						miasto(font24, menu_x, menu_y, wybor_miasto);
						al_flip_display();

						if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
							switch (ev.keyboard.keycode){
							case(ALLEGRO_KEY_UP) :
								wybor_miasto -= 1;
								break;
							case(ALLEGRO_KEY_DOWN) :
								wybor_miasto += 1;
								break;
							}
						}
						wybor_miasto = (wybor_miasto + 3) % 3;
						if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
								switch (wybor_miasto){
								case(0) :																				//Sklep
									break;
								case(1) :																				//Swiatynia
									while (!wyjscie_z_swiatyni){
										ALLEGRO_EVENT ev;
										al_wait_for_event(event_queue, &ev);
										al_clear_to_color(al_map_rgb(0, 0, 0));
										al_flip_display();
										if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
											wyjscie_z_swiatyni = true;
										}
									}
									wyjscie_z_swiatyni = false;
									break;
								case(2) :																				//Wyjscie z miasta
									wyjscie_z_miasta = true;
									break;
								}
							}
						}
						wyjscie_z_miasta = false;
						break;
					case(1) :																							//1.Poziom
						break;
					case(2) :																							//Opcje	
						while (!wyjscie_z_opcji){
							ALLEGRO_EVENT ev;
							al_wait_for_event(event_queue, &ev);
							al_clear_to_color(al_map_rgb(0, 0, 0));
							opcje(font24, 40, 30, wybor_opcje, sojusznik);
							if (wybor_opcje >= 0 && wybor_opcje<=3){
								pokaz_statystyki_bohatera(font24, sojusznik[wybor_opcje], 440, 30);
							}
							al_flip_display();
							if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
								switch (ev.keyboard.keycode){
								case(ALLEGRO_KEY_UP) :
									wybor_opcje -= 1;
									break;
								case(ALLEGRO_KEY_DOWN) :
									wybor_opcje += 1;
									break;
								}
							}
							wybor_opcje = (wybor_opcje + 6) % 6;
							if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
								switch (wybor_opcje)
								{
								case(0):																				//Wojownik
									break;
								case(1) :																				//Lotrzyk
									break;
								case(2) :																				//Mag
									break;
								case(3) :																				//Kaplan
									break;
								case(4) :																				//Zapisz gre
									break;
								case(5) :																				//Powrot do gry
									wyjscie_z_opcji = true;
									break;
								}
							}
						}
						wyjscie_z_opcji = false;
						break;
					case(3) :																							//Powrot do menu glownego
						powrot_do_menu_glownego = true;
						break;
					}
				}
				}
				powrot_do_menu_glownego = false;
				break;
			case(1) :																									//Wczytywanie
				break;
			case(2) :																									//Wyjscie z gry
				koniec = true;
				break;
			}
		}
			
		
	}
	al_destroy_timer(timer);
	al_destroy_event_queue(event_queue);
	al_destroy_display(display);

	return 0;
}