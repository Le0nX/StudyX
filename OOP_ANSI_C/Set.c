#if ! defined MANY || MANY < 10
#define MANY 10
#endif

static int heap[MANY];
void *news (const void *type){

	int *p;
	for (p = heap + 1; p < heap + MANY; ++p)
		if (! *p)
			break;
	assert (p < heap + MANY);
	*p = MANY;
	return p;
}

void delete (void *_item){

	int *item = _item;

	if (item)
	{
		assert (item > heap && item < heap + MANY);
		*item = 0;
	}
}


