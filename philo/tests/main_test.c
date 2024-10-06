/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzurera- <mzurera-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:03:32 by mzurera-          #+#    #+#             */
/*   Updated: 2024/10/06 21:07:05 by mzurera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher_tests.h"

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	UNITY_BEGIN();

	// --- MUTEX --- //
	RUN_TEST(LockMutexTest);
	RUN_TEST(UnlockMutexTest);
	RUN_TEST(IsLockedMutexTest);
	RUN_TEST(AtomicIntegerMutexTest);

	return UNITY_END();
	return 0;
}
