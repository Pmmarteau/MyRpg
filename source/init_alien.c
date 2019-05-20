/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void alien_advance(player_t *mob)
{

    int mob1 = rand() % 5 + 1;
    int a = 0;

    if (mob1 == 1) {
        mob->skin = alien_skin(3);
        mob->vec.x = mob->vec.x + 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 1;
        }
    if (mob1 == 2) {
        mob->skin = alien_skin(1);
        mob->vec.x = mob->vec.x - 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 2;
        }
    if (mob1 == 3) {
        mob->skin = alien_skin(1);
        mob->vec.y = mob->vec.y + 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 3;
    }
    if (mob1 == 4) {
        mob->skin = alien_skin(0);
        mob->vec.y = mob->vec.y - 15;
        sfSprite_setTextureRect(mob->sprite, mob->skin);
        sfSprite_setPosition(mob->sprite, mob->vec);
        mob->boul = 4;
    }
}

void move_legalien(player_t *mob)
{
    int seconds = 0;
    mob->time = sfClock_getElapsedTime(mob->clock);
    seconds = mob->time.microseconds/10000.0;
    
    if (seconds > 30) {
            alien_advance(mob);
            sfClock_restart(mob->clock);
        }
}

sfIntRect alien_skin(int i)
{
    sfIntRect result;

    result.left = 0;
    if (i == 0)
        result.top = 0;
    if (i == 1)
        result.top = 111;
    if (i == 2)
        result.top = 224;
    if (i == 3)
        result.top = 335;
    result.width = 183;
    result.height = 111;

    return (result);
}

int init_alien(player_t *mob, int x, int y)
{
    mob->sprite = sfSprite_create();
    char *str = "ressources/world3/mob/ALIEN.png";
    sfTexture *duck_tx = sfTexture_createFromFile(str, NULL);
    sfSprite_setTexture(mob->sprite, duck_tx, sfTrue);
    mob->skin = alien_skin(3);
    sfSprite_setTextureRect(mob->sprite, mob->skin);
    mob->clock = sfClock_create();
    mob->vec.x = x;
    mob->vec.y = y;
    mob->skinb = 4;
    sfSprite_setPosition(mob->sprite, mob->vec);
    mob->life = 1500;
    sfFont *font = sfFont_createFromFile("ressources/font.ttf");
    mob->ltext = sfText_create();
    sfText_setFont(mob->ltext, font);
    sfText_setCharacterSize(mob->ltext, 33);
    sfText_setPosition(mob->ltext, mob->vec);
    return (0);
}