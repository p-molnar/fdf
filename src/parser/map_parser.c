#include <map.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <string.h>

#define BUFF_SIZE 128

bool includes_char(char *s, char c) {
	for (int i = 0, l = strlen(s); i < l; i++) {
		if (s[i] == c) { return true; }
	}
	return false;
}

int	get_first_line_length(char *argv) {
	FILE *fptr = fopen(argv, "r");

	if (!fptr) {perror(strerror(errno));}

	static char tmp[BUFF_SIZE];
	int len = 0;

	while (fgets(tmp, BUFF_SIZE, fptr)) {
		if (includes_char(tmp, '\n')) {
			len += strlen(tmp);
			break ;
		}
	}
	return len;
}


int	parse_map(char *path, map_t *map) {
	(void) map;
	int len = get_first_line_length(path);
	return 1;
}
