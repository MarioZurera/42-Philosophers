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

# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>

// --- TYPES --- //

typedef pthread_mutex_t t_mutex;

// --- ENUMS --- //

typedef enum e_mutex
{
	MUTEX_LOCK,
	MUTEX_UNLOCK
}	t_mutex_state;

// --- MAIN --- //

int	main(int argc, char **argv);

#endif /* PHILOSOPHERS_H */
