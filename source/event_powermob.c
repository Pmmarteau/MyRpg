/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

int is_collision2(sfVector2f pos, sfFloatRect hit_b)
{
    if (pos.x > hit_b.left && pos.x < hit_b.left + hit_b.width) {
        if (pos.y < hit_b.top - - hit_b.height && pos.y > hit_b.top) {
            return (1);
        }
    }
    return (0);
}

void reset_powermob(player_t *player, hc_aka *GAME)
{
	player->power->vec.y = -1000;
	player->power->vec.x = -1000;
	GAME->player->life = GAME->player->life - 10;
	sfSprite_setPosition(player->power->sprite, player->power->vec);
}

void direction_powermob(player_t *player, hc_aka *GAME)
{
	sfVector2f power_pos = sfSprite_getPosition(player->power->sprite);
	sfFloatRect hit_b = sfSprite_getGlobalBounds (GAME->player->sprite);
	if (player->power->vec.y != 0 && player->power->vec.x != 0){
		if (player->power->dir == 'Z')
			if (is_collision2(power_pos, hit_b) != 1){
				player->power->vec.y = player->power->vec.y - 15;
			} else {
				reset_powermob(player, GAME);
			}
		if (player->power->dir == 'S')
			if (is_collision2(power_pos, hit_b) != 1){
				player->power->vec.y = player->power->vec.y + 15;
			} else {
				reset_powermob(player, GAME);
			}
		if (player->power->dir == 'D')
			if (is_collision2(power_pos, hit_b) != 1){
				player->power->vec.x = player->power->vec.x + 15;
			} else {
				reset_powermob(player, GAME);
			}
		if (player->power->dir == 'Q')
			if (is_collision2(power_pos, hit_b) != 1){
				player->power->vec.x = player->power->vec.x - 15;
			} else {
				reset_powermob(player, GAME);
			}
		}
	
}

void power_mvmmob(player_t *player, hc_aka *GAME)
{
	if (player->power->boul == 1) {
		float seconds = 0;

		player->power->time = sfClock_getElapsedTime(player->power->clock);
		seconds = player->power->time.microseconds/10000.0;
		if (seconds > 3000 || player->power->vec.y <= 0 || player->power->vec.y >= 1000 
				|| player->power->vec.x <= 0 || 
				player->power->vec.x >= 1900) {
				player->power->boul = 0;
				reset_powermob(player, GAME);
		}
		else {
			direction_powermob(player, GAME);
			sfSprite_setTextureRect(player->power->sprite, player->power->skin);
			sfSprite_setPosition(player->power->sprite, player->power->vec);
			sfClock_restart(player->power->clock);
			}
		}
}

void power_eventmob(player_t *player, hc_aka *GAME)
{
	if (player->power->boul == 0) {
	if (player->boul == 4) {
		player->power->skin = switch_skin(player->skinb, 1);
		player->power->vec.y = player->vec.y + 55;
		player->power->vec.x = player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'Z';
	}
	if (player->boul == 3) {
		player->power->skin = switch_skin(player->skinb, 3);
		player->power->vec.y = player->vec.y + 55;
		player->power->vec.x = player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'S';
	}
	if (player->boul == 2) {
		player->power->skin = switch_skin(player->skinb, 2);
		player->power->vec.y = player->vec.y + 55;
		player->power->vec.x = player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'Q';
	}
	if (player->boul == 1) {
		player->power->skin = switch_skin(player->skinb, 0);
		player->power->vec.y = player->vec.y + 55;
		player->power->vec.x = player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'D';
	}
	}
}