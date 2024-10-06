/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzurera- <mzurera-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:03:32 by mzurera-          #+#    #+#             */
/*   Updated: 2024/10/06 21:07:05 by mzurera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <asm-generic/errno-base.h>

#include "philosopher_tests.h"

void setUp(void)
{}

void tearDown(void)
{}

void LockMutex(void)
{
	t_mutex mutex;
	pthread_mutex_init(&mutex, NULL);
	mutex_set(mutex, MUTEX_LOCK);
	TEST_ASSERT_EQUAL_INT(EBUSY, pthread_mutex_trylock(&mutex));
}

void UnlockMutex(void)
{
	t_mutex mutex;
	pthread_mutex_init(&mutex, NULL);
	mutex_set(mutex, MUTEX_LOCK);
	mutex_set(mutex, MUTEX_UNLOCK);
	TEST_ASSERT_EQUAL_INT(0, pthread_mutex_trylock(&mutex));
}