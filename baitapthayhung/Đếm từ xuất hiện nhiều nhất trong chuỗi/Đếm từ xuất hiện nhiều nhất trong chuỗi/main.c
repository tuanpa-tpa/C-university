//
//  main.c
//  Đếm từ xuất hiện nhiều nhất trong chuỗi
//
//  Created by PAT on 6/3/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 1000

struct list {
    char name[50];
    int index;
};

void dem(char *word, struct list *words,int *size){
    int check =0;
    for (int i = 0; i< *size ; i++){
        if (strcmp(word, words[i].name) == 0){
            check = 1;
            words[i].index ++;
            break;
        }
    }
    if (check == 0){
        strcpy(words[*size].name,word);
        words[*size].index = 1;
        (*size)++;
    }
    
}

int main(int argc, const char * argv[]) {
    char string[max];
    fgets(string,sizeof(string),stdin);
    int i =0;
    while (string[i]) {
        string[i] = tolower(string[i]);
        i++;
    }
    struct list words[100];
    char *word;
    int size = 0;
    const char* sep = " \n\t,.;:";
    for (word = strtok(string,sep);word != NULL;word = strtok(NULL, sep)){
        dem(word,words,&size);
    }
    int max1 = 1,j=0;
    for (int i = 0; i< size; i++){
        if (words[i].index > max1){
            max1 = words[i].index;
            j = i;
        }
    }
    printf("%s %d",words[j].name,max1);
    return 0;
}
