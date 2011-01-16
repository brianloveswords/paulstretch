/*
  Copyright (C) 2006-2009 Nasca Octavian Paul
  Author: Nasca Octavian Paul

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License 
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
*/

#ifndef VORBIS_INPUT_H
#define VORBIS_INPUT_H
#include <string>
#include <vorbis/vorbisfile.h>

#include "InputS.h"

class VorbisInputS:public InputS{
    public:
	VorbisInputS();
	~VorbisInputS();
	
	bool open(std::string filename);
	void close();

	int read(int nsmps,short int *smps);
	void seek(double pos);//0=start,1.0=end
	
    private:
	OggVorbis_File vorbisfile;
	bool vorbis_opened;
	int real_channels;

	short int *buf;
	int bufsize;
};
#endif
