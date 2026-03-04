#include <time.h>

void Spin(int seconds) {
	time_t start =  time(NULL);
	while (time(NULL) - start < seconds) {
		//busy wait

	}





}
