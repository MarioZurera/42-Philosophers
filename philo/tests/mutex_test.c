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

void LockMutexTest(void)
{
	t_mutex m;
	t_mutex *mutex = &m;
	pthread_mutex_init(mutex, NULL);
	mutex_lock(mutex);
	TEST_ASSERT_EQUAL_INT(EBUSY, pthread_mutex_trylock(mutex));
}

void UnlockMutexTest(void)
{
	t_mutex m;
	t_mutex *mutex = &m;
	pthread_mutex_init(mutex, NULL);
	mutex_lock(mutex);
	mutex_unlock(mutex);
	TEST_ASSERT_EQUAL_INT(0, pthread_mutex_trylock(mutex));
}

void IsLockedMutexTest(void)
{
	t_mutex m;
	t_mutex *mutex = &m;
	pthread_mutex_init(mutex, NULL);
	mutex_lock(mutex);
	TEST_ASSERT_TRUE(mutex_islocked(mutex));
	mutex_unlock(mutex);
	TEST_ASSERT_FALSE(mutex_islocked(mutex));
}

// void AtomicIntegerMutexTest(void)
// {
// 	t_mutex m;
// 	t_mutex *mutex = &m;
// 	int i = 0;
//
// 	pthread_mutex_init(mutex, NULL);
// 	atomic_integer_set(mutex, &i, 10);
// 	TEST_ASSERT_TRUE(mutex_islocked(mutex));
// 	mutex_unlock(mutex);
// 	TEST_ASSERT_FALSE(mutex_islocked(mutex));
//
// 	pthread_t thread;
//
//
//
// 	pthread_create(&thread, NULL, lock_mutex_thread, (void *)mutex);
// 	pthread_join(thread, NULL);
//
// 	atomic_integer_set(mutex, &i, 10);
// 	TEST_ASSERT_TRUE(mutex_islocked(mutex));
//
// 	// Unlock the mutex and test if it is unlocked
// 	mutex_unlock(mutex);
// 	TEST_ASSERT_FALSE(mutex_islocked(mutex));
// }