/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzurera- <mzurera-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:03:32 by mzurera-          #+#    #+#             */
/*   Updated: 2024/10/06 21:07:05 by mzurera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philosophers.h"

void	mutex_lock(pthread_mutex_t *mutex)
{
	if (pthread_mutex_lock(mutex) != 0)
		exit_error("[ABORT]: Unable to lock mutex.");
}

void	mutex_unlock(pthread_mutex_t *mutex)
{
	if (pthread_mutex_unlock(mutex) != 0)
		exit_error("[ABORT]: Unable to unlock mutex.");
}

bool	mutex_islocked(pthread_mutex_t *mutex)
{
	if (pthread_mutex_trylock(mutex) == 0)
		return (0);
	if (pthread_mutex_trylock(mutex) == EBUSY)
		return (1);
	exit_error("[ABORT]: Unable to check mutex status.");
	return (1);
}

int	atomic_integer_get(pthread_mutex_t *mutex, const int *i)
{
	int	n;

	mutex_lock(mutex);
	n = *i;
	mutex_unlock(mutex);
	return (n);
}

void	atomic_integer_set(pthread_mutex_t *mutex, int *i, const int value)
{

	mutex_lock(mutex);
	if (value == -1)
		(*i)++;
	else
		*i = value;
	mutex_unlock(mutex);
}