#include "Gra.h"
#include <cstdlib>
#include <ctime>

int main(void){
	int FPS = 60;
	int szerokoœæ = 800;
	int wysokosc = 600;
	bool redraw = true;
	int poziom = 1, podpoziom = 1, ilosc_wrogow, ruch, obrazenia = 0, zloto = 0, ilosc_umiejetnosci = 0,licznik=0;
	int i, ii,iii, menu_x = 100, menu_y = 100;
	bool koniec = false, powrot_do_menu_glownego = false, wyjscie_z_miasta = false, wyjscie_z_swiatyni = false, wyjscie_z_opcji = false,walka=false,walka2=false,walka3=false,walka4=false,walka5=false,zwyciestwo=false,przegrana=false;
	int wybor_menu = 0, wybor_poczatek_gry = 0, wybor_miasto = 0, wybor_opcje = 0, wybor_ruch1 = 0, wybor_ruch2 = 0, wybor_ruch3=0,wybor_po_walce=0;
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
	srand(time(NULL));
	ALLEGRO_FONT *font24 = al_load_font("BuxtonSketch.TTF", 30, 0);
	ALLEGRO_FONT *czciaka_do_statystyk = al_load_font("BuxtonSketch.TTF", 15, 0);
	bohater sojusznik[4];
	instalacja_bohaterow(sojusznik);
	przeciwnik wrog[8];
	while (!koniec){
		al_flip_display();																							//Menu g³ówne
		al_clear_to_color(al_map_rgb(0, 0, 0));
		menu_glowne(font24, szerokoœæ/2, wysokosc/2, wybor_menu);
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
				poczatek_gry(font24, menu_x, menu_y, wybor_poczatek_gry,zloto);
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
							case(2) :																				
								wyjscie_z_miasta = true;
								break;
							}
						}
						}
						wyjscie_z_miasta = false;
						wybor_miasto = 0;
						break;
					case(1) :																							//1.Poziom
						while (!walka){
						ilosc_wrogow = 0;
						poziomy(poziom, podpoziom, wrog);
						while (wrog[ilosc_wrogow].zywy){
							ilosc_wrogow++;
						}
						while (!walka2){
							ALLEGRO_EVENT ev;
							al_wait_for_event(event_queue, &ev);
							al_clear_to_color(al_map_rgb(0, 0, 0));
							wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
							al_flip_display();
							for (i = 0; i < 4; i++){
								sojusznik[i].ruch = false;
							}
							for (i = 0; i < ilosc_wrogow; i++){
								wrog[i].ruch = false;
							}
							ruch = 15;
							while (ruch >= 0){
								for (i = 0; i < 4; i++){
									przegrana = true;
									zwyciestwo = true;
									for (iii = 0; iii < 4; iii++){
										if (sojusznik[iii].statystyki.punkty_zycia[0] > 0){
											przegrana = false;
											break;
										}
									}
									for (iii = 0; iii < ilosc_wrogow; iii++){
										if (wrog[iii].statystyki.punkty_zycia[0] > 0){
											zwyciestwo = false;
											break;
										}
									}
									if (przegrana){
										zloto /= 4;
										ruch = 0;
										podpoziom = 1;
										walka = true;
										walka2 = true;
										poziomm(sojusznik);
										for (i = 0; i < 4; i++){
											sojusznik[i].zywy = true;
											for (ii = 0; ii < 4; ii++){
												sojusznik[i].umiejetnosc[ii].ilosc_uzyc[0] = sojusznik[i].umiejetnosc[ii].ilosc_uzyc[1];
											}
										}
										break;
									}
									else if (zwyciestwo){
										if (podpoziom == 10){
											ruch = 0;
											poziom++;
											walka = true;
											walka2 = true;
											poziomm(sojusznik);
											for (i = 0; i < 4; i++){
												sojusznik[i].zywy = true;
												for (ii = 0; ii < 4; ii++){													
													sojusznik[i].umiejetnosc[ii].ilosc_uzyc[0] = sojusznik[i].umiejetnosc[ii].ilosc_uzyc[1];
												}
											}
											break;
										}
										else{
											while (!walka5){
												ALLEGRO_EVENT ev;
												al_wait_for_event(event_queue, &ev);
												al_clear_to_color(al_map_rgb(0, 0, 0));
												Po_wygranej(font24, menu_x, menu_y, wybor_po_walce);
												al_flip_display();
												if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
													switch (ev.keyboard.keycode){
													case(ALLEGRO_KEY_UP) :
														wybor_po_walce -= 1;
														break;
													case(ALLEGRO_KEY_DOWN) :
														wybor_po_walce += 1;
														break;
													}
												}
												wybor_po_walce = (wybor_po_walce + 3) % 3;
												if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
													switch (wybor_po_walce){
													case(0) :
														zerowanie_statystyk(sojusznik);
														walka5 = true;
														walka2 = true;
														ruch = 0;
														podpoziom++;
														break;
													case(1) :
														break;
													case(2) :
														ruch = 0;
														podpoziom = 1;
														walka = true;
														walka2 = true;
														walka5 = true;
														poziomm(sojusznik);
														for (i = 0; i < 4; i++){
															sojusznik[i].zywy = true;
															for (ii = 0; ii < 4; ii++){
																sojusznik[i].umiejetnosc[ii].ilosc_uzyc[0] = sojusznik[i].umiejetnosc[ii].ilosc_uzyc[1];
															}
														}
														break;
													}
												}
											}
											walka5 = false;
											break;
										}
									}
									if (sojusznik[i].statystyki.szybkosc == ruch && !sojusznik[i].ruch && sojusznik[i].zywy){
										while (!sojusznik[i].ruch){
											ALLEGRO_EVENT ev;
											al_wait_for_event(event_queue, &ev);
											al_clear_to_color(al_map_rgb(0, 0, 0));
											wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
											al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * 2 * i, ALLEGRO_ALIGN_CENTRE, "<");
											wyswietlanie_podczas_walki2(font24, sojusznik[i], wybor_ruch1);
											al_flip_display();
											if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
												switch (ev.keyboard.keycode){
												case(ALLEGRO_KEY_UP) :
													wybor_ruch1 -= 1;
													break;
												case(ALLEGRO_KEY_DOWN) :
													wybor_ruch1 += 1;
													break;
												}
											}
											wybor_ruch1 = (wybor_ruch1+2) % 2;											
											if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
												switch (wybor_ruch1){
												case(0) :
													while (!walka3){
													ALLEGRO_EVENT ev;
													al_wait_for_event(event_queue, &ev);
													al_clear_to_color(al_map_rgb(0, 0, 0));
													wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
													al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * 2 * i, ALLEGRO_ALIGN_CENTRE, "<");
													al_draw_textf(font24, al_map_rgb(204, 0, 0), 760, 15 + 35 * 2 * ilosc_wrogow, ALLEGRO_ALIGN_RIGHT, "POWROT");
													al_draw_textf(font24, al_map_rgb(204, 0, 0), 780, 15 + 35 * 2 * wybor_ruch2, ALLEGRO_ALIGN_RIGHT, "<");
													al_flip_display();
													if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
														switch (ev.keyboard.keycode){
														case(ALLEGRO_KEY_UP) :
															wybor_ruch2 -= 1;
															break;
														case(ALLEGRO_KEY_DOWN) :
															wybor_ruch2 += 1;
															break;
														}
													}
													wybor_ruch2 = (wybor_ruch2 + (ilosc_wrogow + 1)) % (ilosc_wrogow + 1);
													if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
														if (wybor_ruch2 < ilosc_wrogow && wrog[wybor_ruch2].zywy){
															obrazenia = sojusznik[i].statystyki.atak_fizyczny - wrog[wybor_ruch2].statystyki.obrona_fizyczna;
															if (obrazenia < 1){
																obrazenia = 1;
															}
															wrog[wybor_ruch2].statystyki.punkty_zycia[0] -= obrazenia;
															obrazenia = 0;
															if (wrog[wybor_ruch2].statystyki.punkty_zycia[0] <= 0 && wrog[wybor_ruch2].zywy){
																wrog[wybor_ruch2].statystyki.punkty_zycia[0] = 0;
																wrog[wybor_ruch2].zywy = false;
																zloto += wrog[wybor_ruch2].zloto;
															}
															walka3 = true;
															sojusznik[i].ruch = true;
															wybor_ruch2 = 0;
														}
														if (wybor_ruch2 == ilosc_wrogow){
															walka3 = true;
															wybor_ruch2 = 0;
														}
													}
													}
														walka3 = false;
														break;
												case(1) :
													while (!walka3){
													ALLEGRO_EVENT ev;
													al_wait_for_event(event_queue, &ev);
													al_clear_to_color(al_map_rgb(0, 0, 0));
													wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
													al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * 2 * i, ALLEGRO_ALIGN_CENTRE, "<");
													wyswietlanie_podczas_walki3(font24, sojusznik[i], wybor_ruch2);
													al_flip_display();
													if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
														switch (ev.keyboard.keycode){
														case(ALLEGRO_KEY_UP) :
															wybor_ruch2 -= 1;
															break;
														case(ALLEGRO_KEY_DOWN) :
															wybor_ruch2 += 1;
															break;
														}
													}
													wybor_ruch2 = (wybor_ruch2 + 5) % 5;
													if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
														if (wybor_ruch2 < 4 && sojusznik[i].umiejetnosc[wybor_ruch2].ilosc_uzyc[0]>0){
															if (sojusznik[i].umiejetnosc[wybor_ruch2].typ_umiejetnosci == 1){
																while (!walka4){
																	ALLEGRO_EVENT ev;
																	al_wait_for_event(event_queue, &ev);
																	al_clear_to_color(al_map_rgb(0, 0, 0));
																	wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
																	al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * 2 * i, ALLEGRO_ALIGN_CENTRE, "<");
																	al_draw_textf(font24, al_map_rgb(204, 0, 0), 760, 15 + 35 * 2 * ilosc_wrogow, ALLEGRO_ALIGN_RIGHT, "POWROT");
																	al_draw_textf(font24, al_map_rgb(204, 0, 0), 780, 15 + 35 * 2 * wybor_ruch3, ALLEGRO_ALIGN_RIGHT, "<");
																	al_flip_display();
																	if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
																		switch (ev.keyboard.keycode){
																		case(ALLEGRO_KEY_UP) :
																			wybor_ruch3 -= 1;
																			break;
																		case(ALLEGRO_KEY_DOWN) :
																			wybor_ruch3 += 1;
																			break;
																		}
																	}
																	wybor_ruch3 = (wybor_ruch3 + (ilosc_wrogow + 1)) % (ilosc_wrogow + 1);
																	if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
																		if (wybor_ruch3 < ilosc_wrogow && wrog[wybor_ruch3].zywy){
																			wrog[wybor_ruch3].statystyki = uzycie_umiejetnosci_na_cele(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, wrog[wybor_ruch3].statystyki);
																			sojusznik[i].statystyki = uzycie_umiejetnosci_na_siebie(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, wrog[wybor_ruch3].statystyki);
																			sojusznik[i].umiejetnosc[wybor_ruch2].ilosc_uzyc[0]--;
																			if (wrog[wybor_ruch3].statystyki.punkty_zycia[0] <= 0 && wrog[wybor_ruch3].zywy){
																				wrog[wybor_ruch3].zywy = false;
																				zloto += wrog[wybor_ruch3].zloto;
																			}
																			walka3 = true;
																			walka4 = true;
																			sojusznik[i].ruch = true;
																			wybor_ruch3 = 0;
																		}
																		if (wybor_ruch3 == ilosc_wrogow){
																			walka4 = true;
																			wybor_ruch3 = 0;
																		}
																	}
																}
																walka4 = false;
															}
															else if (sojusznik[i].umiejetnosc[wybor_ruch2].typ_umiejetnosci == 2){
																for (ii = 0; ii < ilosc_wrogow; ii++){
																	if (wrog[ii].zywy){
																		wrog[ii].statystyki = uzycie_umiejetnosci_na_cele(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, wrog[ii].statystyki);
																		if (wrog[ii].statystyki.punkty_zycia[0] <= 0 && wrog[ii].zywy){
																			wrog[ii].statystyki.punkty_zycia[0] = 0;
																			wrog[ii].zywy = false;
																			zloto += wrog[ii].zloto;
																		}
																	}
																}
																sojusznik[i].statystyki = uzycie_umiejetnosci_na_siebie(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, sojusznik[i].statystyki);
																sojusznik[i].umiejetnosc[wybor_ruch2].ilosc_uzyc[0]--;
																walka3 = true;
																walka4 = true;
																sojusznik[i].ruch = true;
															}
															else if (sojusznik[i].umiejetnosc[wybor_ruch2].typ_umiejetnosci == 3){
																while (!walka4){
																	ALLEGRO_EVENT ev;
																	al_wait_for_event(event_queue, &ev);
																	al_clear_to_color(al_map_rgb(0, 0, 0));
																	wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
																	al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * 2 * i, ALLEGRO_ALIGN_CENTRE, "<");
																	al_draw_textf(font24, al_map_rgb(204, 0, 0), 40, 15 + 35 * 2 * 4, 0, "POWROT");
																	al_draw_textf(font24, al_map_rgb(204, 0, 0), 20, 15 + 35 * 2 * wybor_ruch3, 0, ">");
																	al_flip_display();
																	if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
																		switch (ev.keyboard.keycode){
																		case(ALLEGRO_KEY_UP) :
																			wybor_ruch3 -= 1;
																			break;
																		case(ALLEGRO_KEY_DOWN) :
																			wybor_ruch3 += 1;
																			break;
																		}
																	}
																	wybor_ruch3 = (wybor_ruch3 + 5) % 5;
																	if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_ENTER){
																		if (wybor_ruch3 < 5 && sojusznik[wybor_ruch3].zywy){
																			sojusznik[wybor_ruch3].statystyki = uzycie_umiejetnosci_na_cele(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, sojusznik[wybor_ruch3].statystyki);
																			sojusznik[i].statystyki = uzycie_umiejetnosci_na_siebie(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, sojusznik[wybor_ruch3].statystyki);
																			sojusznik[i].umiejetnosc[wybor_ruch2].ilosc_uzyc[0]--;
																			walka3 = true;
																			walka4 = true;
																			sojusznik[i].ruch = true;
																			wybor_ruch3 = 0;
																		}
																		if (wybor_ruch3 == ilosc_wrogow){
																			walka4 = true;
																			wybor_ruch3 = 0;
																		}
																	}
																}
																walka4 = false;
															}
															else if (sojusznik[i].umiejetnosc[wybor_ruch2].typ_umiejetnosci == 4){
																for (ii = 0; ii < 4; ii++){
																	if (sojusznik[ii].zywy){
																		sojusznik[ii].statystyki = uzycie_umiejetnosci_na_cele(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, sojusznik[ii].statystyki);
																	}
																}
																sojusznik[i].statystyki = uzycie_umiejetnosci_na_siebie(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, sojusznik[i].statystyki);
																sojusznik[i].umiejetnosc[wybor_ruch2].ilosc_uzyc[0]--;
																walka3 = true;
																walka4 = true;
																sojusznik[i].ruch = true;
															}
															else if (sojusznik[i].umiejetnosc[wybor_ruch2].typ_umiejetnosci == 5){
																for (ii = 0; ii < 4; ii++){
																	if (sojusznik[ii].zywy){
																		sojusznik[ii].statystyki = uzycie_umiejetnosci_na_cele(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, sojusznik[ii].statystyki);
																		if (sojusznik[ii].statystyki.punkty_zycia[0] <= 0 && sojusznik[ii].zywy){
																			sojusznik[ii].statystyki.punkty_zycia[0] = 0;
																			sojusznik[ii].zywy = false;
																		}
																	}
																}
																for (ii = 0; ii < ilosc_wrogow; ii++){
																	if (wrog[ii].zywy){
																		wrog[ii].statystyki = uzycie_umiejetnosci_na_cele(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, wrog[ii].statystyki);
																		if (wrog[ii].statystyki.punkty_zycia[0] <= 0 && wrog[ii].zywy){
																			wrog[ii].statystyki.punkty_zycia[0] = 0;
																			wrog[ii].zywy = false;
																			zloto += wrog[ii].zloto;
																		}
																	}
																}
																sojusznik[i].statystyki = uzycie_umiejetnosci_na_siebie(sojusznik[i].umiejetnosc[wybor_ruch2], sojusznik[i].statystyki, sojusznik[i].statystyki);
																sojusznik[i].umiejetnosc[wybor_ruch2].ilosc_uzyc[0]--;
																walka3 = true;
																walka4 = true;
																sojusznik[i].ruch = true;
															}
														}
														if (wybor_ruch2==4){
															walka3 = true;
														}
													}
													}
														walka3 = false;
														wybor_ruch2 = 0;
														break;
												}
											}											
										}
										wybor_ruch1 = 0;
									}
								}
								for (i = 0; i < ilosc_wrogow; i++){
									przegrana = true;
									zwyciestwo = true;
									for (iii = 0; iii < 4; iii++){
										if (sojusznik[iii].statystyki.punkty_zycia[0] > 0){
											przegrana = false;
											break;
										}
									}									
									if (przegrana){
										zloto /= 4;
										ruch = 0;
										podpoziom = 1;
										walka = true;
										walka2 = true;
										poziomm(sojusznik);
										for (i = 0; i < 4; i++){
											sojusznik[i].zywy = true;
											for (ii = 0; ii < 4; ii++){
												sojusznik[i].umiejetnosc[ii].ilosc_uzyc[0] = sojusznik[i].umiejetnosc[ii].ilosc_uzyc[1];
											}
										}
										break;
									}
									if (wrog[i].statystyki.szybkosc == ruch && !wrog[i].ruch && wrog[i].zywy){
										ilosc_umiejetnosci = 0;
										for (ii = 0; ii < 4; ii++){
											if (wrog[i].umiejetnosc[ii].ilosc_uzyc[0] > 0){
												ilosc_umiejetnosci++;
											}
										}
										for (ii = rand() % ilosc_umiejetnosci; ii < 4; ii++){											
											if (wrog[i].umiejetnosc[ii].ilosc_uzyc[0] > 0){
												if (wrog[i].umiejetnosc[ii].typ_umiejetnosci == 1){
													while (!wrog[i].ruch){
														iii = rand() % 4;
														if (sojusznik[iii].zywy){
															sojusznik[iii].statystyki = uzycie_umiejetnosci_na_cele(wrog[i].umiejetnosc[ii], wrog[i].statystyki, sojusznik[iii].statystyki);
															wrog[i].statystyki = uzycie_umiejetnosci_na_siebie(wrog[i].umiejetnosc[ii], wrog[i].statystyki, sojusznik[iii].statystyki);
															if (sojusznik[iii].zywy && sojusznik[iii].statystyki.punkty_zycia[0] <= 0){
																sojusznik[iii].statystyki.punkty_zycia[0] = 0;
																sojusznik[iii].zywy = false;
															}
															wrog[i].ruch = true;
														}
													}
												}
												else if (wrog[i].umiejetnosc[ii].typ_umiejetnosci == 2){
													for (iii = 0; iii < 4; iii++){
														if (sojusznik[iii].zywy){
															sojusznik[iii].statystyki = uzycie_umiejetnosci_na_cele(wrog[i].umiejetnosc[ii], wrog[i].statystyki, sojusznik[iii].statystyki);
															if (sojusznik[iii].zywy && sojusznik[iii].statystyki.punkty_zycia[0] <= 0){
																sojusznik[iii].statystyki.punkty_zycia[0] = 0;
																sojusznik[iii].zywy = false;
															}
														}
													}
													wrog[i].statystyki = uzycie_umiejetnosci_na_siebie(wrog[i].umiejetnosc[ii], wrog[i].statystyki, wrog[i].statystyki);
													wrog[i].ruch = true;
												}
												else if (wrog[i].umiejetnosc[ii].typ_umiejetnosci == 3){
													while (!wrog[i].ruch){
														iii = rand() % ilosc_wrogow;
														if (wrog[iii].zywy){
															wrog[iii].statystyki = uzycie_umiejetnosci_na_cele(wrog[i].umiejetnosc[ii], wrog[i].statystyki, wrog[iii].statystyki);
															wrog[i].statystyki = uzycie_umiejetnosci_na_siebie(wrog[i].umiejetnosc[ii], wrog[i].statystyki, wrog[iii].statystyki);
															wrog[i].ruch = true;
														}
													}
												}
												else if (wrog[i].umiejetnosc[ii].typ_umiejetnosci == 4){
													for (iii = 0; iii < ilosc_wrogow; iii++){
														if (wrog[iii].zywy){
															wrog[iii].statystyki = uzycie_umiejetnosci_na_cele(wrog[i].umiejetnosc[ii], wrog[i].statystyki, wrog[iii].statystyki);
														}
													}
													wrog[i].statystyki = uzycie_umiejetnosci_na_siebie(wrog[i].umiejetnosc[ii], wrog[i].statystyki, wrog[i].statystyki);
													wrog[i].ruch = true;
												}
												else if (wrog[i].umiejetnosc[ii].typ_umiejetnosci == 5){
													for (iii = 0; iii < ilosc_wrogow; iii++){
														if (wrog[iii].zywy){
															wrog[iii].statystyki = uzycie_umiejetnosci_na_cele(wrog[i].umiejetnosc[ii], wrog[i].statystyki, wrog[iii].statystyki);
															if (wrog[iii].zywy && wrog[iii].statystyki.punkty_zycia[0] <= 0){
																wrog[iii].zywy = false;
															}
														}
													}
													for (iii = 0; iii < 4; iii++){
														if (sojusznik[iii].zywy){
															sojusznik[iii].statystyki = uzycie_umiejetnosci_na_cele(wrog[i].umiejetnosc[ii], wrog[i].statystyki, sojusznik[iii].statystyki);
															if (sojusznik[iii].zywy && sojusznik[iii].statystyki.punkty_zycia[0] <= 0){
																sojusznik[iii].zywy = false;
																sojusznik[iii].statystyki.punkty_zycia[0] = 0;
															}
														}
													}
													wrog[i].statystyki = uzycie_umiejetnosci_na_siebie(wrog[i].umiejetnosc[ii], wrog[i].statystyki, wrog[i].statystyki);
													wrog[i].ruch = true;
												}
												wrog[i].umiejetnosc[ii].ilosc_uzyc[0]--;
												break;
											}
										}
										if (wrog[i].ruch){
											licznik = 0;
											while (licznik < 120){
												ALLEGRO_EVENT ev;
												al_wait_for_event(event_queue, &ev);
												al_clear_to_color(al_map_rgb(0, 0, 0));
												wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
												al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * 2 * i, ALLEGRO_ALIGN_CENTRE, ">");
												al_draw_ustr(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * (2 * i + 1), ALLEGRO_ALIGN_CENTRE, wrog[i].nazwa);
												al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * (2 * i + 2), ALLEGRO_ALIGN_CENTRE, "uzyl umiejetnosci:");
												al_draw_ustr(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * (2 * i + 3), ALLEGRO_ALIGN_CENTRE, wrog[i].umiejetnosc[ii].nazwa_umiejetnosci);
												al_flip_display();
												if (ev.type == ALLEGRO_EVENT_TIMER){
													licznik++;
												}
											}
										}
										if (!wrog[i].ruch){
											while (!wrog[i].ruch){
												iii = rand() % 4;
												if (sojusznik[iii].zywy){
													obrazenia = wrog[i].statystyki.atak_fizyczny - sojusznik[iii].statystyki.obrona_fizyczna;
													if (obrazenia < 1){
														obrazenia = 1;
													}
													sojusznik[iii].statystyki.punkty_zycia[0] -= obrazenia;
													obrazenia = 0;
													if (sojusznik[iii].zywy && sojusznik[iii].statystyki.punkty_zycia[0] <= 0){
														sojusznik[iii].statystyki.punkty_zycia[0] = 0;
														sojusznik[iii].zywy = false;
													}
													wrog[i].ruch = true;
													licznik = 0;
													while (licznik < 120){
														ALLEGRO_EVENT ev;
														al_wait_for_event(event_queue, &ev);
														al_clear_to_color(al_map_rgb(0, 0, 0));
														wyswietlanie_podczas_walki(font24, font24, sojusznik, wrog, ilosc_wrogow);
														al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * 2 * i, ALLEGRO_ALIGN_CENTRE, ">");
														al_draw_ustr(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * (2 * i +1) , ALLEGRO_ALIGN_CENTRE, wrog[i].nazwa);
														al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * (2 * i + 2), ALLEGRO_ALIGN_CENTRE, "uzyl umiejetnosci:");
														al_draw_textf(font24, al_map_rgb(255, 205, 20), szerokoœæ / 2, 15 + 35 * (2 * i + 3), ALLEGRO_ALIGN_CENTRE, "zwykly atak");
														al_flip_display();
														if (ev.type == ALLEGRO_EVENT_TIMER){
															licznik++;
														}
													}
												}
											}
										}
									}
								}
								ruch--;
							}
						}
						walka2 = false;
						}
						walka = false;
						break;
					case(2) :																							//Opcje	
						while (!wyjscie_z_opcji){
						ALLEGRO_EVENT ev;
						al_wait_for_event(event_queue, &ev);
						al_clear_to_color(al_map_rgb(0, 0, 0));
						opcje(font24, 40, 30, wybor_opcje, sojusznik);
						if (wybor_opcje >= 0 && wybor_opcje <= 3){
							pokaz_statystyki_bohatera(font24, sojusznik[wybor_opcje], 270, 30, 480);
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
								wybor_opcje = 0;
								break;
							}
						}
						}
						wyjscie_z_opcji = false;
						break;
					case(3) :																							//Powrot do menu glownego
						powrot_do_menu_glownego = true;
						wybor_poczatek_gry = 0;
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