static const char norm_fg[] = "#c3c4c8";
static const char norm_bg[] = "#0f1424";
static const char norm_border[] = "#5e6374";

static const char sel_fg[] = "#c3c4c8";
static const char sel_bg[] = "#978B6E";
static const char sel_border[] = "#c3c4c8";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
