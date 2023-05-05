/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsainton <nsainton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:08:14 by nsainton          #+#    #+#             */
/*   Updated: 2023/05/05 18:11:16 by nsainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "minitalk_int.h"

//Functions from file : data_sending.c
int				send_message(char *message);

//Functions from file : init.c
void			init_sigaction(t_sigaction *action, t_action handler);

void			init_message(t_message *message);

//Functions from file : error.c
noreturn void	error_exit(char *error);

//Functions from file : printing.c
void			print_message(t_str *msg);

//Functions from file : data_receiving.c
int				update_message(int sig);

int				update_byte(t_str *message, int sig);

int				check_client(pid_t	client);

#endif
