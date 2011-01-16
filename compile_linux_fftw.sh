outfile=paulstretch

rm -f $outfile

fluid -c GUI.fl 
fluid -c FreeEditUI.fl

g++ -ggdb GUI.cxx FreeEditUI.cxx *.cpp Input/*.cpp `fltk-config --cflags` \
 `fltk-config --ldflags`  -laudiofile -lfftw3f -lvorbisenc -lvorbisfile -lportaudio -lpthread -lmad -o $outfile

rm -f GUI.h GUI.cxx FreeEditUI.h FreeEditUI.cxx

