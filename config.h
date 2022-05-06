/* user and group to drop privileges to */
static const char *user  = "evan";
static const char *group = "evan";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[PAM] =    "#189b31",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication */
static const char* pam_service = "system-local-login";

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-xos4-terminus-medium-r-normal--12-120-72-72-c-60-ibm-cp437";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
        // { "foreground",    STRING,  &text_color },
		{ "background",    STRING,  &colorname[INIT] },
		{ "color12",       STRING,  &colorname[INPUT] },
		{ "color9",        STRING,  &colorname[FAILED] },
		{ "color13",       STRING,  &colorname[PAM] },
};

