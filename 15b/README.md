# Networking in C
[Beej's Guide to Network Programming](https://beej.us/guide/bgnet/)

[geeksforgeeks.org](https://www.geeksforgeeks.org/socket-programming-cc/)

###  Endianness - byte order
[wikipedia.org](https://en.wikipedia.org/wiki/Endianness)

### Convert values between host and network byte order
* htons/htonl - host to network
* ntohs/ntohl - network to host

### Convert addresses
* `inet_pton` - IPv4/IPv6 string to binary
* `inet_ntop` - binary to IPv4/IPv6 string

### getaddrinfo
* combines dns lookups, service lookups, and address packing in one call
* supports both IPv4 and IPv6

### Address Structs
```c
struct sockaddr_in {
	sa_family_t    sin_family; /* address family: AF_INET */
	in_port_t      sin_port;   /* port in network byte order */
	struct in_addr sin_addr;   /* internet address */
};

/* Internet address. */
struct in_addr {
	uint32_t       s_addr;     /* address in network byte order */
};

struct sockaddr_in6 {
	sa_family_t     sin6_family;   /* AF_INET6 */
	in_port_t       sin6_port;     /* port number */
	uint32_t        sin6_flowinfo; /* IPv6 flow information */
	struct in6_addr sin6_addr;     /* IPv6 address */
	uint32_t        sin6_scope_id; /* Scope ID (new in 2.4) */
};

struct in6_addr {
	unsigned char   s6_addr[16];   /* IPv6 address */
};

/* Structure large enough to hold any socket address (with the historical
   exception of AF_UNIX).  */
struct sockaddr_storage {
	sa_family_t ss_family; /* address family */
	
	/* all this is padding, implementation specific, ignore it: */
	char __ss_pad1[_SS_PAD1SIZE];
	int64_t	__ss_align;
	char __ss_pad2[_SS_PAD2SIZE];
};
```

## Client
* Create a Socket
* Connect to Server
* send/recv, sendto/recvfrom - TCP vs UDP send and receive
* close

## Server
* Create a Socket - create an endpoint for communication
* Set socket options - 
	* `man 2 setsockopt`
	* `man 7 socket`, `man 7 ip`, `man 7 ipv6`
	* `man 5 protocols`
	* *SO_REUSEADDR*, *SO_REUSEPORT*
* Bind Socket - bind an address to a socket
* Listen - listen for connections on a socket
* Accept - accept a connection on a socket
* send/recv, sendto/recvfrom - TCP vs UDP send and receive
* close 

### Everything is a file
You may see write and read used with network sockets just like when writing to and reading from files.

> If the socket argument refers to a socket and the flags argument is 0, the send() function is equivalent to write().
