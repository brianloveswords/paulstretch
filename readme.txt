PaulStretch
Copyright (C) 2006-2009 Nasca Octavian Paul, Tg. Mures, Romania

Released under GNU General Public License v.2 license

This is an experimental program for extreme stretching the audio.
Requirements:
    - audiofile library
    - libvorbis
    - fltk library
    - portaudio library
    - libmad (for mp3 input)
    - not required, but you can use the FFTW library


This algorithm/program is suitable only for extreme stretching the audio. 

There is lot room for improvements on this algorithm like:
    - on sharp attacks to make the window smaller and larger on steady sounds. This avoid adding constant sidebands on steady sounds and smoothing too much the sharp sounds.
    - even for small window, the sidebands produced can be lowered (how?)

History:
    20060527(0.0.1)
	  - First release
    20060530(0.0.2)
	  - Ogg Vorbis output support
	  - Added a wxWidgets graphical user interface
    20060812(1.000)
	  - Removed the wxWidgets GUI and added a FLTK GUI (because FLTK GUI is smaller)
	  - Added real-time processing/player
	  - Added input support for Ogg Vorbis files
	  - Improved the stretch algorithm and now the amount of stretch is unlimited (and on big stretch amounts, you don't need additional memory)
	  - Added "Freeze" button to the player
	  - It is possible to render to file only a selected part of the sound
	  - Other improvements    
    20060905(1.024)
	  - Added MP3 support for input
	  - Added bypass mode (if you click play with the right mouse button)
	  - Improved the precision of the position slider (now it shows really what's currenly playing)
	  - Added the possibility to set the stretch amount by entering the numeric value
	  - Added pause mode and volume control
	  - Added post-processing of the spectrum(pitch/frequency shift, octave mixer, compress,filter,harmonics)
	  - Command line parameter for input filename 
	  - The file can be dragged from the explorer to the file text to open it
    20090424(2.0)
	  - Added free envelopes, which allows the user to freely edit some parameters
	  - Added stretch multiplier (with free envelope) which make the stretching variable
	  - Added arbitrary frequency filter
	  - Added a frequency spreader effect, which increase the bandwith of each harmonic
	  - Added a frequency shifter which produces binaural beats (the beats frequencies are variable)
	  - Added 32 bit WAV rendering
	  - Other improvements and bugfixes
    

Enjoy! :)
Paul

zynaddsubfx_AT_yahoo com


    
