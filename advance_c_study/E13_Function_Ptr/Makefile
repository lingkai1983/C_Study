default: add lesson_2 lesson_3

add: add.c
	gcc $^ -o $@

# try to use generic rule to deal with lesson_2
%: %.c
	gcc $^ -o $@

clean:
	rm add lesson_2 lesson_3