
#ifndef MICRO_PAINT_H
# define MICRO_PAINT_H

# include <unistd.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_paint
{
	char	type;
	float	x;
	float	y;
	float	w;
	float	h;
	char	c;
}	t_paint;

typedef struct s_dflt
{
	int		w;
	int		h;
	char	c;
	char	**paint;
}	t_dflt;

void	ft_free(t_dflt *dflt);

#endif

