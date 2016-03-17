#ifndef LIBWALLY_BIP_39_H
#define LIBWALLY_BIP_39_H

#include <stdint.h>
#include <stdlib.h>

struct words;

/**
 * Get the default (English) word list.
 */
const struct words *bip39_default_wordlist(void);

/**
 * Get the default word list for language @lang.
 */
const struct words *bip39_get_wordlist(const char* lang);


/** Valid entropy lengths */
#define BIP39_ENTROPY_LEN_128 16u
#define BIP39_ENTROPY_LEN_160 20u
#define BIP39_ENTROPY_LEN_192 24u
#define BIP39_ENTROPY_LEN_224 28u
#define BIP39_ENTROPY_LEN_256 32u

/**
 * Generate a mnemonic sentence from the entropy in @bytes.
 */
char* bip39_mnemonic_from_bytes(const struct words *w, const uint8_t *bytes, size_t len);

#if 0
/**
 * Generate a random 12 word mnemonic sentence with 128 bits of entropy.
 */
char* bip39_mnemonic_128();

/**
 * Generate a random 24 word mnemonic sentence with 256 bits of entropy.
 */
char* bip39_mnemonic_256();
#endif

#endif /* LIBWALLY_BIP_39_H */
