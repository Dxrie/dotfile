static const char norm_fg[] = "#c3c3c6";
static const char norm_bg[] = "#12101e";
static const char norm_border[] = "#5f5d71";

static const char sel_fg[] = "#c3c3c6";
static const char sel_bg[] = "#8C7893";
static const char sel_border[] = "#c3c3c6";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
