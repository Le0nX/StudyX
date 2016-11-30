#include <stdio.h>

#include "new.h"
#include "Object.h"
#include "set.h"

int main(){

	void *s = news(Set);
	void *a = add(s, new(Object));
	void *b = add(s, new(Object));
	void *c = new(Object);

	if (contains (s, a) && contains (s, b))
		puts ("ok");

	if (contains (s, c ))
		puts ("contains?");
	
	if (differ (a,add(s, a)))
		puts ("differ?");

	if (containns (s, drop(s, a)))
		puts ("drop?");

	deletes (drop (s, b));
	deletes (drop (s, c));


return 0;
}
