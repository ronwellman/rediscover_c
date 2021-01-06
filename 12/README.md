# Working with Files
* open
* close
* read
* write
* stat
* file position

## File Descriptor vs File Pointer
[stackoverflow.com](https://stackoverflow.com/questions/2423628/whats-the-difference-between-a-file-descriptor-and-file-pointer)

## Open
* FILE *fopen(const char *pathname, const char *mode);
* int open(const char *pathname, int flags);

## Close
* int fclose(FILE *stream);
* int close(int fd);

## Read
* size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
* ssize_t read(int fd, void *buf, size_t count);

## Write
* size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
* ssize_t write(int fd, const void *buf, size_t count);

## Stat
* int fstat(int fd, struct stat *statbuf);
* int stat(const char *pathname, struct stat *statbuf);

### Determine File Type and Mode
* `man 2 stat`
* `man 7 inode`

## File Position
* int fseek(FILE *stream, long offset, int whence);
* long ftell(FILE *stream);
