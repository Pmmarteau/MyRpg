/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

sfIntRect zombiepower_skin(void)
{
    sfIntRect result;

    result.top = 0;
    result.left = 0;
    result.width = 49;
    result.height = 48;

    return (result);
}

int init_powerzombie(player_t *mob)
{
    mob->power->sprite = sfSprite_create();
    char *str = "ressources/world1/mob/POWERZOMBIE.png";
    sfTexture *duck_tx = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(mob->power->sprite, duck_tx, sfTrue);
    mob->power->skin = zombiepower_skin();
    sfSprite_setTextureRect(mob->power->sprite, mob->power->skin);
    mob->power->clock = sfClock_create();
    mob->power->vec.x = -1000;
    mob->power->vec.y = -1000;
    mob->power->boul = 0;
    sfSprite_setPosition(mob->power->sprite, mob->power->vec);
    return (0);
}