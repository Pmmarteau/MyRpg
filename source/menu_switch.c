/*
** EPITECH PROJECT, 2017
** game_event.c
** File description:
**
*/

#include "../include/my_rpg.h"

void switch_lvl(hc_aka *GAME)
{
    if (GAME->level == 0)
        move_legnpc(GAME->lvl_0->npc, GAME);
    if (GAME->level == 1)
        play_lvl1(GAME);
    if (GAME->level == 2)
        play_lvl2(GAME);
    if (GAME->level == 3) {
        play_lvl3(GAME);
        move_legprincesse(GAME->lvl_0->princesse, GAME);
    }
    power_mvm(GAME->player, GAME);
    text_sprite(GAME);
}

void menu_switch(hc_aka *GAME)
{
    static int status = 0;
    switch (GAME->menu) {
    case 1: main_menu(GAME); break;
    case -1: switch_lvl(GAME); break;
    }
    if (status == 0) {
        status = 1;
        sfRenderWindow_display(GAME->window);
    }
}