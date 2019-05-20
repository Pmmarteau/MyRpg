/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

sfIntRect player_skin(int i)
{
    sfIntRect result;

    result.left = 290;
    if (i == 0)
        result.top = 383;
    if (i == 1)
        result.top = 481;
    if (i == 2)
        result.top = 579;
    if (i == 3)
        result.top = 677;
    result.width = 90;
    result.height = 98;

    return (result);
}

int init_player(player_t *mob)
{
    mob->power = malloc(sizeof(power_t));
    mob->sprite = sfSprite_create();
    char *str = "ressources/player/skin.png";
    sfTexture *duck_tx = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(mob->sprite, duck_tx, sfTrue);
    mob->skin = player_skin(3);
    sfSprite_setTextureRect(mob->sprite, mob->skin);
    mob->clock = sfClock_create();
    mob->vec.x = 475;
    mob->vec.y = 500;
    sfSprite_setPosition(mob->sprite, mob->vec);
    mob->life = 100;
    sfFont *font = sfFont_createFromFile("ressources/font.ttf");
    mob->ltext = sfText_create();
    sfText_setFont(mob->ltext, font);
    sfText_setCharacterSize(mob->ltext, 33);
    sfText_setPosition(mob->ltext, mob->vec);
    return (0);
}