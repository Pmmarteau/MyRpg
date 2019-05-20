/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

int main(void)
{
    hc_aka *GAME = create_core();
    update_map(GAME);
    //sfMusic_play(GAME->footstep);
    while (sfRenderWindow_isOpen(GAME->window)) {
        while (sfRenderWindow_pollEvent(GAME->window, &GAME->event) && GAME->menu == -1)
            detect_event(GAME);
        menu_switch(GAME);
        if (GAME->menu == -99)
            return (0);
    }
    sfRenderWindow_destroy(GAME->window);
    return (0);
}