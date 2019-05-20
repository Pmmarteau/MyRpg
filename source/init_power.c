/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

sfIntRect power_skin(int i)
{
    sfIntRect result;

    result.top = 226;
    if (i == 0)
        result.left = 0;
    if (i == 1)
        result.left = 33;
    if (i == 2)
        result.left = 61;
    if (i == 3)
        result.left = 96;
    result.width = 33;
    result.height = 25;

    return (result);
}

int init_power(player_t *mob)
{
    mob->power->sprite = sfSprite_create();
    char *str = "ressources/EFFECT.png";
    sfTexture *duck_tx = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(mob->power->sprite, duck_tx, sfTrue);
    mob->power->skin = power_skin(3);
    sfSprite_setTextureRect(mob->power->sprite, mob->power->skin);
    mob->power->clock = sfClock_create();
    mob->power->vec.x = -1000;
    mob->power->vec.y = -1000;
    mob->power->boul = 0;
    sfSprite_setPosition(mob->power->sprite, mob->power->vec);
    return (0);
}