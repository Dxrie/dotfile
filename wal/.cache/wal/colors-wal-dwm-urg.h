static const char norm_fg[] = "#c1c4cb";
static const char norm_bg[] = "#081430";
static const char norm_border[] = "#606675";

static const char sel_fg[] = "#c1c4cb";
static const char sel_bg[] = "#A66BA4";
static const char sel_border[] = "#c1c4cb";

static const char urg_fg[] = "#c1c4cb";
static const char urg_bg[] = "#9375B5";
static const char urg_border[] = "#9375B5";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
