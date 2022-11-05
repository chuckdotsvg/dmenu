/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 0;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int center = 0;                      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width = 500;                 /* minimum width when centered */
static const int vertpad = 0;              /* vertical padding of bar */
static const int sidepad = 0;              /* horizontal padding of bar */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] =
{
  "Fira Code:size=11",
  "Noto Color Emoji:size=11",
	"monospace:size=10"
};
static const char *prompt      = "🔍 Search:";      /* -p  option; prompt to the left of input field */

#include "themes/gruvbox-dark.h"

//static
//const
//char *colors[][2] = {
//	/*               fg         bg       */
//	[SchemeNorm] = { "#bbbbbb", "#222222" },
//	[SchemeSel]  = { "#eeeeee", "#005577" },
//	[SchemeOut]  = { "#000000", "#00ffff" },
//	[SchemeBorder] = { "#000000", "#ffffff" },
//	[SchemeSelHighlight]  = { "#ffc978", "#005577" },
//	[SchemeNormHighlight] = { "#ffc978", "#222222" },
//	[SchemeHp]   = { "#bbbbbb", "#333333" },
//};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int maxhist    = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;
