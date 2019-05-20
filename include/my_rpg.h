/*
** EPITECH PROJECT, 2017
** my_rpg.h
** File description:
**
*/

#ifndef MY_RPG_
#define MY_RPG_

#include "my.h"
#include "get_next_line.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

typedef struct power_s {
    sfIntRect skin;
    sfVector2f vec;
    sfSprite *sprite;
    sfClock *clock;
    int save;
    int boul;
    char dir;
    sfTime time;
} power_t;

typedef struct player_s {
    sfIntRect skin;
    sfVector2f vec;
    sfSprite *sprite;
    sfClock *clock;
    sfTime time;
    sfText *ltext;
    int left;
    int skinb;
    int life;
    int exp;
    int boul;
    int inventory;
    int can_left;
    int can_right;
    int can_top;
    int can_bottom;
    power_t *power;
} player_t;

typedef struct lvl_1 {
    player_t *zombie1;
    player_t *zombie2;
    player_t *zombie3;
    player_t *zombie4;
    player_t *zombie5;
    player_t *zombie6;
    player_t *zombie7;
    player_t *zombie8;
    player_t *zombie9;
    player_t *zombie10;

    player_t *boss;
}lv1;

typedef struct lvl_2 {
    player_t *dragon1;
    player_t *dragon2;
    player_t *dragon3;
    player_t *dragon4;
    player_t *dragon5;
    player_t *dragon6;
    player_t *dragon7;
    player_t *dragon8;
    player_t *dragon9;
    player_t *dragon10;

    player_t *dragonboss;
}lv2;

typedef struct lvl_3 {
    player_t *alien1;
    player_t *alien2;
    player_t *alien3;
    player_t *alien4;
    player_t *alien5;
    player_t *alien6;
    player_t *alien7;
    player_t *alien8;
    player_t *alien9;
    player_t *alien10;

    player_t *helldog;
}lv3;

typedef struct lv0 {
    player_t *npc;
    player_t *princesse;
}lv0;


typedef struct runnercore_s {
    sfRenderWindow *window;
    sfEvent event;
    sfMusic *footstep1;
    sfMusic *footstep2;
    sfMusic *footstep3;
    sfFont *font;
    sfText* quest_str1;
    sfText* quest_str2;
    sfText* quest_str3;

    char *world;
    lv1 *lvl_1;
    lv2 *lvl_2;
    lv3 *lvl_3;
    lv0 *lvl_0;

    int map_x;
    int map_y;
    player_t *player;
    sfVector2i map_coord;
    sfRectangleShape *rmenu[6];
    char map[20][38];
    sfRectangleShape *rmap[20][38];
    int menu;
    int mapnb;
    int level;
    int tip;
} hc_aka;

void text(hc_aka *GAME, char *str);
void text2(hc_aka *GAME, char *str);
void text3(hc_aka *GAME, char *str);

void update_moblife(player_t *mob, hc_aka *GAME);

void princesse_advance(player_t *mob);
void move_legprincesse(player_t *mob);
sfIntRect princesse_skin(int i);
int init_princesse(player_t *mob);

void npc_advance(player_t *mob);
void move_legnpc(player_t *mob);
sfIntRect npc_skin(int i);
int init_npc(player_t *mob);

hc_aka *alloc_power(hc_aka *GAME);

sfIntRect helldogpower_skin(void);
int init_powerhelldog(player_t *mob);
sfIntRect alienpower_skin(void);
int init_poweralien(player_t *mob);
sfIntRect dragonbosspower_skin(int i);
int init_powerdragonboss(player_t *mob);
sfIntRect dragonpower_skin(int i);
int init_powerdragon(player_t *mob);
sfIntRect bosspower_skin(int i);
int init_powerboss(player_t *mob);
sfIntRect zombiepower_skin(void);
int init_powerzombie(player_t *mob);

void lvl_onepower(hc_aka *GAME);
void lvl_twopower(hc_aka *GAME);
void lvl_threepower(hc_aka *GAME);
hc_aka *rpg_coreinitpower(hc_aka *GAME);

int checklifelvl1(hc_aka *GAME);
int checklifelvl2(hc_aka *GAME);
int checklifelvl3(hc_aka *GAME);
int checkmoblife(hc_aka *GAME);

sfIntRect switch_skin(int nb, int i);

void reset_powermob(player_t *player, hc_aka *GAME);
void direction_powermob(player_t *player, hc_aka *GAME);
void power_mvmmob(player_t *player, hc_aka *GAME);
void power_eventmob(player_t *player, hc_aka *GAME);

sfIntRect power_skin(int i);
int init_power(player_t *mob);

int is_collision3(power_t *power, player_t *mob);
int is_collision2(sfVector2f pos, sfFloatRect hit_b);
void reset_power(player_t *player);
void direction_power(player_t *player, hc_aka *GAME);
void power_mvm(player_t *player, hc_aka *GAME);
void power_event(player_t *player, hc_aka *GAME);

void zombie_advance(player_t *mob);
void move_legzombie(player_t *mob);
sfIntRect zombie_skin(int i);
int init_zombie(player_t *mob, int x, int y);

void helldog_advance(player_t *mob);
void move_leghelldog(player_t *mob);
sfIntRect helldog_skin(int i);
int init_helldog(player_t *mob, int x, int y);

void dragonboss_advance(player_t *mob);
void move_legdragonboss(player_t *mob);
sfIntRect dragonboss_skin(int i);
int init_dragonboss(player_t *mob, int x, int y);

void dragon_advance(player_t *mob);
void move_legdragon(player_t *mob);
sfIntRect dragon_skin(int i);
int init_dragon(player_t *mob, int x, int y);

void boss_advance(player_t *mob);
void move_legboss(player_t *mob);
sfIntRect boss_skin(int i);
int init_boss(player_t *mob, int x, int y);

void alien_advance(player_t *mob);
void move_legalien(player_t *mob);
sfIntRect alien_skin(int i);
int init_alien(player_t *mob, int x, int y);

void check(hc_aka *GAME, player_t *mob);
void check_lvl1(hc_aka *GAME);
void check_lvl2(hc_aka *GAME);
void check_lvl3(hc_aka *GAME);

void play_lvl1(hc_aka *GAME);
void play_lvl2(hc_aka *GAME);
void play_lvl3(hc_aka *GAME);

void lvl_one(hc_aka *GAME);
void lvl_two(hc_aka *GAME);
void lvl_three(hc_aka *GAME);

void create_retry(hc_aka *GAME);

sfIntRect player_skin(int i);
int init_player(player_t *mob);

int is_solid_block(char block);
int my_round(float nbr);
void can_player_left(hc_aka *GAME);
void can_player_right(hc_aka *GAME);
void can_player_top(hc_aka *GAME);
void can_player_bottom(hc_aka *GAME);
int world_chang(int x, hc_aka *GAME);

void change_pos(hc_aka *GAME);
void collision_map(hc_aka *GAME);
void map_out(player_t *player, hc_aka *GAME);

int is_collision(sfVector2i pos, sfFloatRect hit_b);
void menu_win(hc_aka *GAME);
void menu_lose(hc_aka *GAME);
void menu_event(hc_aka *GAME);
void create_back(hc_aka *GAME);
void create_back2(hc_aka *GAME);

void create_about(hc_aka *GAME);
void create_play(hc_aka *GAME);
void create_exit(hc_aka *GAME);
void main_menu(hc_aka *GAME);

void lvl_switch(hc_aka *GAME);
void text_sprite(hc_aka *GAME);

void switch_lvl(hc_aka *GAME);
void menu_switch(hc_aka *GAME);

void move_leg(hc_aka *GAME);
void skin_tex(hc_aka *GAME);
void player_move(player_t *player, hc_aka *GAME);
void detect_event(hc_aka *GAME);

char *add_char(char *str, char content);
sfRectangleShape *textuchar(hc_aka *GAME, sfRectangleShape *sprite, char content);
void create_spritemap(int x, int y, hc_aka *GAME, char content);
void file_to_map(hc_aka *GAME, char *name);
void load_map(hc_aka *GAME);
void refresh_map(hc_aka *GAME);
void update_map(hc_aka *GAME);
hc_aka *rpg_coreinit(hc_aka *GAME);
hc_aka *create_core(void);
int main(void);

#endif
