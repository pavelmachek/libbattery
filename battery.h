
struct battery {
};

struct battery_info {
};

enum battery_state {
  POWERSTATE_NO_BATTERY,
  POWERSTATE_UNKNOWN,
  POWERSTATE_CHARGING,
  POWERSTATE_ON_BATTERY,
  POWERSTATE_CHARGED,
};

struct battery *battery_init(void);
double battery_percent(struct battery *b);

