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

#include "../../cursor.h"
#include "../../hex.h"
#include "../../base64.h"
#include "../../aes.h"
#include "../../sha256.h"
#include "../../random.h"
#include "../../proof.h"

#include "../../async/async.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
