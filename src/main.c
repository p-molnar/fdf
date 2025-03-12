#include <stdio.h>
#include <stdlib.h>
#include <map.h>

int main(int argc, char *argv[argc])
{
	if (argc != 2) {
		printf("invalid argument count, expected 2, got %i\n", argc);
		printf("usage: fdf <map>\n");
		return EXIT_FAILURE;	
	}
	map_t	map;
	if (parse_map(argv[1], &map)){
		return EXIT_FAILURE;	
	}

	return EXIT_SUCCESS;
}