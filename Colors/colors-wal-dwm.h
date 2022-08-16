static const char norm_fg[] = "#c9c9c9";
static const char norm_bg[] = "#272727";
static const char norm_border[] = "#5d5d5d";

static const char sel_fg[] = "#c9c9c9";
static const char sel_bg[] = "#909caa";
static const char sel_border[] = "#c9c9c9";

static const char urg_fg[] = "#c9c9c9";
static const char urg_bg[] = "#c7c7c7";
static const char urg_border[] = "#c7c7c7";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
