//
//  textToBinary.c
//  program2
//
//  email: akurbanovas@albany.edu
//  Created by arnoldas kurbanovas on 2/24/16.
//  Copyright © 2016 arnoldas kurbanovas. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXLEN 255

//textToBinary();
void textToBinary(FILE * input_File, FILE * output_File){
    
    char strIn[MAXLEN+1];
    //    char * newStr = malloc(255); //temp
//    unsigned char length;
    unsigned int num_str;
 //   unsigned int minLen ;
 //   unsigned int maxLen = 0;
 //   unsigned int maxInt = 0;
 //   unsigned int minInt ;
    // printf("pre while");

    //continue until end of file flag is reached
    while(fscanf(input_File, "%s\t%u", &strIn, &num_str) != EOF){
      //        printf("%s\t%u\n",strIn, num_str);
        unsigned char len = strlen(strIn);
        //  fwrite(const void *, size_t size, size_t num_str, input_File)
	fwrite(&len, sizeof(unsigned char), (size_t) 1, output_File);
	fwrite(&strIn, sizeof(unsigned char), len, output_File); 
        fwrite(&num_str, sizeof(unsigned int), (size_t)1, output_File);
        // textToBinary();
    }
}    

