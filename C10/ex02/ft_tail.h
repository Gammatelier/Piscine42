/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhers <dhers@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 07:21:15 by dhers             #+#    #+#             */
/*   Updated: 2020/08/26 07:25:12 by dhers            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_header(char *filename, int argc);
int		ft_read_size(char *str);
int		ft_length_bytes(int file_desc);
void	ft_display_bytes(int file_desc, int nb);
void	ft_tail_bytes(char *argv, int nb, int argc);
void	ft_read_keyboard(int nb);
void	ft_is_illegal(char *program_name, char *filename);
void	ft_errno(char *program_name, char *filename);
int		ft_bad_arguments(int argc, char *program_name, char *filename);

#endif
