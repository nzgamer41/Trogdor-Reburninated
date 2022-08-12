#include "config.h"
#include "sprite_objects.h"
#include "text_objects.h"
#include "sound_logic.h"

#ifndef MEDIA_OBJECTS_INIT_H
#define MEDIA_OBJECTS_INIT_H

extern void InitializeTextChars();
extern void InitializeTextObjects();
extern void destroyTextChars(TextCharObject, Uint8);
extern void destroyAllTextChars();

extern SpriteObject sprite_videlectrix_logo;
extern SpriteObject sprite_title_screen;
extern SpriteObject sprite_trogdor_logo;
extern SpriteObject sprite_level_background_1;
extern SpriteObject sprite_level_background_2;
extern SpriteObject sprite_level_background_3;
extern SpriteObject sprite_level_background_4;
extern SpriteObject sprite_level_background_th;
extern SpriteObject *sprite_level_background;
extern SpriteObject sprite_trogdor;
extern SpriteObject sprite_burnination_meter_full;
extern SpriteObject sprite_burnination_meter_empty;
extern SpriteObject sprite_cottage;
extern SpriteObject sprite_cottage_fire;
extern SpriteObject sprite_peasantometer_icon;
extern Uint8        sprite_peasantometer_icon_init_x;
extern SpriteObject sprite_archer;
extern SpriteObject sprite_arrow;
extern SpriteObject sprite_trogdor_fire;
extern SpriteObject sprite_trogdor_dead;
extern SpriteObject sprite_knight;
extern SpriteObject sprite_peasant;
extern SpriteObject sprite_end_of_level_flash;
extern SpriteObject sprite_end_of_level_trogdor;
extern SpriteObject sprite_death_message;
extern SpriteObject sprite_burninate_text;
extern SpriteObject sprite_burninate_fire;
extern SpriteObject sprite_level_beaten_trogdor;
extern SpriteObject sprite_game_over_trogdor;
extern SpriteObject sprite_loot;
extern SDL_Rect     divider_level_beaten_rect;

#define SFX_BURN_HUT      sfxArr[0]
#define SFX_GOLDGET       sfxArr[1]
#define SFX_PEASANTSCREAM sfxArr[2]
#define SFX_SFX2          sfxArr[3]
#define SFX_TROGADOR      sfxArr[4]
#define SFX_ARROW         sfxArr[5]
#define SFX_SQUISH        sfxArr[6]
#define SFX_DEATH         sfxArr[7]
#define SFX_KICK          sfxArr[8]
#define SFX_BURNINATE     sfxArr[9]
#define SFX_CUTSCENE      sfxArr[10]
#define SFX_GAMEOVER      sfxArr[11]
#define SFX_SB1           sfxArr_strongBad[0]
#define SFX_SB2           sfxArr_strongBad[1]
#define SFX_SB3           sfxArr_strongBad[2]
#define SFX_SB4           sfxArr_strongBad[3]
#define SFX_SB5           sfxArr_strongBad[4]
#define SFX_SB6           sfxArr_strongBad[5]
#define SFX_SB7           sfxArr_strongBad[6]
#define SFX_SBARCH        sfxArr_strongBad[7]
#define SFX_SBARCHEND     sfxArr_strongBad[8]
#define SFX_SBBEST        sfxArr_strongBad[9]
#define SFX_SBDOOJ        sfxArr_strongBad[10]
#define SFX_SBGAMEOVER    sfxArr_strongBad[11]
#define SFX_SBKERREK      sfxArr_strongBad[12]
#define SFX_SBLEVELBEAT   sfxArr_strongBad[13]
#define SFX_SBSCORE       sfxArr_strongBad[14]
#define SFX_SBSECRET      sfxArr_strongBad[15]
#define SFX_SBSQUISH1     sfxArr_strongBad[16]
#define SFX_SBSQUISH2     sfxArr_strongBad[17]
#define SFX_SBWIN         sfxArr_strongBad[18]
#define SFX_SBWIN2        sfxArr_strongBad[19]
#define SFX_SBWORST       sfxArr_strongBad[20]
extern SoundEffect sfx_burn_hut;
extern SoundEffect sfx_goldget;
extern SoundEffect sfx_peasantscream;
extern SoundEffect sfx_sb1;
extern SoundEffect sfx_sb2;
extern SoundEffect sfx_sb3;
extern SoundEffect sfx_sb4;
extern SoundEffect sfx_sb5;
extern SoundEffect sfx_sb6;
extern SoundEffect sfx_sb7;
extern SoundEffect sfx_sbarch;
extern SoundEffect sfx_sbarchend;
extern SoundEffect sfx_sbbest;
extern SoundEffect sfx_sbdooj;
extern SoundEffect sfx_sbgameover;
extern SoundEffect sfx_sbkerrek;
extern SoundEffect sfx_sblevelbeat;
extern SoundEffect sfx_sbscore;
extern SoundEffect sfx_sbsecret;
extern SoundEffect sfx_sbsquish1;
extern SoundEffect sfx_sbsquish2;
extern SoundEffect sfx_sbwin;
extern SoundEffect sfx_sbwin2;
extern SoundEffect sfx_sbworst;
extern SoundEffect sfx_sfx2;
extern SoundEffect sfx_trogador;
extern SoundEffect sfx_arrow;
extern SoundEffect sfx_squish;
extern SoundEffect sfx_death;
extern SoundEffect sfx_kick;
extern SoundEffect sfx_burninate;
extern SoundEffect sfx_cutscene;
extern SoundEffect sfx_gameover;


extern SDL_Color color_white;
extern SDL_Color color_black;
extern SDL_Color color_red;
extern SDL_Color color_gray;
extern SDL_Color color_orange;
extern SDL_Color color_brown;
extern TTF_Font *font_serif_brown_6;
extern TextCharObject textChars_font_serif_brown_6[122 + 1 - 32];
extern TTF_Font *font_serif_brown_8;
extern TextCharObject textChars_font_serif_brown_8[126 + 1 - 32];
extern TTF_Font *font_serif_gray_6;
extern TextCharObject textChars_font_serif_gray_6[126 + 1 - 32];
extern TTF_Font *font_serif_gray_12;
extern TextCharObject textChars_font_serif_gray_12[90 + 1 - 32];
extern TTF_Font *font_serif_orange_6;
extern TextCharObject textChars_font_serif_orange_6[90 + 1 - 32];
extern TTF_Font *font_serif_red_6;
extern TextCharObject textChars_font_serif_red_6[126 + 1 - 32];
extern TTF_Font *font_serif_red_6_mult;
extern TextCharObject textChars_font_serif_red_6_mult[126 + 1 - 32];
extern TTF_Font *font_serif_red_8;
extern TextCharObject textChars_font_serif_red_8[126 + 1 - 32];
extern TTF_Font *font_serif_red_8_mult;
extern TextCharObject textChars_font_serif_red_8_mult[126 + 1 - 32];
extern TTF_Font *font_serif_red_12;
extern TextCharObject textChars_font_serif_red_12[90 + 1 - 32];
extern TTF_Font *font_serif_white_6;
extern TextCharObject textChars_font_serif_white_6[126 + 1 - 32];
extern TTF_Font *font_serif_white_6_mult;
extern TextCharObject textChars_font_serif_white_6_mult[126 + 1 - 32];
extern TTF_Font *font_serif_white_9;
extern TextCharObject textChars_font_serif_white_9[126 + 1 - 32];
extern TTF_Font *font_serif_white_10;
extern TextCharObject textChars_font_serif_white_10[126 + 1 - 32];
extern TTF_Font *font_serif_white_14;
extern TextCharObject textChars_font_serif_white_14[126 + 1 - 32];
extern TTF_Font *font_nokia_12;
extern TextCharObject textChars_font_nokia_12[126 + 1 - 32];
//extern TTF_Font *font_serif_2_bold_black_23;
//extern TextCharObject textChars_font_serif_2_bold_black_23[90 + 1 - 32];
//extern TTF_Font *font_serif_2_bold_red_23;
//extern TextCharObject textChars_font_serif_2_bold_red_23[90 + 1 - 32];
extern TTF_Font *font_serif_2_red_6;
extern TextCharObject textChars_font_serif_2_red_6[90 + 1 - 32];
extern TTF_Font *font_serif_2_red_13;
extern TextCharObject textChars_font_serif_2_red_13[90 + 1 - 32];

extern TextObject text_0_loading;
extern SDL_Rect text_0_loading_censor_rect;
extern TextObject text_1_presents;
extern TextObject text_3_click_anywhere_to_start;
//extern TextObject text_3_programmed;
//extern TextObject text_3_designed;
extern TextObject text_3_page;
extern TextObject text_3_instructions_1;
extern TextObject text_3_instructions_2;
extern TextObject text_3_instructions_3;
extern TextObject text_3_instructions_4;
extern TextObject text_3_instructions_5;
extern TextObject text_3_hints_1;
extern TextObject text_3_hints_2;
extern TextObject text_3_hints_3;
extern TextObject text_3_hints_4;
extern TextObject text_3_hints_5;
extern TextObject text_3_hints_6;
extern TextObject text_3_hints_7;
extern TextObject text_3_credits_1;
extern TextObject text_3_credits_2;
extern TextObject text_3_credits_3;
extern TextObject text_3_credits_4;
extern TextObject text_3_credits_5;
extern TextObject text_3_credits_6;
extern TextObject text_3_credits_7;
extern TextObject text_3_coming_soon_1;
extern TextObject text_3_coming_soon_2;
extern TextObject text_3_coming_soon_3;
extern TextObject text_3_coming_soon_4;
extern TextObject text_3_coming_soon_5;
extern TextObject text_3_coming_soon_6;
extern TextObject text_4_score_val;
extern TextObject text_4_mans_val;
extern TextObject text_4_level_val;
extern TextObject text_4_score;
extern TextObject text_4_mans;
extern TextObject text_4_level;
extern TextObject text_4_burninate_black;
extern TextObject text_4_burninate_red;
extern TextObject text_4_paused_1;
extern TextObject text_4_paused_2;
extern TextObject text_9_level_gray;
extern TextObject text_9_beaten_gray;
extern TextObject text_9_level_red;
extern TextObject text_9_beaten_red;
extern TextObject text_9_nice_work;
extern TextObject text_10_again_gray;
extern TextObject text_10_challenge_gray;
extern TextObject text_10_again_white;
extern TextObject text_10_challenge_white;
extern TextObject text_10_again_red;
extern TextObject text_10_challenge_red;
extern TextObject text_10_again_orange;
extern TextObject text_10_challenge_orange;
extern TextObject text_10_its_over_gray;
extern TextObject text_10_its_over_red;
extern TextObject text_10_username_val;
extern TextObject text_10_enter_initials;
extern TextObject text_10_send_em;
extern TextObject text_10_hi_scores_gray;
extern TextObject text_10_view_gray;
extern TextObject text_10_hi_scores_white;
extern TextObject text_10_view_white;
extern TextObject text_10_hi_scores_red;
extern TextObject text_10_view_red;
extern TextObject text_10_hi_scores_orange;
extern TextObject text_10_view_orange;
extern TextObject text_placeholder_cutscene;
extern TextObject text_11_cutscene;
extern TextObject text_12_cutscene;
extern TextObject text_13_cutscene;
extern TextObject text_14_cutscene;
extern TextObject text_15_cutscene;
extern TextObject text_16_cutscene;
extern TextObject text_17_cutscene;
extern TextObject text_18_cutscene;
extern TextObject text_19_cutscene;
extern TextObject text_20_cutscene;
extern TextObject text_21_cutscene;
extern TextObject text_22_cutscene;
extern TextObject text_23_cutscene_1;
extern TextObject text_23_cutscene_2;
extern TextObject text_23_cutscene_3;
extern TextObject text_23_cutscene_4;
extern TextObject text_23_cutscene_5;
extern TextObject text_23_cutscene_6;
extern TextObject text_23_cutscene_7;
extern TextObject text_23_cutscene_8;
extern TextObject text_23_cutscene_9;
extern TextObject text_23_cutscene_10;
extern TextObject text_23_cutscene_11;
extern TextObject text_23_cutscene_12;
extern TextObject text_23_cutscene_13;
extern TextObject text_23_cutscene_14;
extern TextObject text_25_ye_olde_high_scores;
extern TextObject text_25_name;
extern TextObject text_25_level;
extern TextObject text_25_score;
extern TextObject text_25_name_1_val;
extern TextObject text_25_level_1_val;
extern TextObject text_25_score_1_val;
extern TextObject text_25_1;
extern TextObject text_25_name_2_val;
extern TextObject text_25_level_2_val;
extern TextObject text_25_score_2_val;
extern TextObject text_25_2;
extern TextObject text_25_name_3_val;
extern TextObject text_25_level_3_val;
extern TextObject text_25_score_3_val;
extern TextObject text_25_3;
extern TextObject text_25_name_4_val;
extern TextObject text_25_level_4_val;
extern TextObject text_25_score_4_val;
extern TextObject text_25_4;
extern TextObject text_25_name_5_val;
extern TextObject text_25_level_5_val;
extern TextObject text_25_score_5_val;
extern TextObject text_25_5;
extern TextObject text_25_name_6_val;
extern TextObject text_25_level_6_val;
extern TextObject text_25_score_6_val;
extern TextObject text_25_6;
extern TextObject text_25_name_7_val;
extern TextObject text_25_level_7_val;
extern TextObject text_25_score_7_val;
extern TextObject text_25_7;
extern TextObject text_25_name_8_val;
extern TextObject text_25_level_8_val;
extern TextObject text_25_score_8_val;
extern TextObject text_25_8;
extern TextObject text_25_name_9_val;
extern TextObject text_25_level_9_val;
extern TextObject text_25_score_9_val;
extern TextObject text_25_9;
extern TextObject text_25_name_10_val;
extern TextObject text_25_level_10_val;
extern TextObject text_25_score_10_val;
extern TextObject text_25_10;

#endif