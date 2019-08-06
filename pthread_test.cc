#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#include <pthread.h>

int main()
{
	pthread_mutex_t mutex;
	pthread_mutex_init(&mutex, NULL);
	pthread_mutex_lock(&mutex);
	pthread_mutex_unlock(&mutex);

	return 0;
}
