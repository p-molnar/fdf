
typedef struct coord_s
{
	int	x;
	int	y;
	int	z;
}	coord_t;



typedef struct map_s
{
	size_t	width;
	size_t	height;
	int		**coord_t;
} map_t;


int	parse_map(char *argv, map_t *map);
