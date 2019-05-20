/*
** EPITECH PROJECT, 2017
** hunter
** File description:
** Cc
*/

#include "../include/my_rpg.h"

int is_collision(sfVector2i pos, sfFloatRect hit_b)
{
    if (pos.x >= hit_b.left && pos.x <= hit_b.left + hit_b.width) {
        if (pos.y <= hit_b.top + hit_b.height && pos.y >= hit_b.top) {
            return (1);
        }
    }
    return (0);
}

void menu_win(hc_aka *GAME)
{
    GAME->level = 0;
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[0], NULL);
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[3], NULL);
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[4], NULL);
    sfRenderWindow_display(GAME->window);
    sfVector2i mouse_pos = sfMouse_getPosition(GAME->window);
    sfFloatRect exit_hb = sfRectangleShape_getGlobalBounds(GAME->rmenu[3]);
    sfFloatRect retry_hb = sfRectangleShape_getGlobalBounds(GAME->rmenu[4]);
    if (is_collision(mouse_pos, exit_hb)
        && sfMouse_isButtonPressed(sfMouseLeft))
        GAME->menu = -99;
    if (is_collision(mouse_pos, retry_hb)
        && sfMouse_isButtonPressed(sfMouseLeft))
        GAME->menu = 2;
}

void menu_lose(hc_aka *GAME)
{
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[4], NULL);
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[3], NULL);
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[5], NULL);
    sfRenderWindow_display(GAME->window);
    sfVector2i mouse_pos = sfMouse_getPosition(GAME->window);
    sfFloatRect exit_hb = sfRectangleShape_getGlobalBounds(GAME->rmenu[3]);
    sfFloatRect retry_hb = sfRectangleShape_getGlobalBounds(GAME->rmenu[4]);
    if (is_collision(mouse_pos, exit_hb)
        && sfMouse_isButtonPressed(sfMouseLeft))
        GAME->menu = -99;
    if (is_collision(mouse_pos, retry_hb)
        && sfMouse_isButtonPressed(sfMouseLeft))
        GAME->menu = 2;
}

void menu_event(hc_aka *GAME)
{
    GAME->level = 0;
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[0], NULL);
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[1], NULL);
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[2], NULL);
    sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmenu[3], NULL);
    sfRenderWindow_display(GAME->window);
    sfVector2i mouse_pos = sfMouse_getPosition(GAME->window);
    sfFloatRect play_hb = sfRectangleShape_getGlobalBounds(GAME->rmenu[2]);
    sfFloatRect about_hb = sfRectangleShape_getGlobalBounds(GAME->rmenu[1]);
    sfFloatRect exit_hb = sfRectangleShape_getGlobalBounds(GAME->rmenu[3]);
    if (is_collision(mouse_pos, exit_hb)
        && sfMouse_isButtonPressed(sfMouseLeft))
        GAME->menu = -99;
    if (is_collision(mouse_pos, play_hb)
        && sfMouse_isButtonPressed(sfMouseLeft))
        GAME->menu = -1;
}

void create_back(hc_aka *GAME)
{
    sfVector2f size;
    sfVector2f pos;
    char *str = "ressources/background/background.png";
    sfTexture *texture = sfTexture_createFromFile(str, NULL);
    pos.x = 0;
    pos.y = 0;
    size.x = 1900;
    size.y = 1000;
    sfRectangleShape *back = sfRectangleShape_create();
    sfRectangleShape_setPosition(back, pos);
    sfRectangleShape_setTexture(back, texture, sfFalse);
    sfRectangleShape_setSize(back, size);

    GAME->rmenu[0] = back;
}

void create_back2(hc_aka *GAME)
{
    sfVector2f size;
    sfVector2f pos;
    char *str = "ressources/background/background2.png";
    sfTexture *texture = sfTexture_createFromFile(str, NULL);
    pos.x = 0;
    pos.y = 0;
    size.x = 1900;
    size.y = 1000;
    sfRectangleShape *back = sfRectangleShape_create();
    sfRectangleShape_setPosition(back, pos);
    sfRectangleShape_setTexture(back, texture, sfFalse);
    sfRectangleShape_setSize(back, size);

    GAME->rmenu[5] = back;
}