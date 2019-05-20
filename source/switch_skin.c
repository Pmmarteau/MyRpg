/*
** EPITECH PROJECT, 2017
** rpg
** File description:
** Cc
*/

#include "../include/my_rpg.h"

sfIntRect switch_skin(int nb, int i)
{
    sfIntRect result;
    if (nb == 0)
        result = zombiepower_skin();
    if (nb == 1)
        result = bosspower_skin(i);
    if (nb == 2)
        result = dragonpower_skin(i);
    if (nb == 3)
        result = dragonbosspower_skin(i);
    if (nb == 4)
        result = alienpower_skin();
    if (nb == 5)
        result = helldogpower_skin();
    
    return (result);
}