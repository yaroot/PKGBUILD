/* See LICENSE file for copyright and license details. */

/* appearance */
static const char font[]        = "-*-*-medium-*-*-*-14-*-*-*-*-*-*-*";
static const char* normbgcolor  = "#222222";
static const char* normfgcolor  = "#cccccc";
static const char* selbgcolor   = "#555555";
static const char* selfgcolor   = "#ffffff";
static const char before[]      = "<";
static const char after[]       = ">";
static const int  tabwidth      = 160;
static const Bool foreground    = True;

/*
 * Where to place a new tab when it is opened. When npisrelative is True,
 * then the current position is changed + newposition. If npisrelative
 * is False, then newposition is an absolute position.
 */
static int  newposition   = -1;
static Bool npisrelative  = False;

#define MODKEY Mod4Mask
static Key keys[] = { \
	/* modifier                     key        function        argument */
	/* { MODKEY|ShiftMask,          XK_Return, focusonce,      { 0 } }, */
	{ MODKEY|ControlMask,           XK_Return, spawn,          { 0 } },
	{ MODKEY|ControlMask,           XK_j,      movetab,        { .i = +1 } },
	{ MODKEY|ControlMask,           XK_k,      movetab,        { .i = -1 } },
	{ MODKEY|ControlMask,           XK_w,      killclient,     { 0 } },
	{ MODKEY|ControlMask,           XK_n,      rotate,         { .i = +1 } },
	{ MODKEY|ControlMask,           XK_p,      rotate,         { .i = -1 } },

/* 	{ MODKEY|ShiftMask,             XK_l,      rotate,         { .i = +1 } }, */
/* 	{ MODKEY|ShiftMask,             XK_h,      rotate,         { .i = -1 } }, */
/* 	{ MODKEY|ShiftMask,             XK_j,      movetab,        { .i = -1 } }, */
/* 	{ MODKEY|ShiftMask,             XK_k,      movetab,        { .i = +1 } }, */
/* 	{ MODKEY,                       XK_Tab,    rotate,         { .i = 0 } }, */

/* 	{ MODKEY,                       XK_1,      move,           { .i = 0 } }, */
/* 	{ MODKEY,                       XK_2,      move,           { .i = 1 } }, */
/* 	{ MODKEY,                       XK_3,      move,           { .i = 2 } }, */
/* 	{ MODKEY,                       XK_4,      move,           { .i = 3 } }, */
/* 	{ MODKEY,                       XK_5,      move,           { .i = 4 } }, */
/* 	{ MODKEY,                       XK_6,      move,           { .i = 5 } }, */
/* 	{ MODKEY,                       XK_7,      move,           { .i = 6 } }, */
/* 	{ MODKEY,                       XK_8,      move,           { .i = 7 } }, */
/* 	{ MODKEY,                       XK_9,      move,           { .i = 8 } }, */
/* 	{ MODKEY,                       XK_0,      move,           { .i = 9 } }, */

/*  { 0,                            XK_F11,    fullscreen,     { 0 } }, */
};

