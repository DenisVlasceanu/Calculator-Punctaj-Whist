# Copyright 2021 Vlasceanu Denis-Mihai

start:
	gcc -Wall -Wextra -o CPW-V1_1 CPW-V1_1.c
	./CPW-V1_1

run:
	./CPW-V1_1

clean:
	 rm -r CPW-V1_1

.PHONY: clean
