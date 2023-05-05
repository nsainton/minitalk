/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_int.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:08:32 by nsainton          #+#    #+#             */
/*   Updated: 2023/05/05 18:10:27 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_INT_H
# define MINITALK_INT_H
# define ON SIGUSR1
# define OFF SIGUSR2
# define CONTINUE SIGUSR1
# define RECEIVED SIGUSR2
# define DONE 1000
# define ERROR SIGUSR1
# ifdef MSG_SIZE
#  undef MSG_SIZE
# endif
# define MSG_SIZE 100
# include "libft.h"
# include <signal.h>
# include <stdnoreturn.h>

typedef char unsigned		t_byte;

typedef void				(*t_action)(int, siginfo_t *, void *);

typedef struct sigaction	t_sigaction;

typedef struct s_message
{
	t_byte	*str;
	size_t	len;
	t_byte	length;
	t_uint	bytes;
}				t_message;

typedef struct s_string_infos
{
	t_byte	*str;
	t_uint	bit;
	t_byte	len_sent;
	size_t	len;
}				t_string_infos;

#endif
