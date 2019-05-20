/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

sfIntRect alienpower_skin(void)
{
    sfIntRect result;

    result.top = 15;
    result.left = 15;
    result.width = 72;
    result.height = 68;

    return (result);
}

int init_poweralien(player_t *mob)
{
    mob->power->sprite = sfSprite_create();
    char *str = "ressources/world3/mob/POWERALIEN.png";
    sfTexture *duck_tx = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(mob->power->sprite, duck_tx, sfTrue);
    mob->power->skin = alienpower_skin();
    sfSprite_setTextureRect(mob->power->sprite, mob->power->skin);
    mob->power->clock = sfClock_create();
    mob->power->vec.x = -1000;
    mob->power->vec.y = -1000;
    mob->power->boul = 0;
    sfSprite_setPosition(mob->power->sprite, mob->power->vec);
    return (0);
}