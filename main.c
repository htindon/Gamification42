/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 05:16:17 by htindon           #+#    #+#             */
/*   Updated: 2014/02/03 18:52:10 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INPUT_SIZE_MAX 1000

#include "libgam/libgam.h"
/*
   int			getreward(int index)
   {
   char	*reward;
   int		reward_index;
   int		i;
   FILE	*file = NULL;

   reward_index = 0;
   i = 4;
   reward = readfile("files/rewards.txt");
   reward_index = (reward[0] - 48) * 100 + (reward[1] - 48) * 10 + (reward[2] - 48);
   if (index >= reward_index)
   {
   printf("You won : ");
   while (i > 0)
   {
   printf("%c", reward[i]);
   i++;
   }
   printf("\n");
   }
   else
   printf("Not yet but soon enough :) \n");
   return (0);
   }*/

int			main(void)
{
	char	*filename;

	filename = "files/progress.txt";
	getdata(filename);
	return (0);
}
