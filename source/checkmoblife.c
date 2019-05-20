/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

int is_collision3(power_t *power, player_t *mob)
{
    sfVector2f pos = sfSprite_getPosition(power->sprite);
    sfFloatRect hit_b = sfSprite_getGlobalBounds (mob->sprite);
    if (pos.x > hit_b.left && pos.x < hit_b.left + hit_b.width) {
        if (pos.y < hit_b.top - - hit_b.height && pos.y > hit_b.top) {
            mob->life = mob->life - 50;
            return (1);
        }
    }
    return (0);
}

int checklifelvl1(hc_aka *GAME)
{   
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie1) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie2) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie3) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie4) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie5) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie6) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie7) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie8) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie9) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_1->zombie10) != 0)
        return (1);

    if (is_collision3(GAME->player->power, GAME->lvl_1->boss) != 0)
        return (1);
    return (0);
}

int checklifelvl2(hc_aka *GAME)
{
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon1) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon2) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon3) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon4) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon5) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon6) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon7) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon8) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon9) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_2->dragon10) != 0)
        return (1);

    if (is_collision3(GAME->player->power, GAME->lvl_2->dragonboss) != 0)
        return (1);
    return (0);
}

int checklifelvl3(hc_aka *GAME)
{
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien1) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien2) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien3) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien4) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien5) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien6) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien7) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien8) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien9) != 0)
        return (1);
    if (is_collision3(GAME->player->power, GAME->lvl_3->alien10) != 0)
        return (1);

    if (is_collision3(GAME->player->power, GAME->lvl_3->helldog) != 0)
        return (1);
    return (0);
}

int checkmoblife(hc_aka *GAME)
{	
	int x = 0;
    if (level == 0)
        if (is_collision3(GAME->player->power, GAME->lvl_0->npc) != 0)
            return (1);
	if (GAME->level == 1)
		x = checklifelvl1(GAME);
	if (GAME->level == 2)
		x = checklifelvl2(GAME);
	if (GAME->level == 3)
		x = checklifelvl3(GAME);
    return (x);
}