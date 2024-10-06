/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzurera- <mzurera-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:03:32 by mzurera-          #+#    #+#             */
/*   Updated: 2024/10/06 21:07:05 by mzurera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <asm-generic/errno-base.h>
# include <pthread.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "colors.h"

// --- TYPES --- //

typedef pthread_mutex_t	t_mutex;

// --- ENUMS --- //



// --- MUTEX --- //

void	mutex_lock(pthread_mutex_t *mutex);
void	mutex_unlock(pthread_mutex_t *mutex);
bool	mutex_islocked(pthread_mutex_t *mutex);


// --- ERROR --- //

void	exit_error(const char *error);

// --- MAIN --- //

int	main(int argc, char **argv);

#endif /* PHILOSOPHERS_H */
