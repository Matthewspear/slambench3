/*

 Copyright (c) 2017 University of Edinburgh, Imperial College, University of Manchester.
 Developed in the PAMELA project, EPSRC Programme Grant EP/K008730/1

 This code is licensed under the MIT License.

 */

#ifndef IO_SLAMFILEHEADERDESERIALISER_H
#define IO_SLAMFILEHEADERDESERIALISER_H

#include "io/deserialisation/Deserialiser.h"
#include <cstdio>
#include <cstdint>

namespace slambench {
	namespace io {
		
		class SLAMFileHeaderDeserialiser : public Deserialiser {
		public:
			SLAMFileHeaderDeserialiser(std::FILE *file) : Deserialiser(file) {}
			bool Deserialise();
		};
	}
}

#endif
