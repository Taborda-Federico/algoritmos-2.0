

#ifndef _STRFUNCS_H_
#define _STRCFUNCS_H_

#include <stdbool.h>

#define STRCFUNCS_MAX 100





bool string_is_symmetric(const char *str);

size_t string_length(const char *str);      

char *string_filter(const char *str, char c);




#endif