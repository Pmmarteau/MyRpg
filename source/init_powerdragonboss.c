/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

sfIntRect dragonbosspower_skin(int i)
{
    sfIntRect result;

    result.top = 0;
    if (i == 0)
        result.left = 0;
    if (i == 1)
        result.left = 51;
    if (i == 2)
        result.left = 99;
    if (i == 3)
        result.left = 155;
    result.width = 51;
    result.height = 70;

    return (result);
}

int init_powerdragonboss(player_t *mob)
{
    mob->power->sprite = sfSprite_create();
    char *str = "ressources/world2/mob/POWERDRAGONBOSS.png";
    sfTexture *duck_tx = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(mob->power->sprite, duck_tx, sfTrue);
    mob->power->skin = dragonbosspower_skin(0);
    sfSprite_setTextureRect(mob->power->sprite, mob->power->skin);
    mob->power->clock = sfClock_create();
    mob->power->vec.x = -1000;
    mob->power->vec.y = -1000;
    mob->power->boul = 0;
    sfSprite_setPosition(mob->power->sprite, mob->power->vec);
    return (0);
}