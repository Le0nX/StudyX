#include <stdio.h>
#include <time.h>

int main(){

time_t start, end;

start = time(NULL);

for (unsigned long long i=0; i < 1000000000; i++);

end = time(NULL);

printf("%f\n", (difftime(end, start)/60));


return 0;
}