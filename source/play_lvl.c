/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"


void    play_lvl1(hc_aka *GAME)
{
    move_legzombie(GAME->lvl_1->zombie1);
    power_eventmob(GAME->lvl_1->zombie1, GAME);
    power_mvmmob(GAME->lvl_1->zombie1, GAME);
    move_legzombie(GAME->lvl_1->zombie2);
    power_eventmob(GAME->lvl_1->zombie2, GAME);
    power_mvmmob(GAME->lvl_1->zombie2, GAME);
    move_legzombie(GAME->lvl_1->zombie3);
    power_eventmob(GAME->lvl_1->zombie3, GAME);
    power_mvmmob(GAME->lvl_1->zombie3, GAME);
    move_legzombie(GAME->lvl_1->zombie4);
    power_eventmob(GAME->lvl_1->zombie4, GAME);
    power_mvmmob(GAME->lvl_1->zombie4, GAME);
    move_legzombie(GAME->lvl_1->zombie5);
    power_eventmob(GAME->lvl_1->zombie5, GAME);
    power_mvmmob(GAME->lvl_1->zombie5, GAME);
    move_legzombie(GAME->lvl_1->zombie6);
    power_eventmob(GAME->lvl_1->zombie6, GAME);
    power_mvmmob(GAME->lvl_1->zombie6, GAME);
    move_legzombie(GAME->lvl_1->zombie7);
    power_eventmob(GAME->lvl_1->zombie7, GAME);
    power_mvmmob(GAME->lvl_1->zombie7, GAME);
    move_legzombie(GAME->lvl_1->zombie8);
    power_eventmob(GAME->lvl_1->zombie8, GAME);
    power_mvmmob(GAME->lvl_1->zombie8, GAME);
    move_legzombie(GAME->lvl_1->zombie9);
    power_eventmob(GAME->lvl_1->zombie9, GAME);
    power_mvmmob(GAME->lvl_1->zombie9, GAME);
    move_legzombie(GAME->lvl_1->zombie10);
    power_eventmob(GAME->lvl_1->zombie10, GAME);
    power_mvmmob(GAME->lvl_1->zombie10, GAME);

    move_legboss(GAME->lvl_1->boss);
    power_eventmob(GAME->lvl_1->boss, GAME);
    power_mvmmob(GAME->lvl_1->boss, GAME);
}

void    play_lvl2(hc_aka *GAME)
{
    move_legdragon(GAME->lvl_2->dragon1);
    power_eventmob(GAME->lvl_2->dragon1, GAME);
    power_mvmmob(GAME->lvl_2->dragon1, GAME);
    move_legdragon(GAME->lvl_2->dragon2);
    power_eventmob(GAME->lvl_2->dragon2, GAME);
    power_mvmmob(GAME->lvl_2->dragon2, GAME);
    move_legdragon(GAME->lvl_2->dragon3);
    power_eventmob(GAME->lvl_2->dragon3, GAME);
    power_mvmmob(GAME->lvl_2->dragon3, GAME);
    move_legdragon(GAME->lvl_2->dragon4);
    power_eventmob(GAME->lvl_2->dragon4, GAME);
    power_mvmmob(GAME->lvl_2->dragon4, GAME);
    move_legdragon(GAME->lvl_2->dragon5);
    power_eventmob(GAME->lvl_2->dragon5, GAME);
    power_mvmmob(GAME->lvl_2->dragon5, GAME);
    move_legdragon(GAME->lvl_2->dragon6);
    power_eventmob(GAME->lvl_2->dragon6, GAME);
    power_mvmmob(GAME->lvl_2->dragon6, GAME);
    move_legdragon(GAME->lvl_2->dragon7);
    power_eventmob(GAME->lvl_2->dragon7, GAME);
    power_mvmmob(GAME->lvl_2->dragon7, GAME);
    move_legdragon(GAME->lvl_2->dragon8);
    power_eventmob(GAME->lvl_2->dragon8, GAME);
    power_mvmmob(GAME->lvl_2->dragon8, GAME);
    move_legdragon(GAME->lvl_2->dragon9);
    power_eventmob(GAME->lvl_2->dragon9, GAME);
    power_mvmmob(GAME->lvl_2->dragon9, GAME);
    move_legdragon(GAME->lvl_2->dragon10);
    power_eventmob(GAME->lvl_2->dragon10, GAME);
    power_mvmmob(GAME->lvl_2->dragon10, GAME);

    move_legdragonboss(GAME->lvl_2->dragonboss);
    power_eventmob(GAME->lvl_2->dragonboss, GAME);
    power_mvmmob(GAME->lvl_2->dragonboss, GAME);
}

void    play_lvl3(hc_aka *GAME)
{
    move_legalien(GAME->lvl_3->alien1);
    power_eventmob(GAME->lvl_3->alien1, GAME);
    power_mvmmob(GAME->lvl_3->alien1, GAME);
    move_legalien(GAME->lvl_3->alien2);
    power_eventmob(GAME->lvl_3->alien2, GAME);
    power_mvmmob(GAME->lvl_3->alien2, GAME);
    move_legalien(GAME->lvl_3->alien3);
    power_eventmob(GAME->lvl_3->alien3, GAME);
    power_mvmmob(GAME->lvl_3->alien3, GAME);
    move_legalien(GAME->lvl_3->alien4);
    power_eventmob(GAME->lvl_3->alien4, GAME);
    power_mvmmob(GAME->lvl_3->alien4, GAME);
    move_legalien(GAME->lvl_3->alien5);
    power_eventmob(GAME->lvl_3->alien5, GAME);
    power_mvmmob(GAME->lvl_3->alien5, GAME);
    move_legalien(GAME->lvl_3->alien6);
    power_eventmob(GAME->lvl_3->alien6, GAME);
    power_mvmmob(GAME->lvl_3->alien6, GAME);
    move_legalien(GAME->lvl_3->alien7);
    power_eventmob(GAME->lvl_3->alien7, GAME);
    power_mvmmob(GAME->lvl_3->alien7, GAME);
    move_legalien(GAME->lvl_3->alien8);
    power_eventmob(GAME->lvl_3->alien8, GAME);
    power_mvmmob(GAME->lvl_3->alien8, GAME);
    move_legalien(GAME->lvl_3->alien9);
    power_eventmob(GAME->lvl_3->alien9, GAME);
    power_mvmmob(GAME->lvl_3->alien9, GAME);
    move_legalien(GAME->lvl_3->alien10);
    power_eventmob(GAME->lvl_3->alien10, GAME);
    power_mvmmob(GAME->lvl_3->alien10, GAME);

    move_leghelldog(GAME->lvl_3->helldog);
    power_eventmob(GAME->lvl_3->helldog, GAME);
    power_mvmmob(GAME->lvl_3->helldog, GAME);
}