/*

 Copyright (c) 2017 University of Edinburgh, Imperial College, University of Manchester.
 Developed in the PAMELA project, EPSRC Programme Grant EP/K008730/1

 This code is licensed under the MIT License.

 */

#ifndef IO_SLAMFILEDESERIALISER_H
#define IO_SLAMFILEDESERIALISER_H

#include "io/deserialisation/Deserialiser.h"

namespace slambench {
	namespace io {
		class FrameBuffer;
		class FrameBufferSource;
		
		class SLAMFile;
		class SLAMFrame;
		
		class SLAMFileDeserialiser : public Deserialiser {
		public:
			SLAMFileDeserialiser(FILE *file, FrameBufferSource *fb_source) : Deserialiser(file), _fb_source(fb_source) {}
			bool Deserialise(SLAMFile &target);
			
		private:
			bool DeserialiseHeader(SLAMFile &target);
			bool DeserialiseFrames(SLAMFile &target);
			bool DeserialiseFrame(SLAMFile &file, SLAMFrame *&frame);
			
			FrameBuffer *GetNextFramebuffer();
			
			FrameBufferSource *_fb_source;
		};
	}
}

#endif
