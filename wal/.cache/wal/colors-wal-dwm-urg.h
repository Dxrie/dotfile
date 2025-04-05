static const char norm_fg[] = "#c3c3c0";
static const char norm_bg[] = "#0F0F04";
static const char norm_border[] = "#686855";

static const char sel_fg[] = "#c3c3c0";
static const char sel_bg[] = "#906733";
static const char sel_border[] = "#c3c3c0";

static const char urg_fg[] = "#c3c3c0";
static const char urg_bg[] = "#635F4E";
static const char urg_border[] = "#635F4E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
