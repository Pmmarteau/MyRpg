/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include "../include/my_rpg.h"

int is_solid_block(char block)
{
	if (block == 'M')
		return (1);
	if (block == 'P')
		return (2);
	return (0);
}

int my_round(float nbr)
{
	int result = 0;
	nbr = nbr / 50;
	result = (int)(nbr);
	return (result);
}

void can_player_left(hc_aka *GAME)
{
	int x_pos = my_round(GAME->player->vec.x);
	int y_pos = my_round(GAME->player->vec.y);
	int x = is_solid_block(GAME->map[y_pos + 1][x_pos]);
	if (x == 1)
		GAME->player->can_left = 0;
	else
		GAME->player->can_left = 1;
	world_chang(x, GAME);
}

void can_player_right(hc_aka *GAME)
{
	int x_pos = my_round(GAME->player->vec.x);
	int y_pos = my_round(GAME->player->vec.y);
	int x = is_solid_block(GAME->map[y_pos + 1][x_pos + 2]);
	if (x == 1)
		GAME->player->can_right = 0;
	else
		GAME->player->can_right = 1;
	world_chang(x, GAME);
}

void can_player_top(hc_aka *GAME)
{
	int x_pos = my_round(GAME->player->vec.x);
	int y_pos = my_round(GAME->player->vec.y - 50);
	int x = is_solid_block(GAME->map[y_pos + 1][x_pos + 1]);
	if (x == 1)
		GAME->player->can_top = 0;
	else
		GAME->player->can_top = 1;
	world_chang(x, GAME);
}

void can_player_bottom(hc_aka *GAME)
{
	int x_pos = my_round(GAME->player->vec.x);
	int y_pos = my_round(GAME->player->vec.y + 100);
	int x = is_solid_block(GAME->map[y_pos][x_pos + 1]);
	if (x == 1)
		GAME->player->can_bottom = 0;
	else
		GAME->player->can_bottom = 1;
	world_chang(x, GAME);
}

int world_chang(int x, hc_aka *GAME)
{
	if (x == 2 && GAME->level == 0) {
		GAME->world = "world1";
		GAME->map_x = 0;
		GAME->map_y = 0;
		GAME->level = 1;
        update_map(GAME);
        return (0);
    }
	if (x == 2 && GAME->level == 1) {
		GAME->world = "world2";
		GAME->map_x = 0;
		GAME->map_y = 0;
        GAME->level = 2;
        update_map(GAME);
        return (0);
    }
	if (x == 2 && GAME->level == 2) {
		GAME->world = "world3";
		GAME->map_x = 0;
		GAME->map_y = 0;
		GAME->level = 3;
        update_map(GAME);
        return (0);
    }
    return (0);
}