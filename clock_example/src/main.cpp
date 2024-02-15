//
//  main.cpp
//  Lab4
//
//  Created by Alireza on 2/14/20.
//  Copyright Â© 2020 Alireza. All rights reserved.
//

#include "../include/main.h"
#include "../include/cycletime.h"
#include "../include/timer.h"
#include <unistd.h>
#include <iostream>
//using namespace std;

int mySub2(int a, int b){
 return a-b;
}

int main(int argc, const char * argv[])
{
	float cpu_timer;
	unsigned int delay = 1;
	
	std::cout << "WES237A lab 4" << std::endl;

	//char key=0;
	
	// 1 argument on command line: delay = arg
	if(argc >= 2)
	{
		delay = atoi(argv[1]);
	}

    //TODO: declare 2 cpu_count variables: 1 for before sleeping, 1 for after sleeping (see cpu_timer)
    //TODO: initialize the counter

    //TODO: get the cyclecount before sleeping
    usleep(delay);
    //TODO: get the cyclecount after sleeping

    //TODO: subtract the before and after cyclecount
    //TODO: print the cycle count (see the print statement for the cpu_timer below)

	LinuxTimer t;
	usleep(delay);
	t.stop();
	cpu_timer = t.getElapsed();

	
	std::cout << "Timer: " << (double)cpu_timer/1000000000.0 << std::endl;

	return 0;
}

