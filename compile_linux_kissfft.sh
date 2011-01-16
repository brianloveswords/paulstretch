outfile=paulstretch
rm -f $outfile

fluid -c GUI.fl 
fluid -c FreeEditUI.fl


g++ -ggdb -DKISSFFT -I./contrib GUI.cxx FreeEditUI.cxx *.cpp Input/*.cpp contrib/*.c `fltk-config --cflags` \
 `fltk-config --ldflags`  -laudiofile  -lvorbisenc -lvorbisfile -lportaudio -lpthread -lmad -o $outfile

rm -f GUI.h GUI.cxx FreeEditUI.h FreeEditUI.cxx
