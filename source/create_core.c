/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

hc_aka *rpg_coreinit(hc_aka *GAME)
{   
    GAME->lvl_0->npc = malloc(sizeof(player_t));
    init_npc(GAME->lvl_0->npc);
    GAME->lvl_0->princesse = malloc(sizeof(player_t));
    init_princesse(GAME->lvl_0->princesse);
    lvl_one(GAME);
    lvl_two(GAME);
    lvl_three(GAME);
    return (GAME);
}

hc_aka *create_core(void)
{
    char *title = "My Rpg";
    sfVideoMode mode = {1900, 1000, 64};
    hc_aka *GAME = malloc(sizeof(hc_aka));
    GAME->world = "tuto_world";
    GAME->map_x = 0;
    GAME->map_y = 0;
    GAME->menu = 1;
    GAME->footstep = sfMusic_createFromFile("");
    GAME->footstep2 = sfMusic_createFromFile("");
    GAME->footstep3 = sfMusic_createFromFile("");
    GAME->player = malloc(sizeof(player_t));
    GAME->window = sfRenderWindow_create(mode, title, sfClose , NULL);
    GAME->lvl_0 = malloc(sizeof(lv0));
    GAME->lvl_1 = malloc(sizeof(lv1));
    GAME->lvl_2 = malloc(sizeof(lv2));
    GAME->lvl_3 = malloc(sizeof(lv3));
    GAME->font = sfFont_createFromFile("ressources/font.ttf");
    GAME->tip = 0;
    text(GAME, "Deplacez vous grace au fleche directionnelle");
    text2(GAME, "du clavier et tirer avec la touche J");
    text3(GAME, "Vous allez devoir trouver votre princesse, d'abord trouver le chateau");
    init_player(GAME->player);
    init_power(GAME->player);
    rpg_coreinit(GAME);
    GAME = alloc_power(GAME);
    rpg_coreinitpower(GAME);
    return (GAME);
}