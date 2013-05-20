# Makefile produced by _mmakefile

CC = gcc
LDFLAGS =
CFLAGS = -std=gnu99 -Wall -ggdb

sources = quiz9.c reorder.c tailored_list.c

a.out : $(sources)
	$(CC) $(CFLAGS) $(LDFLAGS) $(sources)
