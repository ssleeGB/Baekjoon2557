//
//  main.c
//  Hello World
//
//  Created by 이승섭 on 2018. 11. 1..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int len;
    
    FILE *fp;
    fp=fopen("input.txt", "r");
    

    fscanf(fp, "%d", &len);
    printf("%d", len);
    return 0;
}
