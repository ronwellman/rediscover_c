# Concurrency
* How can a single computer do multiple things at once?
* [wikipedia.org](https://en.wikipedia.org/wiki/Concurrency_(computer_science)

> In computer science, concurrency is the ability of different parts or units of a program, algorithm, or problem to be executed out-of-order or in partial order, without affecting the final outcome. This allows for parallel execution of the concurrent units, which can significantly improve overall speed of the execution in multi-processor and multi-core systems.

### Additional Resources
* [lmu.edu](https://cs.lmu.edu/~ray/notes/introconcurrency/)
* [cmu.edu](https://insights.sei.cmu.edu/sei_blog/2017/08/multicore-processing.html)

## Forking and Threading
[geekride.com](http://www.geekride.com/fork-forking-vs-threading-thread-linux-kernel/)

### Fork
* new process
* copy over all variable into a new memory space
* parent and child processes operate independantly

### Thread
![This Tall](./thistall.jpg)

* lightweight process
* threads share the same memory
* requires controls for shared resources

### Mutex (lock)
[wikipedia.org](https://en.wikipedia.org/wiki/Lock_(computer_science)
* **Mutual Exclusion** is a variable that holds the state of a lock
* only one thread can hold the lock at a time
* the lock must be release for other threads to attempt to lock it
* by forcing threads to use a lock before using a shared resource, you hopefully avoid **race conditions** where two threads update a shared resource at the exact same time
* if not implemented properly, can result in **deadlock** where all the threads are stuck waiting
