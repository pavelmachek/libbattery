/* -*- linux-c -*-
 *
 * Distribute under LGPL v2 or (at your option) later version.
 *
 * Copyright (C) 2017 Pavel Machek <pavel@ucw.cz>
 */

#include <stdbool.h>

enum battery_state {
  NO_BATTERY,
  UNKNOWN,
  CHARGING,
  ON_BATTERY,
  FULL,
};

struct battery {
};

struct battery_info {
	struct battery *battery;

	enum battery_state state;
	double fraction; /* 1 == 100% */
	double seconds;
	double voltage;	/* In volts */
	double current; /* In amperes, < 0 charging, > 0 discharging */
	double temperature; /* Degrees celsius */
};


struct battery *battery_init(void);
double battery_fraction(struct battery *b);

bool battery_fill_info(struct battery_info *i);
void battery_dump(struct battery_info *i);


