//  Makefile.c
//  Created by Mary Nwosu on 12/7/22.

matrix: matrix.c
    gcc -std=c99 -pthread -o matrix matrix.c -I.
