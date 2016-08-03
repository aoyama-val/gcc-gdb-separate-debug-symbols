all: a.out a.debug a.stripped

a.out: a.c
	gcc -g -o $@ $<

a.debug:
	objcopy --only-keep-debug a.out a.debug

a.stripped:
	cp a.out a.stripped && strip a.stripped
