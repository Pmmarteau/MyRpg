/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

hc_aka *alloc_power(hc_aka *GAME)
{
    hc_aka *temp = GAME;
    temp->lvl_1->zombie1->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie2->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie3->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie4->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie5->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie6->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie7->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie8->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie9->power = malloc(sizeof(power_t));
    temp->lvl_1->zombie10->power = malloc(sizeof(power_t));

    temp->lvl_1->boss->power = malloc(sizeof(power_t));

    temp->lvl_2->dragon1->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon2->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon3->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon4->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon5->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon6->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon7->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon8->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon9->power = malloc(sizeof(power_t));
    temp->lvl_2->dragon10->power = malloc(sizeof(power_t));

    temp->lvl_2->dragonboss->power = malloc(sizeof(power_t));

    temp->lvl_3->alien1->power = malloc(sizeof(power_t));
    temp->lvl_3->alien2->power = malloc(sizeof(power_t));
    temp->lvl_3->alien3->power = malloc(sizeof(power_t));
    temp->lvl_3->alien4->power = malloc(sizeof(power_t));
    temp->lvl_3->alien5->power = malloc(sizeof(power_t));
    temp->lvl_3->alien6->power = malloc(sizeof(power_t));
    temp->lvl_3->alien7->power = malloc(sizeof(power_t));
    temp->lvl_3->alien8->power = malloc(sizeof(power_t));
    temp->lvl_3->alien9->power = malloc(sizeof(power_t));
    temp->lvl_3->alien10->power = malloc(sizeof(power_t));

    temp->lvl_3->helldog->power = malloc(sizeof(power_t));
    return (temp);
}