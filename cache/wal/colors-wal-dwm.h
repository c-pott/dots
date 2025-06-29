static const char norm_fg[] = "#d7c5a3";
static const char norm_bg[] = "#0d0a09";
static const char norm_border[] = "#968972";

static const char sel_fg[] = "#d7c5a3";
static const char sel_bg[] = "#4C3726";
static const char sel_border[] = "#d7c5a3";

static const char urg_fg[] = "#d7c5a3";
static const char urg_bg[] = "#4B3018";
static const char urg_border[] = "#4B3018";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
