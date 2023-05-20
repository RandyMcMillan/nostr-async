//
//  main.c
//  nostr-async
//
//  Created by git on 5/19/23.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include <inttypes.h>
#include <unistd.h>

#include "secp256k1.h"
#include "secp256k1_ecdh.h"
#include "secp256k1_schnorrsig.h"

#include "../../nostril/cursor.h"
#include "../../nostril/hex.h"
#include "../../nostril/base64.h"
#include "../../nostril/aes.h"
#include "../../nostril/sha256.h"
#include "../../nostril/random.h"
#include "../../nostril/proof.h"

#include "../../async.h/async/async.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
