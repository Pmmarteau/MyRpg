/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void reset_power(player_t *player)
{
	player->power->vec.y = -1000;
	player->power->vec.x = -1000;
	sfSprite_setPosition(player->power->sprite, player->power->vec);
}
void direction_power(player_t *player, hc_aka *GAME)
{
	if (player->power->vec.y != 0 && player->power->vec.x != 0){
		if (player->power->dir == 'Z')
			if (checkmoblife(GAME) != 1){
				player->power->vec.y = player->power->vec.y - 15;
			} else {
				reset_power(player);
			}
		if (player->power->dir == 'S')
			if (checkmoblife(GAME) != 1){
				player->power->vec.y = player->power->vec.y + 15;
			} else {
				reset_power(player);
			}
		if (player->power->dir == 'D')
			if (checkmoblife(GAME) != 1){
				player->power->vec.x = player->power->vec.x + 15;
			} else {
				reset_power(player);
			}
		if (player->power->dir == 'Q')
			if (checkmoblife(GAME) != 1){
				player->power->vec.x = player->power->vec.x - 15;
			} else {
				reset_power(player);
			}
		}
	
}

void power_mvm(player_t *player, hc_aka *GAME)
{
	if (player->power->boul == 1) {
		float seconds = 0;

		player->power->time = sfClock_getElapsedTime(player->power->clock);
		seconds = player->power->time.microseconds/10000.0;
		if (seconds > 3000 || player->power->vec.y <= 0 || player->power->vec.y >= 1000 
				|| player->power->vec.x <= 0 || 
				player->power->vec.x >= 1900) {
				player->power->boul = 0;
				reset_power(player);
		}
		else {
			direction_power(player, GAME);
			sfSprite_setTextureRect(player->power->sprite, player->power->skin);
			sfSprite_setPosition(player->power->sprite, player->power->vec);
			sfClock_restart(player->power->clock);
			}
		}
}

void power_event(player_t *player, hc_aka *GAME)
{
	if (player->power->boul == 0) {
	if ((GAME->event.type == sfEvtKeyPressed) && (GAME->event.key.code == sfKeyJ) && player->boul == 4) {
		player->power->skin = power_skin(1);
		player->power->vec.y = GAME->player->vec.y + 55;
		player->power->vec.x = GAME->player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'Z';
	}
	if ((GAME->event.type == sfEvtKeyPressed) && (GAME->event.key.code == sfKeyJ) && player->boul == 3) {
		player->power->skin = power_skin(3);
		player->power->vec.y = GAME->player->vec.y + 55;
		player->power->vec.x = GAME->player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'S';
	}
	if ((GAME->event.type == sfEvtKeyPressed) && (GAME->event.key.code == sfKeyJ) && player->boul == 2) {
		player->power->skin = power_skin(2);
		player->power->vec.y = GAME->player->vec.y + 55;
		player->power->vec.x = GAME->player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'Q';
	}
	if ((GAME->event.type == sfEvtKeyPressed) && (GAME->event.key.code == sfKeyJ) && player->boul == 1) {
		player->power->skin = power_skin(0);
		player->power->vec.y = GAME->player->vec.y + 55;
		player->power->vec.x = GAME->player->vec.x + 30;
		player->power->boul = 1;
		player->power->dir = 'D';
	}
	}
}