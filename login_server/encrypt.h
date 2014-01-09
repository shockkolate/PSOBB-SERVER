//Encryption Stuff from login_server.c

/* encryption stuff */

void prepare_key(unsigned char *keydata, unsigned len, struct rc4_key *key);

PSO_CRYPT* cipher_ptr;

void encryptcopy(BANANA* client, const unsigned char* src, unsigned size);
void decryptcopy(unsigned char* dest, const unsigned char* src, unsigned size);
void compressShipPacket(ORANGE* ship, unsigned char* src, unsigned long src_size);
void decompressShipPacket(ORANGE* ship, unsigned char* dest, unsigned char* src);