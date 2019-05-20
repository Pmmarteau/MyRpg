/*
** EPITECH PROJECT, 2017
** hunter
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void quest_disp(hc_aka *GAME)
{
    if (GAME->level == 1 && GAME->map_x == 2 && GAME->map_y == 1)
        sfText_setString(GAME->quest_str3, "Tuez les zombies et le boss pour trouver le portail");
    if (GAME->level == 2)
        sfText_setString(GAME->quest_str3, "Trouver l'abri du dragon geant");
    if (GAME->level == 2 && GAME->map_x == 2 && GAME->map_y == 1)
        sfText_setString(GAME->quest_str3, "Tuez les dragons et le geant dragon pour trouver le portail");
    if (GAME->level == 3)
        sfText_setString(GAME->quest_str3, "Terminer le labyrinthe");
    if (GAME->level == 3 && GAME->map_x == 2 && GAME->map_y == 1)
        sfText_setString(GAME->quest_str3, "Tuez les Alien et le chien de l'enfer et trouver la princesse");
}
void lvl_switch(hc_aka *GAME)
{
    if (GAME->level == 1)
        check_lvl1(GAME);
    if (GAME->level == 2)
        check_lvl2(GAME);
    if (GAME->level == 3)
        check_lvl3(GAME);
}

void text_sprite(hc_aka *GAME)
{
    refresh_map(GAME);

    sfRenderWindow_drawSprite(GAME->window, GAME->player->sprite, NULL);
    sfRenderWindow_drawSprite(GAME->window, GAME->player->power->sprite, NULL);
    lvl_switch(GAME);
    if (GAME->map_x == 0 && GAME->map_y == 0 && GAME->lvl_0->npc->life > 0 && GAME->level == 0){
        sfRenderWindow_drawSprite(GAME->window, GAME->lvl_0->npc->sprite, NULL);
        update_moblife(GAME->lvl_0->npc, GAME);
        sfRenderWindow_drawText(GAME->window,GAME->quest_str1, NULL);
        sfRenderWindow_drawText(GAME->window,GAME->quest_str2, NULL);
    } 
    if (GAME->level == 0 && GAME->lvl_0->npc->life <= 0 && GAME->tip != 1) {
        GAME->map[5][15] = 'P';
        load_map(GAME);
        GAME->tip = 1;
    }
    if (GAME->level != 0)
        sfRenderWindow_drawText(GAME->window,GAME->quest_str3, NULL);
    if (GAME->map_x == 3 && GAME->map_y == 2 && GAME->lvl_0->npc->life > 0 && GAME->level == 3){
        sfRenderWindow_drawSprite(GAME->window, GAME->lvl_0->princesse->sprite, NULL);
    }
    quest_disp(GAME);
    lvl_switch(GAME);
    sfRenderWindow_display(GAME->window);
}