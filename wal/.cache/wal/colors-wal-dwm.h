static const char norm_fg[] = "#c4c6cb";
static const char norm_bg[] = "#141c31";
static const char norm_border[] = "#646a7a";

static const char sel_fg[] = "#c4c6cb";
static const char sel_bg[] = "#C6B978";
static const char sel_border[] = "#c4c6cb";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
