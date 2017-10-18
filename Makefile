all: battery

clean:
	rm battery libbattery.o

# CFLAGS=-Wall

libbattery.o: libbattery.c battery.h
	gcc $(CFLAGS) libbattery.c -o libbattery.o

battery: battery.c libbattery.c battery.h
	gcc $(CFLAGS) battery.c libbattery.c -lm -o battery
