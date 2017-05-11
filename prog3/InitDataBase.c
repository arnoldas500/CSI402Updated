//  email: akurbanovas@albany.edu
//  Student ID #: AK983513
//  Copyright © 2016 arnoldas kurbanovas. All rights reserved.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

//struct data * dataConfig(FILE *);

struct dataBase * dataConfig(FILE * configFile){
// fflush(stdout);
 // puts("inside dataconfig");
 // fflush(stdout);
    int num, i;
    num=i=0;
    char * schemaName;
    //tableName = (char **) malloc(sizeof(char *)*num);
    FILE * tableFiles;
    struct dataBase * newData;
    newData = (struct dataBase*) malloc(sizeof(struct dataBase));
    struct table ** tableArray;
    //tableArray = (struct table**) malloc(sizeof(struct table*)*numTables);
    fscanf(configFile, "%d", &num); //num is nnumber of tables, first number passed in
    tableArray = (struct table**) malloc(sizeof(struct table*)*num);
    char** tableName = (char **) malloc(sizeof(char *)*num);
    
    for(i=0 ; i<num ; i++){
      tableName[i] = malloc(sizeof(char)*16);
    }//ends for loop

    fflush(stdout);
    puts("before for loop in dataconfig");
    
    for(i=0; num>i ; i++){
  //    fflush(stdout);
    //  puts("inside for loop");
        fscanf(configFile, "%s", tableName[i]);
        schemaName = malloc(strlen(tableName[i])+7);
	sprintf(schemaName, "%s.table", tableName[i]);
	tableFiles=fopen(schemaName,"r");
	//tableFiles = fopen(strcat(tableName[i],".table"), "r");
	//fflush(stdout);
	//puts("in for loop about to run tableconfig");
        tableArray[i] = tableCongif(tableFiles, tableName[i]);
	free(schemaName);
    } //ends for loop
    newData->numTables = num; 
    newData->tableArray = tableArray;
    
  //  printf("number of tables ****** : %d\n", newData->numTables);
    
    //checkPoint();
   // printf("%s\t%d\n",__FILE__,__LINE__);
  //  fflush(stdout);
    //    printf("values for numRows %d\n", (((newData->tableArray)[0])->numRows));
    //checkPoint();
   // printf("%s\t%d\n",__FILE__,__LINE__);
    fflush(stdout);
    //  printf("values for numRows %d\n" ,(((newData->tableArray)[1])->numRows));
    //  printf("values for numCols %d\n", (((newData->tableArray)[0])->numCols));
    //  printf("values for rowSize %d\n", (((newData->tableArray)[0])->rowSize));
    //        printf("value for rowarray size %d\n", (((((newData->tableArray)[0])->rowArray)[0])->numAttributs));
    //  printf("value for att name  %s\n", (((((((newData->tableArray)[0])->rowArray)[0])->attrArray)[0])->name));
    // printf("value for hsadghasdg name  %s\n", (((((((newData->tableArray)[0])->rowArray)[0])->attrArray)[0])->str));
    //  printf("value for att name  %s\n", (((((((newData->tableArray)[0])->rowArray)[0])->attrArray)[1])->name));
    // printf("value for att name  %s\n", (((((((newData->tableArray)[0])->rowArray)[0])->attrArray)[2])->name));
    // printf("value for att name  %s\n", (((((((newData->tableArray)[0])->rowArray)[0])->attrArray)[3])->name));
    // printf("value for att name  %s\n", (((((((newData->tableArray)[0])->rowArray)[0])->attrArray)[4])->name));
    // printf("value for rowarray size %d\n", (((((newData->tableArray)[0])->rowArray)[0])->size));
    //  printf("values for tableName %s\n", (((newData->tableArray)[0])->tableName));
    
    //   printf("value for checkheck  %s\n",(((((((newData->tableArray)[1])->rowArray)[1])->attrArray)[0])->name));
	//  puts("vales " + newData->tableArray[2]->numRows);
      //     printf("values for tableName %s\n",newData->tableArray[0]->rowArray[0]->attrArray[0]->str);
    return newData;
    
}
