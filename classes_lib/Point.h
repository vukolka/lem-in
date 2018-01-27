#ifndef FDF_POINT_H
# define FDF_POINT_H

extern const void	*point;
void 				point_init();

typedef struct		s_point
{
	void 			*class;
	int 			x;
	int 			y;
	int 			z;
}					t_point;

#endif
