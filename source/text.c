/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void text(hc_aka *GAME, char *str)
{
	GAME->quest_str1 = sfText_create();
	sfVector2f position2 = {0, 560};

	sfText_setString(GAME->quest_str1, str);
	sfText_setFont(GAME->quest_str1, GAME->font);
	sfText_setCharacterSize(GAME->quest_str1, 20);
	sfText_setPosition(GAME->quest_str1,position2);
}

void text1(hc_aka *GAME, char *str)
{
	GAME->quest_str2 = sfText_create();
	sfVector2f position2 = {0, 560};

	sfText_setString(GAME->quest_str2, str);
	sfText_setFont(GAME->quest_str2, GAME->font);
	sfText_setCharacterSize(GAME->quest_str2, 20);
	sfText_setPosition(GAME->quest_str2,position2);
}

void text2(hc_aka *GAME, char *str)
{
	GAME->quest_str3 = sfText_create();
	sfVector2f position2 = {0, 560};

	sfText_setString(GAME->quest_str3, str);
	sfText_setFont(GAME->quest_str3, GAME->font);
	sfText_setCharacterSize(GAME->quest_str3, 20);
	sfText_setPosition(GAME->quest_str3,position2);
}