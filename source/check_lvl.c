/*
** EPITECH PROJECT, 2017
** hunter
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void update_moblife(player_t *mob, hc_aka *GAME)
{
    sfVector2f pos = mob->vec;
    pos.y = pos.y - 42;
    sfText_setPosition(mob->ltext, pos);
    sfText_setString(mob->ltext, nb_to_str(mob->life));
    sfRenderWindow_drawText(GAME->window, mob->ltext, NULL);
}

void check(hc_aka *GAME, player_t *mob)
{
    update_moblife(mob, GAME);
    if (mob->life > 0) {
        sfRenderWindow_drawSprite(GAME->window, mob->sprite, NULL);
        sfRenderWindow_drawSprite(GAME->window, mob->power->sprite, NULL);
    }
}


void    check_lvl1(hc_aka *GAME)
{
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie1);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie2);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie3);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie4);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie5);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie6);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie7);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie8);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie9);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->zombie10);

    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_1->boss);
}

void    check_lvl2(hc_aka *GAME)
{
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon1);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon2);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon3);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon4);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon5);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon6);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon7);  
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon8);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon9);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragon10);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_2->dragonboss);
}

void    check_lvl3(hc_aka *GAME)
{
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien1);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien2);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien3);
    if (GAME->map_x == 1 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien4);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien5);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien6);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien7);
    if (GAME->map_x == 2 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien8);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien9);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->alien10);
    if (GAME->map_x == 3 && GAME->map_y == 1)
        check(GAME, GAME->lvl_3->helldog);
}