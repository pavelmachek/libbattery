/* -*- linux-c -*-
 *
 * Distribute under LGPL v2 or (at your option) later version.
 *
 * Copyright (C) 2017 Pavel Machek <pavel@ucw.cz>
 */

#include <stdio.h>

#include "battery.h"

int main(int argc, char *argv[])
{
	struct battery *b = battery_init();
	double perc = battery_percent(b);

	printf("Battery %.0f %%\n", perc * 100);
		
	return 0;
}
