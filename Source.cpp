#include "Gra.h"

int main(void){
	int FPS = 60;
	int szerokoœæ = 800;
	int wysokosc = 600;
	bool redraw = true;
	int i, ii, menu_x = 100, menu_y = 100;
	bool koniec = false, powrot_do_menu_glownego = false, wyjscie_z_miasta = false, wyjscie_z_swiatyni = false, wyjscie_z_opcji = false;
	int wybor_menu = 0, wybor_poczatek_gry = 0, wybor_miasto = 0, wybor_opcje = 0;

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
						if (wybor_opcje >= 0 && wybor_opcje <= 3){
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
							case(0) :																				//Wojownik
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