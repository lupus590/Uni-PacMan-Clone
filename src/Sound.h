#pragma once

#include "SDL_mixer.h"

class Sound
{
	private:

		Mix_Music* music ; //Creates a pointer to the music

	public:

		//Class creation
		Sound(void); //Constructor
		~Sound(void); //Destructor
		void init(void) ; //Sets up SDL_mixer and loads in the PacMan.mp3 file

		//General class methods
		void playMusic(void) ; //Plays the music
		void stopMusic(void) ; //Stops the music
} ;