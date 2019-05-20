/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void boss_advance(player_t *mob)
{

    int mob1 = rand() % 5 + 1;
    int a = 0;

    if (mob1 == 1) {
        mob->skin = boss_skin(0);
        mob->vec.x = mob->vec.x + 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 1;
        }
    if (mob1 == 2) {
        mob->skin = boss_skin(3);
        mob->vec.x = mob->vec.x - 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 2;
        }
    if (mob1 == 3) {
        mob->skin = boss_skin(2);
        mob->vec.y = mob->vec.y + 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 3;
    }
    if (mob1 == 4) {
        mob->skin = boss_skin(1);
        mob->vec.y = mob->vec.y - 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 4;
    }
}

void move_legboss(player_t *mob)
{
    int seconds = 0;
    mob->time = sfClock_getElapsedTime(mob->clock);
    seconds = mob->time.microseconds/10000.0;
    
    if (seconds > 30) {
            boss_advance(mob);
            sfClock_restart(mob->clock);
        }
}

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
    return (0);
}