/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getinfo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htindon <htindon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 04:32:09 by htindon           #+#    #+#             */
/*   Updated: 2014/02/04 05:37:34 by htindon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgam.h"

t_project_info		*getinfo(t_project_info *project_status)
	/*
	 * This function is given the actual project status and will update it.
	 * This function will ask the operator to input information :
	 * - What project are you working on ? -> the name shall be re-used
	 * - In which folder ? -> folder and sub-folders will be considered
	 * - How do you feel ? -> Scale 1 to 5
	 * Getinfo will ask three questions and store them in three variables :
	 * - char *project_name
	 * - char *project_folder
	 * - int feeling
	 */
{
	char 			*project;
	char			*folder;
	int				feeling;

	feeling = 0;
	project = (char *)malloc(255);
	folder = (char *)malloc(255);

	ft_putstr("What project are you working on?\n");
	scanf("%s", project);
	if (project != project_status->project_name)
		project_status->project_name = project;
	ft_putstr("In which folder is it located?\n");
	scanf("%s", folder);
	if (folder != project_status->project_folder)
		project_status->project_folder = folder;
	ft_putstr("How do you feel (0 = very bad, 5 = very good)\n");
	scanf("%d", &feeling);
	if (feeling != project_status->feeling)
		project_status->feeling = feeling;
	free(project);
	free(folder);

	return (project_status);
}
