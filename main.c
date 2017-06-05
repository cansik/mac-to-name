#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

const char *colors[] = {"blue",
                        "red",
                        "green",
                        "purple",
                        "orange",
                        "yellow",
                        "gold",
                        "pink",
                        "white",
                        "black",
                        "silver",
                        "gray",
                        "teal",
                        "aqua",
                        "violet",
                        "brown"};


const char *vegetables[] = {"potato",
                           "sweetcorn",
                           "broccoli",
                           "tomato",
                           "carrot",
                           "bean",
                           "onion",
                           "pepper",
                           "pumpkin",
                           "lettuce",
                           "cabbage",
                           "celery",
                           "spinach",
                           "cucumber",
                           "leek",
                           "pea"};

int subStrToInt(char *str, int position)
{
    char hexNumber[2];
    hexNumber[0] = str[position];
    hexNumber[1] = '\0';
    return (int)strtol(hexNumber, NULL, 16);
}

const char * concatStr(char *str1, char *str2, char *str3)
{
    char * str = (char *) malloc(1 + strlen(str1)+ strlen(str2) + strlen(str3));
    strcpy(str, str1);
    strcat(str, str2);
    strcat(str, str3);
    return str;
}

const char * generateName(char *macAddress)
{
    int colorIndex = subStrToInt(macAddress, 12);
    int vegetableIndex = subStrToInt(macAddress, 13);

    return concatStr((char *) colors[colorIndex], "-", (char *) vegetables[vegetableIndex]);
}

int main() {
    char *macAddress = "60:01:94:20:A8:0F";

    printf("Mac To Name!\n");

    const char* name = generateName(macAddress);
    printf("%s", name);

    return 0;
}

