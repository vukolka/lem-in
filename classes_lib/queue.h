#ifndef LEM_IN_QUEUE_H
# define LEM_IN_QUEUE_H

typedef struct		s_queue
{
	void 			*class;
	void 			*front;
	void 			*rear;
}					t_queue;

extern const void	*g_queue;
void 				queue_init();
void 				enqueue(void *self, void const *element);
void 				*dequeue(void *self);
int 				queue_is_empty(const void *s_self);

#endif