#ifndef ESCAPE_H
#define ESCAPE_H


#include <stdarg.h>
#include <stdio.h>


#define ANSI_CURSOR_END        0
#define ANSI_CURSOR_BEGINNING  1
#define ANSI_CURSOR_ENTIRE     2


#define SGR_RESET                     
#define SGR_BRIGHT                    1
#define SGR_FAINT                     2
#define SGR_ITALIC                    3
#define SGR_UNDERLINE                 4
#define SGR_BLINK_SLOW                5
#define SGR_BLINK_RAPID               6
#define SGR_NEGATIVE                  7
#define SGR_CONCEAL                   8
#define SGR_CROSSED_OUT               9
#define SGR_PRIMARY_FONT              10
#define SGR_ALT_FONT_1                11
#define SGR_ALT_FONT_2                12
#define SGR_ALT_FONT_3                13
#define SGR_ALT_FONT_4                14
#define SGR_ALT_FONT_5                15
#define SGR_ALT_FONT_6                16
#define SGR_ALT_FONT_7                17
#define SGR_ALT_FONT_8                18
#define SGR_ALT_FONT_9                19
#define SGR_FRAKTUR                   20
#define SGR_BRIGHT_OFF                21
#define SGR_NORMAL                    22
#define SGR_NOT_ITALIC                23
#define SGR_UNDERLINE_NONE            24
#define SGR_BLINK_OFF                 25
//#define SGR_RESERVED                26
#define SGR_POSITIVE                  27
#define SGR_REVEAL                    28
#define SGR_NOT_CROSSED_OUT           29
#define SGR_TEXT_BLACK                30
#define SGR_TEXT_RED                  31
#define SGR_TEXT_GREEN                32
#define SGR_TEXT_YELLOW               33
#define SGR_TEXT_BLUE                 34
#define SGR_TEXT_MAGENTA              35
#define SGR_TEXT_CYAN                 36
#define SGR_TEXT_WHITE                37
//#define ???
#define SGR_TEXT_DEFAULT              39
#define SGR_BACKGROUND_BLACK          40
#define SGR_BACKGROUND_RED            41
#define SGR_BACKGROUND_GREEN          42
#define SGR_BACKGROUND_YELLOW         43
#define SGR_BACKGROUND_BLUE           44
#define SGR_BACKGROUND_MAGENTA        45
#define SGR_BACKGROUND_CYAN           46
#define SGR_BACKGROUND_WHITE          47
//#define ???
#define SGR_BACKGROUND_NORMAL         49
//#define SGR_RESERVED                50
#define SGR_FRAMED                    51
#define SGR_ENCIRCLED                 52
#define SGR_OVERLINED                 53
#define SGR_NOT_FRAMED                54
#define SGR_NOT_OVERLINED             55
//#define SGR_RESERVED                56
//#define SGR_RESERVED                57
//#define SGR_RESERVED                58
//#define SGR_RESERVED                59
#define SGR_IDEOGRAM_UNDERLINE        60
#define SGR_IDEOGRAM_UNDERLINE_DOUBLE 61
#define SGR_IDEOGRAM_OVERLINE         62
#define SGR_IDEOGRAM_OVERLINE_DOUBLE  63
#define SGR_IDEOGRAM_STRESS           64



/* Moves the cursor up 'n' cells */
void ansi_cuu(FILE *, unsigned int);

/* Moves the cursor down 'n' cells */
void ansi_cud(FILE *, unsigned int);

/* Moves the cursor forward 'n' cells */
void ansi_cuf(FILE *, unsigned int);

/* Moves the cursor back 'n' cells */
void ansi_cub(FILE *, unsigned int);

/* Moves the cursor to the beginning of the line 'n' lines down */
void ansi_cnl(FILE *, unsigned int);

/* Moves the cursor to the beginning of the line 'n' lines up */
void ansi_cpl(FILE *, unsigned int);

/* Moves the cursor to column 'n' */
void ansi_cha(FILE *, unsigned int);

/* Moves the cursor to row 'n', column 'm' */
void ansi_cup(FILE *, unsigned int, unsigned int);

/* Clears part of the screen, as defined by the ANSI_CURSOR_ constants */
void ansi_ed (FILE *, unsigned int);

/* Clears part of the current line, as defined by the ANSI_CURSOR_ constants */
void ansi_el (FILE *, unsigned int);

/* Scrolls the page up by 'n' lines (new lines are added at the bottom) */
void ansi_su (FILE *, unsigned int);

/* Scrolls the page down by 'n' lines (new lines are added at the top) */
void ansi_sd (FILE *, unsigned int);

/* Moves the cursor to row 'n', column 'm' */
void ansi_hpv(FILE *, unsigned int, unsigned int);

/* Sets SGR parameters, as defined by the SGR_ constants */
void ansi_sgr(FILE *, unsigned int, ...);

/* ??? how do ??? */
//void ansi_dsr(FILE *); ???

/* Saves the cursor position */
void ansi_scp(FILE *);

/* Recalls the cursor position */
void ansi_rcp(FILE *);

/* Shows the cursor */
void ansi_dectcem_show(FILE *);
/* Hides the cursor */
void ansi_dectcem_hide(FILE *);


#endif
