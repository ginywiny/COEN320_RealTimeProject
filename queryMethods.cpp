#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include <ctype.h>
#include <string>

char filePath []= "C:\\Users\\Ruslan\\source\\repos\\coen320\\dataTrue.csv";
double fuelConsumption[94380];
double engineSpeed[94380];
double engineCoolantTemperature[94380];
double currentGear[94380];
double transmissionOilTemperature[94380];
double vehicleSpeed[94380];
double accelerationSpeedLongitudinal[94380];
double indicationOfBreakSwitch[94380];

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
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");

    while (fgets(line, 1024, stream)) {
        char* tmp = strdup(line);
        if (count <= 1) {
            tempHolder = atof(getfield(tmp, 1));
            count++;
        }
        else{
            fuelConsumption[location] = atof(getfield(tmp, 1));
            location++;
        }
        free(tmp);
    }    
    fclose(stream);
}
void creatArrayOfEngineSpeedValues() {

    char line[1024];
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");


    while (fgets(line, 1024, stream)) {
        char* tmp = strdup(line);
        if (count <= 1) {
            tempHolder = atof(getfield(tmp, 13));
            count++;
        }
        else {
            engineSpeed[location] = atof(getfield(tmp, 13));
            location++;
        }
        free(tmp);
    }
    fclose(stream);
}
void creatArrayOfEngineCoolantTemperatureValues() {

    char line[2048];
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");


    while (fgets(line, 2048, stream)) {
        char* tmp = strdup(line);
        if (count <= 0) {
            tempHolder = atof(getfield(tmp, 18));
            count++;
        }
        else {
            engineCoolantTemperature[location] = atof(getfield(tmp, 18));
            location++;
        }
        free(tmp);
    }
    fclose(stream);
}
void creatArrayOfCurrentGearValues() {

    char line[2048];
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");


    while (fgets(line, 2048, stream)) {
        char* tmp = strdup(line);
        if (count <= 0) {
            tempHolder = atof(getfield(tmp, 34));
            count++;
        }
        else {
            currentGear[location] = atof(getfield(tmp, 34));
            location++;
        }
        free(tmp);
    }
    fclose(stream);
}
void creatArrayOfTransmissionOilTemperatureValues() {

    char line[2048];
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");


    while (fgets(line, 2048, stream)) {
        char* tmp = strdup(line);
        if (count <= 0) {
            tempHolder = atof(getfield(tmp, 35));
            count++;
        }
        else {
            transmissionOilTemperature[location] = atof(getfield(tmp, 35));
            location++;
        }
        free(tmp);
    }
    fclose(stream);
}
void creatArrayOfVehicleSpeedValues() {

    char line[2048];
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");


    while (fgets(line, 2048, stream)) {
        char* tmp = strdup(line);
        if (count <=0) {
            tempHolder = atof(getfield(tmp, 44));
            count++;
        }
        else {
            vehicleSpeed[location] = atof(getfield(tmp, 44));
            location++;
        }
        free(tmp);
    }
    fclose(stream);
}
void creatArrayOfAccelerationSpeedLongitudinalValues() {

    char line[2048];
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");


    while (fgets(line, 2048, stream)) {
        char* tmp = strdup(line);
        if (count <= 0) {
            tempHolder = atof(getfield(tmp, 45));
            count++;
        }
        else {
            accelerationSpeedLongitudinal[location] = atof(getfield(tmp, 45));
            location++;
        }
        free(tmp);
    }
    fclose(stream);
}
void creatArrayOfIndicationOfBreakSwitchValues() {

    char line[2048];
    int location = 0;
    int count = 0;
    double tempHolder;
    FILE* stream = fopen(filePath, "r");


    while (fgets(line, 2048, stream)) {
        char* tmp = strdup(line);
        if (count <= 0) {
            tempHolder = atof(getfield(tmp, 46));
            count++;
        }
        else {
            indicationOfBreakSwitch[location] = atof(getfield(tmp, 46));
            location++;
        }
        free(tmp);
    }
    fclose(stream);
}

int main()
{


    creatArrayOfFuelConsumptionValues();
    creatArrayOfEngineSpeedValues();
    creatArrayOfEngineCoolantTemperatureValues();
    creatArrayOfCurrentGearValues();
    creatArrayOfTransmissionOilTemperatureValues();
    creatArrayOfVehicleSpeedValues();
    creatArrayOfAccelerationSpeedLongitudinalValues();
    creatArrayOfIndicationOfBreakSwitchValues();

    for (int j = 0; j < 100; j++) {
        printf("Main output EC %f \n", engineSpeed[j]);
    }

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