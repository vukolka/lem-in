#include "String.h"
#include "Point.h"
#include "MLXConn.h"
#include "Image.h"
#include "Linked_list.h"

void 	make_classes()
{
	llist_init();
	string_init();
	point_init();
	mlx_initiate();
	init_image();
}