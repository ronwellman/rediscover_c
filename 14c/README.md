# Multi-Threading
* lightweight processes
* shared address space
* must protect shared resources

## pthread
* `man 7 pthreads`
* POSIX thread

## Most used Commands
* `pthread_create` - Create a new thread
* `pthread_join` - Wait for a thread to finish

### Mutex
* Mutual Exclusion for protecting a thread
* `pthread_mutex_init` - Initialize a mutex
* `pthread_mutex_lock` - Lock a mutex
* `pthread_mutex_unlock` - Unlock a mutex
* `pthread_mutex_destroy` - Destroy a mutex

### Additional manpages
* `sudo apt install glibc-doc manpages-posix-dev`
