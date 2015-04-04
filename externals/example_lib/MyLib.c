/**
 * MyLib implementation.
 */
#include <stdio.h>
#include <stdlib.h>
#include "MyLib.h"

/**
 * Returns a reference to a new MyLibProperties object.
 */
MyLibProperties *CreateLibProperties(const char *libname, int version)
{
    MyLibProperties* p = malloc(sizeof(MyLibProperties));
    p->libname = libname;
    p->version = version;

    return p;
}

/**
 * Prints out the properties of a given MyLibProperties object.
 */
void DisplayLibProperties(MyLibProperties *properties)
{
    if (properties)
    {
        printf("Library name: %s, Version: %i", properties->libname, properties->version);
    }
}

/**
 * Frees up the space alloacated by a given MyLibProperties object.
 */
void DeleteProperties(MyLibProperties *properties)
{
    if (properties)
    {
        free(properties);
    }
}