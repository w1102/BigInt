//
//  main.c
//  BigInt
//
//  Created by Trần Quang on 17/07/2021.
//

#include <stdio.h>
#include "BigInt.h"

int main(int argc, const char * argv[]) {
    int len, fact;
    BigInt* result = BigInt_construct_with_size(1, 2600);
    scanf("%d", &len);
    for (int i = 0; i < len; i++)   {
        scanf("%d", &fact);
        if (fact <= 1) printf("1\n");
        else {
            for (int i = 2; i <= fact; i++)
                BigInt_multiply_int(result, i);
            BigInt_print(result);
            BigInt_assign_int(result, 1);
            printf("\n");
        }
        
    }
    BigInt_free(result);
    return 0;
}
