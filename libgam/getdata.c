/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getdata.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 07:45:48 by htindon           #+#    #+#             */
/*   Updated: 2014/02/03 18:52:06 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgam.h"

int			getprogress(char *progress)
{
	int		index;
	int		remaining;

	index = (progress[9] - 48) * 100 + (progress[10] - 48) * 10 + progress[11] - 48;
	progress = index;
	remaining = 100 - index;
	printf("Step %c \n Sub-step %c, item %c \n", progress[1], progress[4], progress[7]);
	printf("Progression : %c%c%c%% \n", progress[9], progress[10], progress[11]);
	while (index)
	{
		ft_putchar('=');
		index--;
	}
	while (remaining)
	{
		ft_putchar('#');
		remaining--;
	}
	ft_putchar('\n');
	getreward(reward, 
			return (0);
			}

			int			getreward(char *reward)
			{
			int		index;
			int		start;

			index = (reward[0] - 48) * 100 + (reward[1] - 48) * 10 + reward[2] - 48;
			start = 4;
			if 
			}

			int			getdata(char *filename)
			{
			char	*progress;
			char	*reward;

			progress = (char *)malloc(INPUT_SIZE_MAX);
			progress = readfile(filename);
			if (progress)
				getprogress(progress);
			else
				printf("Sorry, no input data for progress\n");

			reward = (char *)malloc(INPUT_SIZE_MAX);
			reward = readfile(filename);
			if (reward)
			{
				getreward(reward);
				if (i >= reward_index)
				{
					printf("You won : ");
					while (j > 0)
					{
						printf("%c", reward[j]);
						j++;
					}
					printf("\n");
				}
			}
			else
				printf("Sorry, no input data for rewards\n");
			return (0);
			}
