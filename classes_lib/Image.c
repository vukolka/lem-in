#include <ft_printf.h>
#include "new.h"
#include "Image.h"
#include "mlx.h"
#include "MLXConn.h"

static t_class	hidden_image;
const void		*g_image;

static void		*image_ctor(void *s_self, va_list *ap)
{
	t_image	*self;
	t_mlx_class *mlx;

	mlx = get_mlx(NULL);
	self = s_self;
	self->width = va_arg(*ap, int);
	self->height = va_arg(*ap, int);
	self->image_ptr = mlx_new_image(mlx->conn,
									self->width,
									self->height);
	self->endian = 0;
	self->size_line = 0;
	self->bits = 32;
	self->image_data = (int *)mlx_get_data_addr(self->image_ptr,
												&self->bits,
												&self->size_line,
												&self->endian);
	if (!self->image_ptr || !self->image_data)
		return (NULL);
	return (self);
}

static void		*image_dtor(void *s_self)
{
	t_image *self;

	self = s_self;
	mlx_destroy_image(get_mlx(NULL), self->image_ptr);
	return (self);
}

void			*get_mlx(void *s_mlx)
{
	static void *mlx;
	if (s_mlx)
		mlx = s_mlx;
	return (mlx);
}

void			init_image()
{
	hidden_image.ctor = image_ctor;
	hidden_image.dtor = image_dtor;
	hidden_image.clone = NULL;
	hidden_image.differ = NULL;
	hidden_image.size = sizeof(t_image);
	g_image = &hidden_image;
}
