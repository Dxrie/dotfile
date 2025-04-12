static const char norm_fg[] = "#c8cac6";
static const char norm_bg[] = "#242d1e";
static const char norm_border[] = "#6e7c65";

static const char sel_fg[] = "#c8cac6";
static const char sel_bg[] = "#467687";
static const char sel_border[] = "#c8cac6";

static const char urg_fg[] = "#c8cac6";
static const char urg_bg[] = "#A5C25D";
static const char urg_border[] = "#A5C25D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
