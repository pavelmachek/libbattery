all: battery

clean:
	rm battery libbattery.o

# CFLAGS=-Wall

libbattery.o: libbattery.c
	gcc $(CFLAGS) libbattery.c -o libbattery.o

battery: battery.c libbattery.c
	gcc $(CFLAGS) battery.c libbattery.c -o battery
