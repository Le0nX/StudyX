/*
 * Training implementation of llst
 * from scratch in the mornig.  
 */ 

#include <stdio.h>
#include <stdlib.h>

typedef struct _lstElm{
	
	void 			*data;
	struct _lstElm 	*next;
	
} lstElm;


typedef struct _list{
	
	struct lstElm 	*head;
	struct lstElm 	*tail;
	
	void (*loc_func)(void *data);
	
	int 			 size;

} List;  


void  list_init(List *list, void *data)
{
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
	return;
}


lstElm* get_by_index(List *list, int index)
{
	if (index > list->size)
		return -1;
	
	for (int i=1; i <= list->size; i++){
		
		if (index == 1)
			return list->head;
		else if (index == list->size)
			return list->tail;
		else 
	}	
			
}


int insert_tail(List *list, void *data)
{
	lstElm *new_elm;
	if (new_elm = (lstElm *)malloc(sizeof(lstElm)) == NULL)
		return -1;
	
	new_elm->data = data;
	
	if (list->size == 0){
	
		list->tail = new_elm;
		list->head = new_elm;
		new_elm->next = NULL;
		
	} else {
		
		list->tail->next = new_elm;
		new_elm->next = NULL;
		
	}
	
	list->size++;
	return 0;
}


int main(){
	
	List list;
	
	
		
	printf("%i", (int)node->data);
	
	return 0;
}
