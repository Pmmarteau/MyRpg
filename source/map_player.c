/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void change_pos(hc_aka *GAME)
{
    if (GAME->player->vec.x < 0) {
        GAME->mapnb = GAME->mapnb + 1;
        GAME->map_y = GAME->map_y - 1;
        GAME->player->vec.x = 1900;
        update_map(GAME);
    }
    if (GAME->player->vec.x > 1900) {
        GAME->mapnb = GAME->mapnb + 1;
        GAME->map_y = GAME->map_y + 1;
        GAME->player->vec.x = 0;
        update_map(GAME);
    }
    if (GAME->player->vec.y < 0) {
        GAME->mapnb = GAME->mapnb + 1;
        GAME->map_x = GAME->map_x + 1;
        GAME->player->vec.y = 1000;
        update_map(GAME);
    }
    if (GAME->player->vec.y > 1000) {
        GAME->mapnb = GAME->mapnb + 1;
        GAME->map_x = GAME->map_x - 1;
        GAME->player->vec.y = 0;
        update_map(GAME);
    }
}

void collision_map(hc_aka *GAME)
{
    if (GAME->player->vec.x < 0 || GAME->player->vec.x >= 1900 ||
    GAME->player->vec.y < 0 || GAME->player->vec.y >= 1000)
        change_pos(GAME);
    can_player_left(GAME);
    can_player_right(GAME);
    can_player_top(GAME);
    can_player_bottom(GAME);
}

void map_out(player_t *player, hc_aka *GAME) 
{
	if (player->vec.y > 1000) {
		GAME->map_coord.y = GAME->map_y + 1;
		update_map(GAME);
	}
	if (player->vec.y < 0) {
		GAME->map_coord.y = GAME->map_y - 1;
		update_map(GAME);
	}
	if (player->vec.x > 1900) {
		GAME->map_coord.x = GAME->map_x + 1;
		update_map(GAME);
	}
	if (player->vec.x < 0) {
		GAME->map_coord.x = GAME->map_x - 1;
		update_map(GAME);
	}
}