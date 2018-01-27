#ifndef CLASSES_LIB_STRING_H
#define CLASSES_LIB_STRING_H

extern const void	*string;
void			string_init();

typedef	struct		s_string
{
	const void		*class;
	char			*text;
}					t_string;

#endif //CLASSES_LIB_STRING_H
