#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sched.h>
#include <pthread.h>
#include <poll.h>
#include <sys/sysinfo.h>
#include <getopt.h>
#include <sys/file.h>
#include <locale.h>

#include <string>
#include <iterator>
#include <map>
using namespace std;

#include <linux/if_ether.h>
#include <linux/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <arpa/inet.h>

#include <pcap/pcap.h>
#include <libnet.h>

#define _DBG_LOG true

#if _DBG_LOG
	#define dbg_printf(args...) printf(args)
#else
	#define dbg_printf(args...)
#endif

// implements in utils.cpp
void dumpHex(const u_char *packet, int len);
bool getLocalMac(const char *intf, uint8_t *mac);
map<uint32_t, string> enumInterfaces();
