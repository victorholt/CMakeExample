/**
 *  Example library that will be
 *  outputted into it's own target
 *  library file.
 */

#ifndef __mylib_h__
#define __mylib_h__

#define mylibapi extern

typedef struct MyLibProperties
{
    const char* libname;
    int version;
} MyLibProperties;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Returns a reference to a new MyLibProperties object.
 */
mylibapi MyLibProperties *CreateLibProperties(const char *libname, int version);

/**
 * Prints out the properties of a given MyLibProperties object.
 */
mylibapi void DisplayLibProperties(MyLibProperties *properties);

/**
 * Frees up the space alloacated by a given MyLibProperties object.
 */
mylibapi void DeleteProperties(MyLibProperties *properties);

#ifdef __cplusplus
}
#endif

#endif