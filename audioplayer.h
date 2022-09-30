#pragma once

#ifndef __APPLE__
#include "inc/bass.h"
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmacro-redefined"
#include "inc/bass.h"
#pragma clang diagnostic pop
#endif

class AudioPlayer final
{
public:
   AudioPlayer();
   ~AudioPlayer();

   bool MusicInit(const string& szFileName, const string& alt_szFileName, const float volume);

   bool MusicActive();

   //void MusicEnd();

   void MusicPause();
   void MusicUnpause();

   void MusicVolume(const float volume);

private:
   HSTREAM m_stream;
};
