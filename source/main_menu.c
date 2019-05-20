/*
** EPITECH PROJECT, 2017
** hunter
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void create_retry(hc_aka *GAME)
{
    sfVector2f size;
    sfVector2f pos;
    sfTexture *texture = sfTexture_createFromFile("ressources/button/retry.png", NULL);
    pos.x = 422.41;
    pos.y = 0;
    size.x = 258.62;
    size.y = 111.11;
    sfRectangleShape *retry = sfRectangleShape_create();
    sfRectangleShape_setPosition(retry, pos);
    sfRectangleShape_setTexture(retry, texture, sfFalse);
    sfRectangleShape_setSize(retry, size);

    GAME->rmenu[4] = retry;
}

void create_about(hc_aka *GAME)
{
    sfVector2f size;
    sfVector2f pos;
    sfTexture *texture = sfTexture_createFromFile("ressources/button/about.png", NULL);
    pos.x = 1250.57;
    pos.y = 350;
    size.x = 402.30;
    size.y = 111.11;
    sfRectangleShape *about = sfRectangleShape_create();
    sfRectangleShape_setPosition(about, pos);
    sfRectangleShape_setTexture(about, texture, sfFalse);
    sfRectangleShape_setSize(about, size);

    GAME->rmenu[1] = about;
}

void create_play(hc_aka *GAME)
{
    sfVector2f size;
    sfVector2f pos;
    sfTexture *texture = sfTexture_createFromFile("ressources/button/play.png", NULL);
    pos.x = 1293.68;
    pos.y = 150;
    size.x = 316.09;
    size.y = 111.11;
    sfRectangleShape *play = sfRectangleShape_create();
    sfRectangleShape_setPosition(play, pos);
    sfRectangleShape_setTexture(play, texture, sfFalse);
    sfRectangleShape_setSize(play, size);

    GAME->rmenu[2] = play;
}

void create_exit(hc_aka *GAME)
{
    sfVector2f size;
    sfVector2f pos;
    sfTexture *texture = sfTexture_createFromFile("ressources/button/exit.png", NULL);
    pos.x = 1322.41;
    pos.y = 600;
    size.x = 258.62;
    size.y = 111.11;
    sfRectangleShape *exit = sfRectangleShape_create();
    sfRectangleShape_setPosition(exit, pos);
    sfRectangleShape_setTexture(exit, texture, sfFalse);
    sfRectangleShape_setSize(exit, size);

    GAME->rmenu[3] = exit;
}

void main_menu(hc_aka *GAME)
{
    create_back(GAME);
    create_back2(GAME);
    create_about(GAME);
    create_play(GAME);
    create_exit(GAME);
    create_retry(GAME);

    menu_event(GAME);
}