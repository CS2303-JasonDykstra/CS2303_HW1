/*
 ============================================================================
 Name        : HW1.c
 Author      : Jason Dykstra
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "production.h"
#include "search.h"
#include "house.h"
#include "layout.h"
#include "room.h"
#include "JasonDykstra.h"

int main(int argc, char* argv[]) {
	puts("!!!HW1!!!"); /* prints !!!HW1!!! */
	if(tests()){
		production(argc, argv);
	} else {
		puts("tests did not pass.");
	}
	return EXIT_SUCCESS;
}
