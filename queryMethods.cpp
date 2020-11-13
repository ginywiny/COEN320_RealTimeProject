#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include <ctype.h>
#include <string>



void delay(int number_of_seconds)
{
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time 
    clock_t start_time = clock();

    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds)
        ;
}

const char* getfield(char* line, int num, int delayValue)
{
    const char* tok;
    for (tok = strtok(line, ","); tok && *tok; tok = strtok(NULL, ",\n"))
    {
        if (!--num){
            delay(delayValue);
            return tok;
        }           
    }
    return NULL;
}

int main()
{
    FILE* stream = fopen("C:\\Users\\Ruslan\\source\\repos\\coen320\\data.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        
        char* tmp = strdup(line);
       
        
        //if (!(isdigit(getfield(tmp, 3)))) {
        //    printf("My field is zero: \n", 0);
        //}else
            printf("My field is: %s\n", getfield(tmp, 3, 1));

        free(tmp);

        /**
        char* token;
        token = strtok(line, ",");
        while (token != NULL) {
            printf("%s", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
                **/
    }



    return 0;
}