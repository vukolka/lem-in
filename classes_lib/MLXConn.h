#ifndef FDF_MLXCONN_H
#define FDF_MLXCONN_H

extern const void *g_mlx_class;

typedef struct	s_mlx_class
{
	void		*conn;
	void		*winx;
	int 		x;
	int 		y;
	char 		*title;
}				t_mlx_class;

void			mlx_initiate();



#endif //FDF_MLXCONN_H
