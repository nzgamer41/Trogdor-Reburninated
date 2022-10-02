#include "cutscenes.h"

CutsceneObject cutscene_level_beaten_smoke;
CutsceneObject cutscene_cottage_fire;
CutsceneObject cutscene_peasant_1;
CutsceneObject cutscene_peasant_2;
CutsceneObject cutscene_peasant_3;
CutsceneObject cutscene_peasant_4;
CutsceneObject cutscene_peasant_5;
CutsceneObject cutscene_peasant_6;
CutsceneObject cutscene_peasant_7;
CutsceneObject cutscene_peasant_8;
CutsceneObject cutscene_peasant_9;
CutsceneObject cutscene_peasant_10;
CutsceneObject cutscene_trogdor_1;
CutsceneObject cutscene_trogdor_2;
CutsceneObject cutscene_trogdor_3;
CutsceneObject cutscene_trogdor_4;
CutsceneObject cutscene_trogdor_5;
CutsceneObject cutscene_trogdor_6;
CutsceneObject cutscene_trogdor_fire;
CutsceneObject cutscene_trogdor_flexing;
CutsceneObject cutscene_knight_1;
CutsceneObject cutscene_knight_2;

SpriteObject *spritePtr;

void InitializeCutsceneObjects() {
	prepareCSO(&cutscene_level_beaten_smoke, &sprite_level_beaten_smoke);
	prepareCSO(&cutscene_cottage_fire, &sprite_cottage_fire);
	prepareCSO(&cutscene_peasant_1, &sprite_peasant);
	prepareCSO(&cutscene_peasant_2, &sprite_peasant);
	prepareCSO(&cutscene_peasant_3, &sprite_peasant);
	prepareCSO(&cutscene_peasant_4, &sprite_peasant);
	prepareCSO(&cutscene_peasant_5, &sprite_peasant);
	prepareCSO(&cutscene_peasant_6, &sprite_peasant);
	prepareCSO(&cutscene_peasant_7, &sprite_peasant);
	prepareCSO(&cutscene_peasant_8, &sprite_peasant);
	prepareCSO(&cutscene_peasant_9, &sprite_peasant);
	prepareCSO(&cutscene_peasant_10, &sprite_peasant);
	prepareCSO(&cutscene_trogdor_1, &sprite_trogdor);
	prepareCSO(&cutscene_trogdor_2, &sprite_trogdor);
	prepareCSO(&cutscene_trogdor_3, &sprite_trogdor);
	prepareCSO(&cutscene_trogdor_4, &sprite_trogdor);
	prepareCSO(&cutscene_trogdor_5, &sprite_trogdor);
	prepareCSO(&cutscene_trogdor_6, &sprite_trogdor);
	prepareCSO(&cutscene_trogdor_fire, &sprite_trogdor_fire);
	prepareCSO(&cutscene_trogdor_flexing, &sprite_trogdor_flexing);
	prepareCSO(&cutscene_knight_1, &sprite_knight);
	prepareCSO(&cutscene_knight_2, &sprite_knight);
}

void prepareCSO(CutsceneObject *csObj, SpriteObject *spriteObj) {
	csObj->sprite = spriteObj;
	csObj->srcrect.w = csObj->sprite->frame_w;
	csObj->srcrect.h = csObj->sprite->frame_h;
	csObj->dstrect.w = csObj->sprite->dstrect.w;
	csObj->dstrect.h = csObj->sprite->dstrect.h;
}

void enterCSO(CutsceneObject *csObj, int x, int y, Sint8 frame, Sint8 form, Sint8 frameTime, Sint8 formTime, Sint8 vel_x, Sint8 vel_y) {
	setCSOPos(csObj, x, y);
	updateCSOFrame(csObj, frame);
	updateCSOForm(csObj, form);
	csObj->animFrameTime = frameTime;
	csObj->animFrameCounter = 0;
	csObj->animFormTime = formTime;
	csObj->animFormCounter = 0;
	csObj->velocity_x = vel_x;
	csObj->velocity_y = vel_y;
	csObj->isVisible = true;
}

void renderCSO(CutsceneObject *csObj) {
	if (csObj->isVisible) {
		renderSprite_game(*csObj->sprite, csObj->srcrect, csObj->dstrect);
		csObj->dstrect.x += csObj->velocity_x;
		csObj->dstrect.y += csObj->velocity_y;
		if (csObj->animFrameTime > 0) {
			csObj->animFrameCounter++;
			while (csObj->animFrameCounter >= csObj->animFrameTime) {
				csObj->animFrameCounter -= csObj->animFrameTime;
				updateCSOFrame(csObj, (csObj->animFrame + 1) % csObj->sprite->numAnimFrames);
			}
		}
		if (csObj->animFormTime > 0) {
			csObj->animFormCounter++;
			while (csObj->animFormCounter >= csObj->animFormTime) {
				csObj->animFormCounter -= csObj->animFormTime;
				updateCSOForm(csObj, (csObj->animForm + 1) % csObj->sprite->numForms);
			}
		}
	}
}

void updateCSOFrame(CutsceneObject *csObj, Sint8 frame) {
	csObj->animFrame = frame;
	csObj->srcrect.x = spriteFrame(*csObj->sprite, csObj->animFrame);
}

void updateCSOForm(CutsceneObject *csObj, Sint8 form) {
	csObj->animForm = form;
	csObj->srcrect.y = spriteForm(*csObj->sprite, csObj->animForm);
}

void setCSOPos(CutsceneObject *csObj, int x, int y) {
	csObj->dstrect.x = x;
	csObj->dstrect.y = y;
}

void cutscene_level_beaten() {
	switch (frameState) {
		case 277:
			//cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_BURNINATE);
			cutscene_level_beaten_smoke.isVisible = false;
			cutscene_cottage_fire.isVisible = false;
			enterCSO(&cutscene_level_beaten_smoke, 125, 83 - cutscene_level_beaten_smoke.sprite->dstrect.h, 0, 0, 1, 0, 0, 0);
			break;
		case 281:
			enterCSO(&cutscene_cottage_fire, 222, 0, 0, 0, 2, 0, 0, 0);
			break;
		case 285:
			updateCSOForm(&cutscene_level_beaten_smoke, 1);
			break;
		case 289:
			cutscene_cottage_fire.isVisible = false;
		case 293:
			updateCSOForm(&cutscene_level_beaten_smoke, 2);
			break;
		case 301:
			updateCSOForm(&cutscene_level_beaten_smoke, 3);
			break;
		case 308:
			cutscene_level_beaten_smoke.isVisible = false;
			break;
		default:
			break;
	}
	renderSprite_static_game(sprite_level_beaten_trogdor);
	renderCSO(&cutscene_level_beaten_smoke);
	renderCSO(&cutscene_cottage_fire);
	renderText(text_9_nice_work, font_serif_white_10);
	renderText(text_9_level_gray, font_serif_gray_12);
	renderText(text_9_beaten_gray, font_serif_gray_12);
	renderText(text_9_level_red, font_serif_red_12);
	renderText(text_9_beaten_red, font_serif_red_12);
}

void cutscene_level_4() {
	switch (frameState) {
		case 420:
			cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_CUTSCENE);
			cutscene_peasant_1.isVisible = false;
			cutscene_trogdor_1.isVisible = false;
			cutscene_trogdor_fire.isVisible = false;
			cutscene_knight_1.isVisible = false;
			cutscene_knight_2.isVisible = false;
			enterCSO(&cutscene_peasant_1, 21, 82, 1, 0, 0, 0, 0, 0);
			enterCSO(&cutscene_trogdor_1, 246, 70, 0, 0, 2, 0, -8, 0);
			break;
		case 427:
			enterCSO(&cutscene_knight_1, 241, 75, 0, 0, 4, 0, -7, 0);
			break;
		case 431:
			enterCSO(&cutscene_knight_2, 240, 86, 1, 0, 4, 0, -7, 0);
			break;
		case 448:
			enterCSO(&cutscene_peasant_1, 24, 81, 0, 2, 0, 0, 0, 0);
			break;
		case 449:
			enterCSO(&cutscene_trogdor_1, 25, 70, 0, 1, 2, 0, 8, 0);
			enterCSO(&cutscene_trogdor_fire, 63, 78, 0, 1, 0, 0, 8, 0);
			updateCSOFrame(&cutscene_knight_1, 0);
			updateCSOFrame(&cutscene_knight_2, 0);
			break;
		case 450:
			enterCSO(&cutscene_knight_1, 101, 75, 4, 1, 4, 0, 8, 0);
			enterCSO(&cutscene_knight_2, 130, 86, 4, 1, 4, 0, 8, 0);
			break;
		case 453:
			updateCSOFrame(&cutscene_knight_1, 5);
			cutscene_knight_1.animFrameCounter = 0;
			updateCSOFrame(&cutscene_knight_2, 5);
			cutscene_knight_2.animFrameCounter = 0;
			break;
		case 492:
			cutsceneIsPlaying = false;
			break;
		default:
			break;
	}
	renderCSO(&cutscene_peasant_1);
	renderCSO(&cutscene_trogdor_1);
	renderCSO(&cutscene_knight_1);
	renderCSO(&cutscene_knight_2);
	renderCSO(&cutscene_trogdor_fire);
	renderText(text_11_cutscene, font_serif_white_9);
}

void cutscene_level_8() {
	switch (frameState) {
		case 493:
			cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_CUTSCENE);
			cutscene_trogdor_1.isVisible = false;
			cutscene_trogdor_fire.isVisible = false;
			cutscene_peasant_1.isVisible = false;
			cutscene_peasant_2.isVisible = false;
			cutscene_peasant_3.isVisible = false;
			cutscene_peasant_4.isVisible = false;
			enterCSO(&cutscene_trogdor_1, 128, 85, 0, 0, 0, 0, 0, 0);
			enterCSO(&cutscene_peasant_1, -8, 97, 1, 0, 0, 0, 6, 0);
			enterCSO(&cutscene_peasant_2, -64, 97, 1, 0, 0, 0, 6, 0);
			enterCSO(&cutscene_peasant_3, -120, 97, 1, 0, 0, 0, 6, 0);
			break;
		case 510:
			cutscene_peasant_1.velocity_x = 0;
			break;
		case 513:
			enterCSO(&cutscene_trogdor_fire, 106, 96, 0, 0, 0, 0, 0, 0);
			updateCSOFrame(&cutscene_peasant_1, 0);
			updateCSOForm(&cutscene_peasant_1, 1);
			enterCSO(&cutscene_peasant_4, -56, 97, 1, 0, 0, 0, 6, 0);
			break;
		case 514:
			cutscene_peasant_1.velocity_y = 7;
			break;
		case 518:
			cutscene_trogdor_fire.isVisible = false;
			break;
		case 519:
			cutscene_peasant_2.velocity_x = 0;
			break;
		case 522:
			cutscene_trogdor_fire.isVisible = true;
			updateCSOFrame(&cutscene_peasant_2, 0);
			updateCSOForm(&cutscene_peasant_2, 1);
			break;
		case 523:
			cutscene_peasant_2.velocity_y = 7;
			break;
		case 527:
			cutscene_trogdor_fire.isVisible = false;
			break;
		case 529:
			cutscene_peasant_3.velocity_x = 0;
			break;
		case 532:
			cutscene_trogdor_fire.isVisible = true;
			updateCSOFrame(&cutscene_peasant_3, 0);
			updateCSOForm(&cutscene_peasant_3, 1);
			break;
		case 533:
			cutscene_peasant_3.velocity_y = 7;
			break;
		case 537:
			cutscene_trogdor_fire.isVisible = false;
			break;
		case 538:
			cutscene_peasant_4.velocity_x = 0;
			break;
		case 541:
			cutscene_trogdor_fire.isVisible = true;
			updateCSOFrame(&cutscene_peasant_4, 0);
			updateCSOForm(&cutscene_peasant_4, 1);
			break;
		case 542:
			cutscene_peasant_4.velocity_y = 7;
			break;
		case 546:
			cutscene_trogdor_fire.isVisible = false;
			break;
		case 566:
			cutsceneIsPlaying = false;
			break;
		default:
			break;
	}
	renderCSO(&cutscene_peasant_1);
	renderCSO(&cutscene_peasant_2);
	renderCSO(&cutscene_peasant_3);
	renderCSO(&cutscene_peasant_4);
	renderCSO(&cutscene_trogdor_1);
	renderCSO(&cutscene_trogdor_fire);
	renderText(text_12_cutscene, font_serif_white_9);
}

void cutscene_level_12() {
	switch (frameState) {
		case 567:
			cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_CUTSCENE);
			cutscene_trogdor_1.isVisible = false;
			cutscene_trogdor_2.isVisible = false;
			cutscene_trogdor_3.isVisible = false;
			cutscene_trogdor_4.isVisible = false;
			cutscene_trogdor_5.isVisible = false;
			cutscene_trogdor_6.isVisible = false;
			enterCSO(&cutscene_trogdor_1, 193, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 570:
			enterCSO(&cutscene_trogdor_2, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 575:
			enterCSO(&cutscene_trogdor_3, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 580:
			enterCSO(&cutscene_trogdor_4, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 585:
			enterCSO(&cutscene_trogdor_5, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 590:
			enterCSO(&cutscene_trogdor_6, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 595:
			enterCSO(&cutscene_trogdor_1, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 600:
			enterCSO(&cutscene_trogdor_2, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 605:
			enterCSO(&cutscene_trogdor_3, 218, 70, 0, 0, 2, 0, -9, 0);
			break;
		case 640:
			cutsceneIsPlaying = false;
			break;
		default:
			break;
	}
	renderCSO(&cutscene_trogdor_1);
	renderCSO(&cutscene_trogdor_2);
	renderCSO(&cutscene_trogdor_3);
	renderCSO(&cutscene_trogdor_4);
	renderCSO(&cutscene_trogdor_5);
	renderCSO(&cutscene_trogdor_6);
	renderText(text_13_cutscene, font_serif_white_9);
}

// trogdor switches forms once every two frames, knights are animated with frameTime=2, and peasant are mirrored and animated at frameTime=1
void cutscene_level_16() {
	switch (frameState) {
		case 641:
			cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_CUTSCENE);
			cutscene_trogdor_1.isVisible = false;
			cutscene_knight_1.isVisible = false;
			cutscene_knight_2.isVisible = false;
			cutscene_peasant_1.isVisible = false;
			cutscene_peasant_2.isVisible = false;
			cutscene_peasant_3.isVisible = false;
			cutscene_peasant_4.isVisible = false;
			cutscene_peasant_5.isVisible = false;
			cutscene_peasant_6.isVisible = false;
			cutscene_peasant_7.isVisible = false;
			cutscene_peasant_8.isVisible = false;
			cutscene_peasant_9.isVisible = false;
			cutscene_peasant_10.isVisible = false;
			enterCSO(&cutscene_trogdor_1, 102, 72, 0, 0, 0, 2, 0, 0);
			enterCSO(&cutscene_knight_1, 78, 86, 0, 0, 4, 0, 0, 0);
			enterCSO(&cutscene_knight_2, 143, 86, 0, 1, 4, 0, 0, 0);
			enterCSO(&cutscene_peasant_1, 3, 71, 0, 2, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_2, 19, 74, 0, 2, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_3, 34, 77, 0, 2, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_4, 50, 79, 0, 2, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_5, 65, 82, 0, 2, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_6, 160, 82, 0, 1, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_7, 177, 79, 0, 1, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_8, 194, 77, 0, 1, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_9, 211, 74, 0, 1, 1, 0, 0, 0);
			enterCSO(&cutscene_peasant_10, 227, 71, 0, 1, 1, 0, 0, 0);
			break;
		case 709:
			cutsceneIsPlaying = false;
			break;
		default:
			break;
	}
	renderCSO(&cutscene_trogdor_1);
	renderCSO(&cutscene_knight_1);
	renderCSO(&cutscene_knight_2);
	renderCSO(&cutscene_peasant_1);
	renderCSO(&cutscene_peasant_2);
	renderCSO(&cutscene_peasant_3);
	renderCSO(&cutscene_peasant_4);
	renderCSO(&cutscene_peasant_5);
	renderCSO(&cutscene_peasant_6);
	renderCSO(&cutscene_peasant_7);
	renderCSO(&cutscene_peasant_8);
	renderCSO(&cutscene_peasant_9);
	renderCSO(&cutscene_peasant_10);
	renderText(text_14_cutscene, font_serif_white_9);
}

void cutscene_level_20() {
	switch (frameState) {
		case 710:
			cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_CUTSCENE);
			cutscene_trogdor_flexing.isVisible = false;
			enterCSO(&cutscene_trogdor_flexing, 92, 72, 0, 0, 0, 0, 0, 0);
			break;
		case 729:
		case 747:
		case 765:
			updateCSOFrame(&cutscene_trogdor_flexing, 0);
			break;
		case 716:
		case 727:
		case 734:
		case 745:
		case 752:
		case 763:
		case 770:
			updateCSOFrame(&cutscene_trogdor_flexing, 1);
			break;
		case 718:
		case 725:
		case 736:
		case 743:
		case 754:
		case 761:
		case 772:
			updateCSOFrame(&cutscene_trogdor_flexing, 2);
			break;
		case 720:
		case 738:
		case 756:
		case 774:
			updateCSOFrame(&cutscene_trogdor_flexing, 3);
			break;
		case 779:
			cutsceneIsPlaying = false;
			break;
		default:
			break;
	}
	renderCSO(&cutscene_trogdor_flexing);
	renderText(text_15_cutscene, font_serif_white_9);
}

void cutscene_level_24() {
	switch (frameState) {
		case 780:
			cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_CUTSCENE);
			break;
		case 850:
			cutsceneIsPlaying = false;
			break;
		default:
			break;
	}
	renderText(text_16_cutscene, font_serif_white_9);
}

void cutscene_level_30() {
	switch (frameState) {
		case 853:
			cutsceneIsPlaying = true;
			loadAndPlaySound(SFX_CUTSCENE);
			break;
		case 924:
			cutsceneIsPlaying = false;
			break;
		default:
			break;
	}
	renderText(text_17_cutscene, font_serif_white_9);
}