/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

void move_leg(hc_aka *GAME)
{
    int seconds = 0;
    GAME->player->time = sfClock_getElapsedTime(GAME->player->clock);
    seconds = GAME->player->time.microseconds/10000.0;

    if (seconds > 30) {
        if (GAME->player->skin.left >= 580) {
            GAME->player->skin.left = 290;
            sfClock_restart(GAME->player->clock);
        } else {
            GAME->player->skin.left = GAME->player->skin.left + 100;
            sfClock_restart(GAME->player->clock);
        }
    }
}

void skin_tex(hc_aka *GAME)
{
    //play_walksound(GAME);
    sfSprite_setTextureRect(GAME->player->sprite, GAME->player->skin);
    sfSprite_setPosition(GAME->player->sprite, GAME->player->vec);
}

void player_move(player_t *player, hc_aka *GAME)
{
    sfVector2f player_pos = sfSprite_getPosition(GAME->player->sprite);

    //map_out(player,GAME);
    if (GAME->event.type == sfEvtKeyPressed &&
    (GAME->event.key.code == sfKeyRight)) {
        if(GAME->player->can_right != 0)
            player->vec.x = player->vec.x + 50;
        player->skin = player_skin(2);
        player->boul = 1;
        skin_tex(GAME);
        move_leg(GAME);
        collision_map(GAME);
    }
    if (GAME->event.type == sfEvtKeyPressed &&
    (GAME->event.key.code == sfKeyLeft)) {
        if(GAME->player->can_left != 0)
            player->vec.x = player->vec.x - 50;
        player->skin = player_skin(1);
        player->boul = 2;
        skin_tex(GAME);
        move_leg(GAME);
        collision_map(GAME);
    }
    if (GAME->event.type == sfEvtKeyPressed &&
    (GAME->event.key.code == sfKeyDown)) {
        if(GAME->player->can_bottom != 0)
            player->vec.y = player->vec.y + 50;
        player->skin = player_skin(0);
        player->boul = 3;
        skin_tex(GAME);
        move_leg(GAME);
        collision_map(GAME);
    }
    if (GAME->event.type == sfEvtKeyPressed &&
    (GAME->event.key.code == sfKeyUp)) {
        if(GAME->player->can_top != 0)
            player->vec.y = player->vec.y - 50;
        player->skin = player_skin(3);
        player->boul = 4;
        skin_tex(GAME);
        move_leg(GAME);
        collision_map(GAME);
    }
}

void detect_event(hc_aka *GAME)
{
	if (GAME->event.type == sfEvtClosed)
		sfRenderWindow_close(GAME->window);
	player_move(GAME->player, GAME);
    power_event(GAME->player, GAME);
}