/*
 Based upon libiniparser, by Nicolas Devillard
 Hacked into 1 file (m-iniparser) by Freek/2005
 Original terms following:

 -- -

 Copyright (c) 2000 by Nicolas Devillard (ndevilla AT free DOT fr).

 Written by Nicolas Devillard. Not derived from licensed software.

 Permission is granted to anyone to use this software for any
 purpose on any computer system, and to redistribute it freely,
 subject to the following restrictions:

 1. The author is not responsible for the consequences of use of
 this software, no matter how awful, even if they arise
 from defects in it.

 2. The origin of this software must not be misrepresented, either
 by explicit claim or by omission.

 3. Altered versions must be plainly marked as such, and must not
 be misrepresented as being the original software.

 4. This notice may not be removed or altered.

 */


#ifndef _INIPARSER_H_
#define _INIPARSER_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

#include <bsettings.h>

typedef IniDictionary dictionary;

/* generated by genproto */

dictionary * iniparser_new(char *ininame);
dictionary * dictionary_new(int size);
void iniparser_free(dictionary * d);


int iniparser_getnsec(dictionary * d);
char * iniparser_getsecname(dictionary * d, int n);
void iniparser_dump_ini(dictionary * d, FILE * f);
char * iniparser_getstring(dictionary * d, char * key, char * def);
void iniparser_add_entry(dictionary * d, char * sec, char * key, char * val);
int iniparser_find_entry(dictionary  *   ini, char        *   entry);
int iniparser_setstr(dictionary * ini, char * entry, char * val);
void iniparser_unset(dictionary * ini, char * entry);

#endif

