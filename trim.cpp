/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			A. Kapsammer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */

#include "trim.h"
void trim(const char* source, char* trimmed_string){
  if (source[0] == '\0') {trimmed_string[0] = '\0'; return;}
  int blanks = 0;
  while (source[blanks] == ' ') blanks++;
  unsigned int i;
  bool moreThanOneBlank = false;
  for (i = 0; i < strlen(source) - blanks && !moreThanOneBlank; i++) {
    if (source[i + blanks] == ' ' && source[i + blanks + 1] == ' ') moreThanOneBlank = true;
    else trimmed_string[i] = source[i + blanks];
  }
  if (trimmed_string[i - 1] == ' ') trimmed_string[i - 1] = '\0';
}
