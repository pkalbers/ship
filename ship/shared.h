//
//  shared.h
//  ship
//
//  Created by Patrick Albers on 11.11.2014.
//  Copyright (c) 2014 Patrick K. Albers. All rights reserved.
//

#ifndef __ship__shared__
#define __ship__shared__

#include <stdio.h>
#include <stdint.h>
#include <vector>

#include "types.h"
#include "sample.h"
#include "marker.h"


//******************************************************************************
// Shared haplotype containers
//******************************************************************************


struct SharedTree
{
	// subsample sharing haplotype
	std::vector<Sample*> subsample;
	unsigned long n_sample; // number of samples
	
	// markers in shared sequence
	Marker* from, to;
	unsigned long n_marker; // number of markers
	
	// node at breakpoint
	SharedTree * node;
	uint8_t n_nodes;
	
	// assign
	SharedTree & operator = (const SharedTree &);
	SharedTree & operator = (SharedTree &&);
	
	// construct
	SharedTree();
	SharedTree(const SharedTree &);
	SharedTree(SharedTree &&);
	
	// destruct
	~SharedTree();
};



#endif /* defined(__ship__shared__) */