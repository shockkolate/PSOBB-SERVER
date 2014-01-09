//Defines from login_server.c

#define MAX_SIMULTANEOUS_CONNECTIONS 6
#define LOGIN_COMPILED_MAX_CONNECTIONS 300
#define SHIP_COMPILED_MAX_CONNECTIONS 50
#define MAX_EB02 800000
#define SERVER_VERSION "0.048"
#define MAX_ACCOUNTS 2000
#define MAX_DRESS_FLAGS 500
#define DRESS_FLAG_EXPIRY 7200

const char *PSO_CLIENT_VER_STRING = "TethVer12510";
#define PSO_CLIENT_VER 0x41

//#define USEADDR_ANY
#define DEBUG_OUTPUT
#define TCP_BUFFER_SIZE 64000
#define PACKET_BUFFER_SIZE ( TCP_BUFFER_SIZE * 16 )

#define SEND_PACKET_03 0x00 // Done
#define SEND_PACKET_E6 0x01 // Done
#define SEND_PACKET_E2 0x02 // Done
#define SEND_PACKET_E5 0x03 // Done
#define SEND_PACKET_E8 0x04 // Done
#define SEND_PACKET_DC 0x05 // Done
#define SEND_PACKET_EB 0x06 // Done
#define SEND_PACKET_E4 0x07 // Done
#define SEND_PACKET_B1 0x08
#define SEND_PACKET_A0 0x09
#define RECEIVE_PACKET_93 0x0A
#define MAX_SENDCHECK 0x0B

#define CLASS_HUMAR 0x00
#define CLASS_HUNEWEARL 0x01
#define CLASS_HUCAST 0x02
#define CLASS_RAMAR 0x03
#define CLASS_RACAST 0x04
#define CLASS_RACASEAL 0x05
#define CLASS_FOMARL 0x06
#define CLASS_FONEWM 0x07
#define CLASS_FONEWEARL 0x08
#define CLASS_HUCASEAL 0x09
#define CLASS_FOMAR 0x0A
#define CLASS_RAMARL 0x0B
#define CLASS_MAX 0x0C

/* String sent to server to retrieve IP address. */

char* HTTP_REQ = "GET http://www.pioneer2.net/remote.php HTTP/1.0\r\n\r\n\r\n";

/* Populated by load_config_file(): */

char mySQL_Host[255] = { 0 };
char mySQL_Username[255] = { 0 };
char mySQL_Password[255] = { 0 };
char mySQL_Database[255] = { 0 };
unsigned int mySQL_Port;
unsigned char serverIP[4];
unsigned short serverPort;
int override_on = 0;
unsigned char overrideIP[4];
unsigned short serverMaxConnections;
unsigned short serverMaxShips;
unsigned serverNumConnections = 0;
unsigned serverConnectionList[LOGIN_COMPILED_MAX_CONNECTIONS];
unsigned serverNumShips = 0;
unsigned serverShipList[SHIP_COMPILED_MAX_CONNECTIONS];
unsigned quest_numallows;
unsigned* quest_allow;
unsigned max_ship_keys = 0;

/* Rare table structure */

unsigned rt_tables_ep1[0x200 * 10 * 4] = { 0 };
unsigned rt_tables_ep2[0x200 * 10 * 4] = { 0 };
unsigned rt_tables_ep4[0x200 * 10 * 4] = { 0 };

unsigned mob_rate[8]; // rare appearance rate

char Welcome_Message[255] = { 0 };
time_t servertime;

struct timeval select_timeout = {
	0,
	5000
};