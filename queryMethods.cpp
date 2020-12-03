#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char filePath []= "/public/coen320/dataset.csv";
double fuelConsumption[94382];
double engineSpeed[94382];
double engineCoolantTemperature[94382];
double currentGear[94382];
double transmissionOilTemperature[94382];
double vehicleSpeed[94382];
double accelerationSpeedLongitudinal[94382];
double indicationOfBreakSwitch[94382];

void mydelay(int number_of_seconds)
{
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time 
    clock_t start_time = clock();

    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds)
        ;
}

char* getfield(char* line, int column)
{
    char* tok;
    for (tok = strtok(line, ","); tok && *tok; tok = strtok(NULL, ",\n"))
    {
        if (!--column){
                return tok;
        }           
    }
    return NULL;
}

void creatArrayOfFuelConsumptionValues() {

    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			fuelConsumption[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);		
}

void creatArrayOfEngineSpeedValues() {

    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			engineSpeed[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);

}
void creatArrayOfEngineCoolantTemperatureValues() {

    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			engineCoolantTemperature[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);
}


void creatArrayOfCurrentGearValues() {

    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			currentGear[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);
}
void creatArrayOfTransmissionOilTemperatureValues() {
    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			transmissionOilTemperature[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);
}
void creatArrayOfVehicleSpeedValues() {

    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			vehicleSpeed[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);
}
void creatArrayOfAccelerationSpeedLongitudinalValues() {

    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			accelerationSpeedLongitudinal[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);
}
void creatArrayOfIndicationOfBreakSwitchValues() {

    char line[1024];
    char *tmp = strdup(line);
    int location = 0;
    int count = 0;
    double myval;
    double tempHolder;
    char myvalues[94382];
    char buffer[1024];
    FILE *fp;


	fp = fopen(filePath, "r");
	if(fp != NULL){
		printf("Inside if \n");
		while(fgets(buffer, 1024, fp) != NULL){
			if(sscanf(buffer, "%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%*lf,%lf", &myval) != 1){
				printf("scan failed\n");			
			}
			indicationOfBreakSwitch[count] = myval;
			//printf("%f\n",myval);
			count++;
			//printf("count value %d\n", count);
			//mydelay(10);
			
		}
	}	
		 fclose(fp);
}

int main()
{
	int i = 0;
    

    creatArrayOfFuelConsumptionValues();
    creatArrayOfEngineSpeedValues();
    creatArrayOfEngineCoolantTemperatureValues();
    creatArrayOfCurrentGearValues();
    creatArrayOfTransmissionOilTemperatureValues();
    creatArrayOfVehicleSpeedValues();
    creatArrayOfAccelerationSpeedLongitudinalValues();
    creatArrayOfIndicationOfBreakSwitchValues();
    printf("Main output FC %f \n", fuelConsumption[100]);
    printf("Main output FC %f \n", engineSpeed[100]);
    printf("Main output FC %f \n", engineCoolantTemperature[100]);
    printf("Main output FC %f \n", currentGear[100]);
    printf("Main output FC %f \n", transmissionOilTemperature[100]);
    printf("Main output FC %f \n", vehicleSpeed[100]);
    printf("Main output FC %f \n", accelerationSpeedLongitudinal[100]);
    printf("Main output FC %f \n", indicationOfBreakSwitch[100]);
/*    for (i; i < 100; i++) {
        printf("Main output CG %f \n", indicationOfBreakSwitch[i]);
        printf("Main count %d \n", i);
    }*/
  //***** Code to get individual row and column ********//
    //*************************************************//
  /*  char line[1024];
    int countVal = 0;
    int rowNumberInd;
    while (fgets(line, 1024, stream))
    {        
        char* tmp = strdup(line);
        double desiredvalue;
        desiredvalue = atof(getfield(tmp, 1, 1));
        //printf("My field is col 3: %s\n", getfield(tmp,1 , 1));
        if (countVal == rowNumberInd) {
            printf("Hope it Works this time %f", desiredvalue);
        }
        countVal++;
        free(tmp);
    }
   */

    return 0;
}
