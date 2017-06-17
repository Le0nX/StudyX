#include <stdlib.h>
#include <string.h>

#include "dlist.h"


void dlist_init(DList *list, void (*destroy)(void *data))
{
	list->size = 0;
	list->head = NULL;
	list->tail = NULL;
	
	list->destroy = destroy;
	
	return;
}


