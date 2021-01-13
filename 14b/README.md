# Forking
* split a process into different processes
* each process gets a copy of the memory at time of fork

## Resources
* [geeksforgeeks.org](https://www.geeksforgeeks.org/fork-system-call/)

## Fork
`man fork`

* the PID of the child process is returned in the parent
* 0 is returned in the child
* on failure, -1 is returned in the parent
