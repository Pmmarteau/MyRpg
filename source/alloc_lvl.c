/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"


void    lvl_one(hc_aka *GAME)
{

    GAME->lvl_1->zombie1 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie1, 450, 500);
    GAME->lvl_1->zombie2 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie2, 800, 500);
    GAME->lvl_1->zombie3 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie3, 450, 750);
    GAME->lvl_1->zombie4 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie4, 800, 750);
    GAME->lvl_1->zombie5 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie5, 450, 500);
    GAME->lvl_1->zombie6 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie6, 800, 500);
    GAME->lvl_1->zombie7 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie7, 450, 750);
    GAME->lvl_1->zombie8 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie8, 800, 750);
    GAME->lvl_1->zombie9 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie9, 600, 500);
    GAME->lvl_1->zombie10 = malloc(sizeof(player_t));
    init_zombie(GAME->lvl_1->zombie10, 1200, 500);

    GAME->lvl_1->boss = malloc(sizeof(player_t));
    init_boss(GAME->lvl_1->boss, 800, 250);
}

void    lvl_two(hc_aka *GAME)
{   
    GAME->lvl_2->dragon1 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon1, 450, 500);
    GAME->lvl_2->dragon2 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon2, 800, 500);
    GAME->lvl_2->dragon3 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon3, 450, 750);
    GAME->lvl_2->dragon4 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon4, 800, 750);
    GAME->lvl_2->dragon5 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon5, 450, 500);
    GAME->lvl_2->dragon6 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon6, 800, 500);
    GAME->lvl_2->dragon7 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon7, 450, 750);
    GAME->lvl_2->dragon8 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon8, 800, 750);
    GAME->lvl_2->dragon9 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon9, 600, 500);
    GAME->lvl_2->dragon10 = malloc(sizeof(player_t));
    init_dragon(GAME->lvl_2->dragon10, 1200, 500);

    GAME->lvl_2->dragonboss = malloc(sizeof(player_t));
    init_dragonboss(GAME->lvl_2->dragonboss, 800, 250);
}

void    lvl_three(hc_aka *GAME)
{
    GAME->lvl_3->alien1 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien1, 450, 500);
    GAME->lvl_3->alien2 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien2, 800, 500);
    GAME->lvl_3->alien3 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien3, 450, 750);
    GAME->lvl_3->alien4 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien4, 800, 750);
    GAME->lvl_3->alien5 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien5, 450, 500);
    GAME->lvl_3->alien6 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien6, 800, 500);
    GAME->lvl_3->alien7 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien7, 450, 750);
    GAME->lvl_3->alien8 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien8, 800, 750);
    GAME->lvl_3->alien9 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien9, 600, 500);
    GAME->lvl_3->alien10 = malloc(sizeof(player_t));
    init_alien(GAME->lvl_3->alien10, 1200, 500);

    GAME->lvl_3->helldog = malloc(sizeof(player_t));
    init_helldog(GAME->lvl_3->helldog, 800, 250);
}