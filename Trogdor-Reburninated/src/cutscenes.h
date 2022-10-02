#ifndef CUTSCENES_H
#define CUTSCENES_H

#include "sprite_objects.h"

struct CutsceneObject {
	SpriteObject *sprite;
	SDL_Rect srcrect;
	SDL_Rect dstrect;
	bool isVisible = false;
	Sint8 velocity_x;
	Sint8 velocity_y;
	Sint8 animFrame;
	Sint8 animForm;
	Sint8 animFrameTime;
	Uint8 animFrameCounter;
	Sint8 animFormTime;
	Uint8 animFormCounter;
};

extern void InitializeCutsceneObjects();
extern void prepareCSO(CutsceneObject *, SpriteObject *);
extern void enterCSO(CutsceneObject *, int, int, Sint8, Sint8, Sint8, Sint8, Sint8, Sint8);
extern void renderCSO(CutsceneObject *);
extern void updateCSOFrame(CutsceneObject *, Sint8);
extern void updateCSOForm(CutsceneObject *, Sint8);
extern void setCSOPos(CutsceneObject *, int, int);
extern void cutscene_level_beaten();
extern void cutscene_level_4();
extern void cutscene_level_8();
extern void cutscene_level_12();
extern void cutscene_level_16();
extern void cutscene_level_20();
extern void cutscene_level_24();
extern void cutscene_level_30();

extern bool cutsceneIsPlaying;
extern Sint16 frameState;

#endif