/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzurera- <mzurera-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:03:32 by mzurera-          #+#    #+#             */
/*   Updated: 2024/10/06 21:07:05 by mzurera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHILOSOPHER_TESTS_H
# define PHILOSOPHER_TESTS_H

#include "Unity/src/unity.h"
#include "../includes/philosophers.h"

void LockMutexTest(void);
void UnlockMutexTest(void);
void IsLockedMutexTest(void);
void AtomicIntegerMutexTest(void);

#endif /* PHILOSOPHER_TESTS_H */
