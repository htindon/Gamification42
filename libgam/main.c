/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 08:46:53 by htindon           #+#    #+#             */
/*   Updated: 2014/02/04 05:15:32 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgam.h"

int		main()
{
	t_project_info	*my_project_info;

	my_project_info = (t_project_info *)malloc(sizeof(*my_project_info));
	my_project_info->project_name = "miaou";
	my_project_info->project_folder = "miaou";
	my_project_info->feeling = 5;

	getinfo(*my_project_info);
	return (0);
}
