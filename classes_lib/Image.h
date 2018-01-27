#ifndef FDF_IMAGE_H
#define FDF_IMAGE_H

extern const void	*g_image;
void				image_init();

typedef struct		s_image
{
	void			*image_ptr;
	int				width;
	int 			height;
	int				endian;
	int				size_line;
	int 			bits;
	int				*image_data;
}					t_image;

void			init_image();
void			*get_mlx(void *s_mlx);

#endif //FDF_IMAGE_H
