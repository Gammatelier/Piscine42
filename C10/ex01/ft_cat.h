/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 10:51:11 by dhers             #+#    #+#             */
/*   Updated: 2020/08/25 11:00:32 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>

int		ft_strlen(char *str);
void	ft_display_file(int file_desc);
void	ft_putstr(char *str);
void	ft_read_keyboard(void);
void	ft_errno(char *program_name, char *filename, int is_directory);

#endif
