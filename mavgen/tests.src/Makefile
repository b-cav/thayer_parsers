# Makefile for generating MAVLink messages
# using the official headers library

# -Wno-address-of-packed-member to suppress a common
# "potential alignment" error
CFLAGS=-Wall -pedantic -Wno-address-of-packed-member -std=c11 
GCC=gcc

MAV1=../../mavgen/c_library_v1
MAV2=../../mavgen/c_library_v2

all: gen_v1_HB gen_v2_HB

gen_v1_HB: gen_v1_HB.c
		$(GCC) $(CFLAGS) -I$(MAV1) -o $@ $<

gen_v2_HB: gen_v2_HB.c
		$(GCC) $(CFLAGS) -I$(MAV2) -o $@ $<

clean:
				rm -f *~ *.o *.txt gen_v1_HB gen_v2_HB

