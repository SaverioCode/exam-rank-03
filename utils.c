
#include "micro_paint.h"

void	ft_free(t_dflt *dflt)
{
	int	y;

	y = 0;
	while (dflt->paint[y])
	{
		free(dflt->paint[y]);
		y++;
	}
	free(dflt->paint);
}

