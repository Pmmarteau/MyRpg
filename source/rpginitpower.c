/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void lvl_onepower(hc_aka *GAME)
{
    init_powerzombie(GAME->lvl_1->zombie1);
    init_powerzombie(GAME->lvl_1->zombie2);
    init_powerzombie(GAME->lvl_1->zombie3);
    init_powerzombie(GAME->lvl_1->zombie4);
    init_powerzombie(GAME->lvl_1->zombie5);
    init_powerzombie(GAME->lvl_1->zombie6);
    init_powerzombie(GAME->lvl_1->zombie7);
    init_powerzombie(GAME->lvl_1->zombie8);
    init_powerzombie(GAME->lvl_1->zombie9);
    init_powerzombie(GAME->lvl_1->zombie10);

    init_powerboss(GAME->lvl_1->boss);
}

void lvl_twopower(hc_aka *GAME)
{
    init_powerdragon(GAME->lvl_2->dragon1);
    init_powerdragon(GAME->lvl_2->dragon2);
    init_powerdragon(GAME->lvl_2->dragon3);
    init_powerdragon(GAME->lvl_2->dragon4);
    init_powerdragon(GAME->lvl_2->dragon5);
    init_powerdragon(GAME->lvl_2->dragon6);
    init_powerdragon(GAME->lvl_2->dragon7);
    init_powerdragon(GAME->lvl_2->dragon8);
    init_powerdragon(GAME->lvl_2->dragon9);
    init_powerdragon(GAME->lvl_2->dragon10);

    init_powerdragonboss(GAME->lvl_2->dragonboss);
}

void lvl_threepower(hc_aka *GAME)
{
    init_poweralien(GAME->lvl_3->alien1);
    init_poweralien(GAME->lvl_3->alien2);
    init_poweralien(GAME->lvl_3->alien3);
    init_poweralien(GAME->lvl_3->alien4);
    init_poweralien(GAME->lvl_3->alien5);
    init_poweralien(GAME->lvl_3->alien6);
    init_poweralien(GAME->lvl_3->alien7);
    init_poweralien(GAME->lvl_3->alien8);
    init_poweralien(GAME->lvl_3->alien9);
    init_poweralien(GAME->lvl_3->alien10);

    init_powerhelldog(GAME->lvl_3->helldog);
}

hc_aka *rpg_coreinitpower(hc_aka *GAME)
{
    lvl_onepower(GAME);
    lvl_twopower(GAME);
    lvl_threepower(GAME);
    return (GAME);
}