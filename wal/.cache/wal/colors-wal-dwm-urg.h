static const char norm_fg[] = "#c1c1c2";
static const char norm_bg[] = "#0a090c";
static const char norm_border[] = "#565669";

static const char sel_fg[] = "#c1c1c2";
static const char sel_bg[] = "#3D6F87";
static const char sel_border[] = "#c1c1c2";

static const char urg_fg[] = "#c1c1c2";
static const char urg_bg[] = "#A04F5F";
static const char urg_border[] = "#A04F5F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
