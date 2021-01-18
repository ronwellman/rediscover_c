# Basic Networking

## 2 Prevailing models
* OSI Model - Conceptual [wikipedia.org](https://en.wikipedia.org/wiki/OSI_model)
* TCP/IP Model - Actually Implemented [wikipedia.org](https://en.wikipedia.org/wiki/Internet_protocol_suite)

## Encapsulation
* {Data}
* {TCP Header{Data}}
* {IP Header{TCP Header{DATA}}
* {Ethernet Header{IP Header{TCP Header{Data}}}}

## Ethernet
* [wikipedia.org](https://en.wikipedia.org/wiki/Ethernet_frame)
* [wikipedia.org](https://en.wikipedia.org/wiki/MAC_address)
* MAC Address - identifies the physical network card
* One hop - device to device
* Switching

## IP
* [juniper.net](https://www.juniper.net/us/en/products-services/what-is/ipv4-vs-ipv6/)
* Logical Address - identifies a system
* IPv4 / IPv6
* Routing

### DNS
* [cloudflare.com](https://www.cloudflare.com/learning/dns/what-is-dns/)
* maps domain names to their IP address

## TCP / UDP
* [comparitech.com](https://www.comparitech.com/blog/vpn-privacy/udp-vs-tcp-ip/)
* Connection oriented vs Connectionless
* Uses port numbers to identify the service
* [iana.org](https://www.iana.org/assignments/service-names-port-numbers/service-names-port-numbers.xhtml)

## Wireshark
* Allows for the capture and analysis of network traffic
* [linuxhint.com](https://linuxhint.com/install_configure_wireshark_ubuntu/)

## Commands
* `ip addr` - display interface information
* `ip route` - display routing table
* `ss -plutn` - display all listening tcp and udp sockets

### Older Commands
* `sudo apt install net-tools`
* `ifconfig` - display interface information
* `route -n` - display routing table
* `netstat -antlp` - display all listening tcp sockets
