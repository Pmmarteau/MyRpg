/*
** EPITECH PROJECT, 2017
** my_rpg.h
** File description:
**
*/

#include "../include/my_rpg.h"

void file_to_map(hc_aka *GAME, char *name)
{
	char *line = NULL;
	int fd = open(name, O_RDONLY);
	int x = 0;
	int y = 0;

	while (line = get_next_line(fd)) {
		x = 0;
		while (x != 38) {
			GAME->map[y][x] = line[x];
			x = x + 1 ;
		}
		GAME->map[y][x] = '\0';
		y = y + 1;
	}
}

void load_map(hc_aka *GAME)
{
	int y = 0;
	int x = 0;

	while (y != 20) {
		while (x != 38) {
			create_spritemap(x, y, GAME, GAME->map[y][x]);
			x = x + 1;
		}
		x = 0;
		y = y + 1;
	}
}

void refresh_map(hc_aka *GAME)
{
	sfVector2f pos;
	for (int y = 0; y != 20; y++) {
		for (int x = 0; x != 38; x++) {
		  	   sfRenderWindow_drawRectangleShape(GAME->window, GAME->rmap[y][x], NULL);
		}
	}
}


void update_map(hc_aka *GAME)
{
	char *map_path = my_strcat("ressources/", GAME->world);
	map_path = my_strcat(map_path, "/map/map");
	map_path = add_char(map_path, GAME->map_x + 48);
	map_path = add_char(map_path, '.');
	map_path = add_char(map_path, GAME->map_y + 48);
	map_path = my_strcat(map_path, ".txt");
	file_to_map(GAME, map_path);
	load_map(GAME);
}